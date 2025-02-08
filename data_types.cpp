#include <iostream>

int main(){
	//defining data types
	int int1 = 10;
	double double1 = 2.9e2; //8 bytes
	float float1 = 2.9; //4 bytes
	bool bool1 = true;
	char char1 = 'A';

	std::cout << char1 << std::endl;
	std::cout << sizeof(char1) << std::endl;
	return 0;
}
