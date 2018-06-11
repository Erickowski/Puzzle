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


	
