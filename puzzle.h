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
