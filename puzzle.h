#include <iostream>
#include <stdlib.h>
#include <stdio.h>

#define WIN 1 //Ganador
#define LOS 2 //Perdedor
#define AGA 3 //Iterar de nuevo.
#define ERR 4 //ERROR CHECK STATE.

#define L -1 //Lado izquierdo del rio
#define R 1 //Lado derecho del rio

#define BABY 0
#define CRAB 1
#define CONE 2
#define MOM 3

void welcomeRule(void)
{
	std::cout<<"Welcome to the Puzzle of the Baby, the Crab, and the Cone.\n";
	std::cout<<"One hot summer day, Mama crossed the river to the left\n";
	std::cout<<"bank take a break from programming and buy an ice cream.\n";
	std::cout<<"She brought her baby and her pet crab. On the return\n";
	std::cout<<"she came to the river and was faced with a dilemma: how\n";
	std::cout<<"could they all cross without disaster? The ferry holds\n\n";
	std::cout<<"Mama and just one other item. The problem is that\n";
	std::cout<<"* if the baby is left with the cone, it spoils its dinner.\n";
	std::cout<<"* if the baby is left with the crab, the crab bites the baby.\n";
	std::cout<<"Please help Mama make her journey across the river!\n\n";  
	std::cout<<"Presione 'Enter' para continuar";
	getchar();
	//system("clear");
	}

int checkState(int itemSide[3])//Posicion 0 = Baby,Posicion 1 = Crab,Posicion 2 = Cone,
{
	/* RULES 
	 Baby Crab Cone MOM| flag
	 * R    R    R   X   WIN 
	 * R    R    L   R   AGA 
	 * R    R    L   L   LOS 
	 * R    L    R   R   AGA
	 * R    L    R   L   LOS
 	 * L    R    R   X   AGA
	 * L    L    L   X   AGA
	 * L    L    R   L   AGA
	 * L	L 	 R 	 R   LOS 
	 * L    R    L   R   LOS 
	 * L    R    L   L   AGA 
	 * R    L    L   X   AGA
	 */ 
	int flag = ERR;
	
	/*WIN*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAB]==R)&&(itemSide[CONE]==R) )
	{
		flag =  WIN; 
	}
	/*LOS*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAB]==R)&&(itemSide[CONE]==L) )
	{
		if (itemSide[MOM] == R)
		flag =  AGA;
		else 
		flag = LOS; 
	}
	/*LOS*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAB]==L)&&(itemSide[CONE]==R) )
	{
		if (itemSide[MOM] == R)
		flag =  AGA;
		else 
		flag = LOS;
		 
	}
	/*AGA*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAB]==R)&&(itemSide[CONE]==R) )
	{
		flag =  AGA; 
	}
	/*AGA*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAB]==L)&&(itemSide[CONE]==L) )
	{
		if (itemSide[MOM] == L)
		flag =  AGA;
		else 
		flag = LOS;
	}
	/*LOS*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAB]==L)&&(itemSide[CONE]==R) )
	{
		if (itemSide[MOM] == L)
		flag =  AGA;
		else 
		flag = LOS;
	}
	/*LOS*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAB]==R)&&(itemSide[CONE]==L) )
	{
		if (itemSide[MOM] == L)
		flag =  AGA;
		else 
		flag = LOS;
	}
	/*AGA*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAB]==L)&&(itemSide[CONE]==L) )
	{
		flag =  AGA; 
	}
	return flag;
}
/**
 * @autor Erick
 * Funcion captura movimiento para actualizar los estados
 * @param 
 * @return Personaje a mover
 * */
int captureMove()
{	
	int move;
	std::cout<<"Realize un movimiento:"<<std::endl;
	std::cout<<"1 Mover Baby:"<<std::endl;
	std::cout<<"2 Mover Crab:"<<std::endl;
	std::cout<<"3 Mover Cone:"<<std::endl;
	std::cout<<"4 Mover MOM:"<<std::endl;
	std::cin>>move;
	return move;
}
void displayState(int itemSide[3])
{
	std::cout<<"The Baby is on the "<<(itemSide[0]==-1 ? "left":"rigth")<<std::endl;
	std::cout<<"The Crab is on the "<<(itemSide[1]==-1 ? "left":"rigth")<<std::endl;
	std::cout<<"The Cone is on the "<<(itemSide[2]==-1 ? "left":"rigth")<<std::endl;
	std::cout<<"The Mom is on the  "<<(itemSide[3]==-1 ? "left":"rigth")<<std::endl;
}
int displayMessage(int stateGame)
{
	switch(stateGame)
	{
		case WIN:
		{
			std::cout<<"Your winner! :)"<<std::endl;
			break;}
		case LOS:
		{
			std::cout<<"game over! :("<<std::endl;
			break;}
		case AGA:
		{
			std::cout<<"Next move! :)"<<std::endl;
			break;}
		case ERR:
		{
			std::cout<<"Error! :)"<<std::endl;
			return -1;
			break;}
	}
}

