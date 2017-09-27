/*
Pranay Srivastava- 3rd Period- September 21, 2017
Assignment Name: Display Text
Intro to C++ by displaying name, class period (as a variable), and "Hello World!" on console.
*/

//Libraries
#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()

//Namespaces
using namespace std;

//Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//Main
void main() {
	int p = 3;
	cout << "Pranay Srivastava" << endl;
	cout <<"Period " << p << endl;
	cout << "Hello World!" << endl;
	pause();
}