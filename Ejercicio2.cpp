#include <iostream>

int main(){
    int alpha, beta, gamma;
    int sumatoria = alpha + beta + gamma;
    std::cout << "*|Bienvenido al Clasificador de Triangulos|* \n";
    std::cout << "*|Por favor ingrese el valor de sus angulos de la forma a b c |* \n";
    std::cin >> alpha >> beta >> gamma;
    std::cout << "\n Alpha = " << alpha;
    std::cout << "\n Beta = " << beta;
    std::cout << "\n Gamma = " << gamma << "\n";
    
    if(alpha + beta > gamma && alpha + gamma > beta && beta + gamma > alpha){
        if(alpha == beta && beta == gamma){
            std::cout << "El tipo de triangulo es equilatero \n";
        }else if(alpha == beta || alpha == gamma || gamma == beta){
            std::cout << "El tipo de triangulo es isoceles \n";
        }else{
          std::cout << "El tipo de triangulo es escaleno \n";  
        }
    }

        
    

    if(alpha < 90 && beta < 90 && gamma < 90){
        std::cout << "Ademas, el tipo de triangulo es acutangulo \n";
    }else if(alpha == 90 && beta , gamma < 90 || beta == 90 && alpha , gamma < 90 || gamma == 90 && alpha , beta < 90){
        std::cout << "Ademas, el tipo de triangulo es rectangulo \n";
    }else if(alpha > 90 && beta , gamma < 90 || beta  > 90 && alpha , gamma < 90 || gamma > 90 && alpha , beta < 90){
        std::cout << "Ademas, el tipo de triangulo es obtusángulo \n";
    }
    return 0;
}