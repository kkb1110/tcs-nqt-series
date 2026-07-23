#include <iostream>

// Use extern "C" to stop C++ from altering the function name (name mangling)
extern "C" {
	void _start() {
		std::cout << "Hello! This program runs completely without a main() function.\n";

		// You CANNOT use "return" here because there is no main() to return to.
		// You must manually trigger a system exit call, or the program will crash.
		std::exit(0);
	}
}