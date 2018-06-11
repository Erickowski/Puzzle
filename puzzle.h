#include <iostream>

#define 
#define WIN 1 //Ganador
#define LOS 2 //Perdedor
#define AGA 3 //Iterar de nuevo.
#define ERR 4 //ERROR CHECK STATE.

#define L -1 //Lado izquierdo del rio
#define R 1 //Lado derecho del rio

#define BABY 0
#define CRAB 1
#define CONE 2

int checkState(int itemSide[3])//Posicion 0 = Baby,Posicion 1 = Crab,Posicion 2 = Cone,
{
	/* RULES 
	 Baby Crab Cone | flag
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
	if( (itemSide[BABY]==R)&&(itemSide[CRAB]==R)&&(itemSide[CONE]==R) )
	{
		flag =  WIN; 
	}
	/*LOS*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAB]==R)&&(itemSide[CONE]==L) )
	{
		flag =  LOS; 
	}
	/*LOS*/
	if( (itemSide[BABY]==R)&&(itemSide[CRAB]==L)&&(itemSide[CONE]==R) )
	{
		flag =  LOS; 
	}
	/*AGA*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAB]==R)&&(itemSide[CONE]==R) )
	{
		flag =  AGA; 
	}
	/*AGA*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAB]==L)&&(itemSide[CONE]==L) )
	{
		flag =  AGA; 
	}
	/*LOS*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAB]==L)&&(itemSide[CONE]==R) )
	{
		flag =  LOS; 
	}
	/*LOS*/
	if( (itemSide[BABY]==L)&&(itemSide[CRAB]==R)&&(itemSide[CONE]==L) )
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


int captureMove(){
	int arr[3];
	arr[0]=-1;
	arr[1]=-1;
	arr[2]=-1;
	int opc=0;
	do{
		printf("\nBaby: 0\nCrab: 1\nCone: 2\nElemento a desplazar\n-->");
		scanf("%i",&opc);
		if( opc<0 || opc >2){
			printf("No mames we, ese mono existe!");
			}else{
				if(arr[opc]==-1)
					arr[opc]=1;
				else
					arr[opc]=-1;		
			printf("\n El arreglo quedo así \n ");
			for(int i=0;i<3;i++){
					printf(" %i ",arr[i]);
				}
			printf("\n ");
				}
		}while(opc<0 || opc>2);

}
