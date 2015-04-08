#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	// declare variable as counter for number of guesses
int MolecubeII = 0;
int MolecubeIII = 0;
	
	for(;;)
	{
		// increment guess counter
		MolecubeIII = MolecubeIII + 1;
		//cout << MolecubeIII << endl;
		//
		

		cin >> MolecubeII;

		if (MolecubeII > random_number)
		{
		cout << "The number is too high\n";
			
		}else if (MolecubeII < random_number)
		{
		cout << "The number is too low\n";
		
		}else
		{
		cout << "The number is right\n";
		break;
		}

		// read input from user using magic...
		//
		
		// compare input from user to random number
		// print out winner, too high or too low message
		//

	}

	// print message with number of guesses
	//
	

	return 0;
}
