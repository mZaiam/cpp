#include <iostream>

int main(){
	int i = 10;
	int* p_i = &i;
	
	std::cout << i << std::endl;
	std::cout << p_i << std::endl;

	const char* msg = "Hello, World!";
	
	std::cout << msg << std::endl;
	std::cout << *msg << std::endl;

	return 0;
}
