#include <iostream>

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
	
	/*WIN*/
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
/**
 * @autor Erick
 * Funcion captura movimiento para actualizar los estados
 * @param arreglo actual de los personajes
 * @return arreglo con las posiciones capturadas
 * */
int* captureMove(int itemSide[3])
{
	int estadoBaby;
	int estadoCrab;
	int estadoCone;
	std::cout<<"Ingrese pocision de Baby: ";
	std::cin>>estadoBaby;
	std::cout<<"Ingrese pocision de Crab: ";
	std::cin>>estadoCrab;
	std::cout<<"Ingrese pocision de Cone: ";
	std::cin>>estadoCone;
	return itemSide;
	
}
