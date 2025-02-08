#include <iostream>

int main(){
	int array[10];
	for(int i = 0; i < 10; i++){
		array[i] = i * 6;
	}

	std::cout << "size of array: " << sizeof(array) / sizeof(int) << std::endl;

	for(int i : array){
		std::cout << i << std::endl;
	}
	return 0;
}
