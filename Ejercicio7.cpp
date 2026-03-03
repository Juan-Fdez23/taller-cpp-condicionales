#include <iostream>

int main(){
    int anio;

    std::cout << "*|BIENVENIDO AL VERIFICADOR DE ANIO BISIESTO|* \n";
    std::cout << "Ingrese un anio: ";
    std::cin >> anio;

    if(anio % 4 == 0){
        std::cout << "El anio " << anio << "\n es un anio bisiesto";
    }else if(anio % 400 == 0){
        std::cout << "El anio" << anio << "\n es un anio bisiesto ";
    }else if(anio % 100 == 0){
        std::cout << "El anio " << anio << "\n no es un anio bisiesto";
    }else{
        std::cout << "El anio " << anio << "\n no es un anio bisiesto";
    }



    return 0;
}