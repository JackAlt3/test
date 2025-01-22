#include <iostream>

typedef int gotya;

int main() {
   
    int a = 5; 
    int b = 25;

    double result = (double) a /  (double) b * 100 ;  
    std::cout << "Result " << result << std::endl;
    
    return 0;
}
