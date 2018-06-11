/*
 * DEVELOPERS:
 * Rafael Avendaño Martinez ISC
 * Reynaldo Paredes Miranda ISC
 * Noe Vasquez Godinez ICO
 */
#include <iostream>

#define 
 1 //Ganador
#define LOS 2 //Perdedor
#define AGA 3 //Iterar de nuevo.
#define ERR 4 //ERROR CHECK STATE.

#define L -1 //Lado izquierdo del rio
#define R 1 //Lado derecho del rio

#define BABY 0
#define CRAP 1
#define CONE 2


int itemSide[3];//Posicion 0 = Baby,Posicion 1 = Crap,Posicion 2 = Cone,

int checkState();

int main()
{

	switch(checkState())
	{
		case WIN:
		{
			std::cout<<"Your winner !!!! :)"<<std::endl;
			break;
		}
		case LOS:
		{
			std::cout<<"Game over !!! :("<<std::endl;
			break;
		}
		case AGA:
		{
			std::cout<<"Moved"<<std::endl;
			break;
		}
		case ERR:
		{
			std::cout<<"error game, please contact the developers"<<std::endl;
			break;
		}
	}
	
}

int checkState()
{
	/* RULES 
	 Baby Crap Cone | flag
	 * R    R    R    WIN
	 * R    R    L    LOS
	 * R    L    R    LOS
 	 * L    R    R    AGA
	 * L    L    L    AGA
	 * L    L    R    LOS
	 * L    R    L    LOS
	 * R    L    L    AGA
	 */
	int flag = ERR;
	
	/*Gandor*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAP]==R)&&(itemSide[CONE]==R) )
	{
		flag =  WIN; 
	}
	/*LOS*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAP]==R)&&(itemSide[CONE]==L) )
	{
		flag =  LOS; 
	}
	/*LOS*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAP]==L)&&(itemSide[CONE]==R) )
	{
		flag =  LOS; 
	}
	/*AGA*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAP]==R)&&(itemSide[CONE]==R) )
	{
		flag =  AGA; 
	}
	/*AGA*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAP]==L)&&(itemSide[CONE]==L) )
	{
		flag =  AGA; 
	}
	/*LOS*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAP]==L)&&(itemSide[CONE]==R) )
	{
		flag =  LOS; 
	}
	/*LOS*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAP]==R)&&(itemSide[CONE]==L) )
	{
		flag =  LOS; 
	}
	/*AGA*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAP]==L)&&(itemSide[CONE]==L) )
	{
		flag =  LOS; 
	}
	return flag;
}
