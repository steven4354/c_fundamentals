#include <iostream>

// what a namespace is
// https://www.geeksforgeeks.org/difference-namespace-class/

// optional: using below allows you to shorten and everytime cout is called it is always from iostream (std name)
// it is generally safer to use ::
// syntax: using namespace std

int main() {

	constexpr int WORLD_LENGTH = 9;

	std::cout << "Hello to c fundamentals \n";
	std::cout << "This is how to place variables in stirngs " << WORLD_LENGTH;

	return 0;
}