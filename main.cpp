
#include "puzzle.h"
#define MOVE_BABY 1
#define MOVE_CRAB 2
#define MOVE_CONE 3
#define MOVE_MOM 4


int itemSideGlobal[4];

int main(void)
{
	int stateGame;
	itemSideGlobal[BABY] = L;
	itemSideGlobal[CRAB] = L;
	itemSideGlobal[CONE] = L;
	itemSideGlobal[MOM] = L;
	
	/*Wellcome and rules*/ 
	welcomeRule();
	do{
		/*Display State*/
		displayState(itemSideGlobal);
		/*Capture move*/
		switch(captureMove())
		{
			case MOVE_BABY:
			{
					if ((itemSideGlobal[BABY]==L)&&(itemSideGlobal[MOM]==L))
					{
						itemSideGlobal[BABY] = R;
						itemSideGlobal[MOM] = R;
					}
					else if( (itemSideGlobal[BABY]==R)&&(itemSideGlobal[MOM]==R) )
					{
						itemSideGlobal[BABY] = L;
						itemSideGlobal[MOM] = L;
					}else
					{
						std::cout<<"movimiento invalido"<<std::endl;
					}
				break;}
			case MOVE_CRAB:
			{
					if ((itemSideGlobal[CRAB]==L)&&(itemSideGlobal[MOM]==L))
					{
						itemSideGlobal[CRAB] = R;
						itemSideGlobal[MOM] = R;
					}
					else if( (itemSideGlobal[CRAB]==R)&&(itemSideGlobal[MOM]==R) )
					{
						itemSideGlobal[CRAB] = L;
						itemSideGlobal[MOM] = L;
					}else
					{
						std::cout<<"movimiento invalido"<<std::endl;
					}
				break;}
			case MOVE_CONE:
			{
					if ((itemSideGlobal[CONE]==L)&&(itemSideGlobal[MOM]==L))
					{
						itemSideGlobal[CONE] = R;
						itemSideGlobal[MOM] = R;
					}
					else if( (itemSideGlobal[CONE]==R)&&(itemSideGlobal[MOM]==R) )
					{
						itemSideGlobal[CONE] = L;
						itemSideGlobal[MOM] = L;
					}else
					{
						std::cout<<"movimiento invalido"<<std::endl;
					}
				break;}
			case MOVE_MOM:
			{
				if(itemSideGlobal[MOM]==L)
				{
					itemSideGlobal[MOM] = R;
				}
				else
				{
					itemSideGlobal[MOM] = L;
				}
				break;}
			default:
			{
					std::cout<<"Error!"<<std::endl;
					return -1;
				break;}
		}
		//checkState
		stateGame = checkState(itemSideGlobal);
		//displayMessage
		displayMessage(stateGame);
	}while(stateGame==AGA);
	displayState(itemSideGlobal);
  return 0;
}

