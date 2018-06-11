#include <iostream>
#include <stdio.h>

void displayState( int X[3])
{
	std::cout<<"The baby is on the "<< (X[0] == -1 ? " left ":" right "  )<<std::endl;
	std::cout<<"The crab is on the "<< (X[1] == -1 ? " left ":" right "  )<<std::endl;
	std::cout<<"The cone is on the "<< (X[2] == -1 ? " left ":" right "  )<<std::endl;
}


int main()
{
	int itemSide[3] = {-1,1,-1};	
	displayState( itemSide );	
	return 0;

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
	
