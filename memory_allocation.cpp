#include <iostream>

int main(){
	int* p_num = new int;

	std::cout << "Heap allocated memory: " << p_num << std::endl;

	*p_num = 77;

	std::cout << "Value allocated: " << *p_num << std::endl;

	delete p_num;
	p_num = nullptr;

	return 0;
}
