#include<iostream>
#include<limits>
int Length{};
int Width{};
using namespace std;
int main()
{
	cout << "Hello, welcome to the Rectangle Area Generator.\n";
	cout << "In meters, what is the length of your rectangle?\n";
	cin >> Length;
	cout << "In meters, what is the width of your rectangle?\n";
	cin >> Width;
	cout << "The area of your rectangle is: " << Length * Width << " meters squared.\n";
	std::cin.clear(); // reset any error flags
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
	return 0;
}