#include <iostream>
#include <string>

int main(){
    int x;
    std::cout << "*|SISTEMAS DE CALIFICACIONES COMPACTO| \n*";
    std::cout << " Por favor ingrese su nota correspondida (de 0 a 100): ";
    std::cin >> x;


    if(x){
        if(x < 60){
            std::cout << "Usted ha sacado una F, Por lo tanto usted ha reprobado \n";
        }else if(x >= 60 && x < 70){
            std::cout << "Usted ha sacado una D, Por lo tanto usted ha aprobado con la minima nota \n";
        }else if(x >= 70 && x < 80){
            std::cout << "Usted ha sacado una C, Por lo tanto usted ha aprobado \n";
        }else if(x >= 80 && x < 90){
            std::cout << "Usted ha sacado una B, Por lo tanto usted ha aprobado altamente \n";
        }else if(x > 90){
            std::cout << "Usted ha sacado una A, Por lo tanto usted ha aprobado satisfactoriamente \n";
        }

    }

    return 0;
}