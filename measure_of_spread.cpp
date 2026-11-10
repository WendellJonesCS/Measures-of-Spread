#include <cmath>
#include <iostream>

int main(){
    int N = 5;
    int population[N] = {};
    int sum = 0;

    for (int i = 0; i < N; i++){
        std::cout << "x" << i + 1 << std::endl;
        std::cin >> population[i];
    }
    for (int i = 0; i < N; i++){
         sum += population[i];
    }
    int mean = sum / N;
    int variance = 0;

   for (int i = 0; i < N; i++){
        variance += (std::pow(population[i] - mean, 2)) ;
   }
   variance = variance / N;
   std::cout << "Variance: " << variance << std::endl;
   std::cout << "Standard deviation ≈ " << std::sqrt(variance) << std::endl;

}
