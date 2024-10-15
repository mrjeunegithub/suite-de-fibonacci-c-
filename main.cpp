#include<iostream>

int fibonacci(int n);
 

int main() {
    
    
    std::cout << "Entrer le nombre du terme que vous voulez: "<< std::endl;
    int n;
    std::cin >> n;
    int u = fibonacci(n);
    
    std::cout << "Le terme " << n << " de la suite de Fibonacci est: " << u << std::endl;

    return 0;
}
int fibonacci(int n)
    {
        
        if (n == 0)  return 0;
        if (n == 1)  return 1;

        int x = 0;
        int y = 1;
        int u =0;

        for(int i = 1; i <= n; i++){
            
            u = x + y;
            x = y;
            y = u;
            
        }
        return u;
    }