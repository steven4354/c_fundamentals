#include <iostream>
#include <string>

// what a namespace is
// https://www.geeksforgeeks.org/difference-namespace-class/

// optional: using below allows you to shorten and everytime cout is called it is always from iostream (std name)
// it is generally safer to use ::
// syntax: using namespace std


// creating a function - use void at the beginning if it doesn't return anything!
void PrintIntro() {
	constexpr int WORLD_LENGTH = 9;

	std::cout << "Hello to c fundamentals \n";
	std::cout << "This is how to place variables in strings: " << WORLD_LENGTH;
	std::cout << "\n";
}

int main() {

	// calling a function in c++
	PrintIntro();

	// below is how to get an input from the terminal / console
	// string comes from the string library

	std::cout << "Give an input:   ";
	std::string UserInput = "";
	std::cin >> UserInput;
	std::cout << "\n";

	// repeat the input
	std::cout << "This was your input " << UserInput;
	std::cout << "\n";

	return 0;
}