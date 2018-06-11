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

void displayWellcome()
{
	std::cout<<"------------------------"<<std::endl;
	std::cout<<" WELLCOME TO THE PUZZLE "<<std::endl;
	std::cout<<"------------------------"<<std::endl;
	std::cout<<"  "<<std::endl;
	
	std::cout<<" ------ RULES ------"<<std::endl;
	std::cout<<"Please help Mama make her journey across the river! " <<std::endl;
	std::cout<<"The problem is that: \n * if the baby is left with the cone, it spoils its dinner. \n * if the baby is left with the crab, the crab bites the baby."<<std::endl;
	
	std::cout<<"Mama is on the left."<<std::endl;
	std::cout<<"The baby is on the left bank."<<std::endl;
	std::cout<<"The crab is on the lehttps://github.com/JackeAleman/Puzzle.gitft bank."<<std::endl;
	std::cout<<"The cone is on the left bank."<<std::endl;
	std::cout<<"Who would you like Mama to cross with?"<<std::endl;
	std::cout<<"(convenciones: pos 1 for baby, pos 2 for crab, pos 3 for cone)"<<std::endl;
	
	std::cout<<"------------------------"<<std::endl;	;
}

void displayState( int X[3])
{
	std::cout<<"The baby is on the "<< (X[0] == -1 ? " left ":" right "  )<<std::endl;
	std::cout<<"The crab is on the "<< (X[1] == -1 ? " left ":" right "  )<<std::endl;
	std::cout<<"The cone is on the "<< (X[2] == -1 ? " left ":" right "  )<<std::endl;
}