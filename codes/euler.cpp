#include <iostream>
#include <functional>
#include <vector>
#include <cmath>

std::vector<float> euler(float y0, float t0, std::function<float(float, float)> f, int n, float h){
    if (n <= 0) return {}; 

    std::vector<float> y(n + 1);  
    y[0] = y0; 
    float t = t0;

    for(int i = 0; i < n; i++){
        y[i + 1] = y[i] + h * f(y[i], t); 
        t += h;
    }

    return y;  
}

float malthus(float y, float t){
	return 1.0f * y;
}

int main(){
    float y0 = 1.0f;
    float t0 = 0.0f;
    float h = 0.1f;
    int n = 100;

    std::vector<float> solution = euler(y0, t0, malthus, n, h);

    if(!solution.empty()){
        std::cout << "Euler Solution: " << solution.back() << std::endl;
        std::cout << "Exact Solution: " << std::exp(float(n*h)) << std::endl;

        for(float y : solution){
            std::cout << y << std::endl;
        }
    } 
	else {
        std::cout << "Invalid parameters or memory error!" << std::endl;
    }

    return 0;
}