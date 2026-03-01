#include <iostream>		//includes rand() and time libraries for Visual Sudio (after 2022)
#include <cstdlib>		//includes rand() function for other IDE's OPS
#include <ctime>		//includes time (unix) for other IDE's and OPS

using namespace std;

/*
Function generates a number between min and max that inserted.
*/

int randomNumberGeneratorBetweenMinAndMax(int min, int max)
{
	int randomNumberBetweenMinAndMax = min + (rand() % (max - min) + 1);
	
	return randomNumberBetweenMinAndMax;
}

int main()
{
	cout << time(0) << endl;
	srand(time(0));		//rand() needs to be seeded. srand() seeds rand with time (unix).
	cout << rand() << endl;

/*
srand() seed is used at starting of the main.
rand() function starts below without seed for rand().
*/

	cout << "enter min number, then max number: " << endl;
	
	int min = 0, max = 0;
	
	cin >> min;
	cin >> max;

	cout << "generated random number between min and max: " <<
		randomNumberGeneratorBetweenMinAndMax(min, max) << endl;
}