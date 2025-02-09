#include <iostream>

int main(){
	for(int i = 0; i < 10; i+=2){
		std::cout << "for iteration: " << i << std::endl;
	}

	int i = 0;
	while(i < 3){
		std::cout << "while iteration: " << i << std::endl;
		i++;
	}
	return 0;
}