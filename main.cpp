#include <iostream>
void displayWellcome();
void displayState( int X[3]);


int main()
{
	int itemSide[3] = {-1,1,-1};	
	displayState( itemSide );
	displayWellcome();	
	return 0;

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
