#include <iostream>

int* fibonacci(int n){
	if(n <= 0) return nullptr;
	
	int size = n + 1;

	int* p_fib = new(std::nothrow) int[size];
	if(! p_fib) return nullptr;

	p_fib[0] = 0;
	p_fib[1] = 1;
	
	for(int i = 2; i < size; i++){
		p_fib[i] = p_fib[i - 1] + p_fib[i - 2];
	}

	return p_fib;
}

int main(){
	int n = 20;
	int* p_fib = fibonacci(n);

	if(p_fib){
		std::cout << "Fibonacci Sequence:" << std::endl;
		for(int i = 0; i < n; i++){
			std::cout << p_fib[i] << std::endl;
		}
		delete[] p_fib;
	}
	else{
		std::cout << "Memory allocation failed!";
	}

	return 0;
}
