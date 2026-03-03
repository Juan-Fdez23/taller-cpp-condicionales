#include <iostream>
#include <string>
#include <cmath>

int main(){
    std::string nombre;
    double saldo;
    saldo = 2000;
    char x;

    std::cout << "*|BIENVENIDO AL CAJERO ATM|* \n";
    std::cout << "Antes de comenzar, por favor ingrese su nombre: ";
    std::cin >> nombre;
    std::cout << "Hola, " << nombre << "\n";
    std::cout << "Por favor, indica que tipo de transaccion desea hacer:" << "\n";
    std::cout << "Marque 1, si desea depositar. \n";
    std::cout << "Marque 2, si desea retirar. \n";
    std::cout << "Marque 3, si desea consultar su saldo. \n";
    std::cin >> x;

    switch(x){
        case '1':{
            double depositar;
            std::cout << "Has elegido la opcion de depositar \n";
            std::cout << "Por favor indique el valor de cuanto desea depositar: ";
            std::cin >> depositar;
            if(depositar < 0){
                std::cout << "No puedes ingresar valores negativos para depositar \n";
            }else{
            std::cout << "Su saldo actual es $" << saldo << "\n";
            std::cout << "El valor que usted ha puesto para despositar es $" << depositar << "\n";
            saldo += depositar;    
            std::cout << "Su nuevo saldo es de $" << saldo << "\n";
            }
            break;
            }
            
        case '2':{
            double retirar;
            std::cout << "Has elegido la opcion de retirar \n";
            std::cout << "Por favor indique el valor de cuanto desea retirar: ";
            std::cin >> retirar;
            if(retirar < 0){
               float r = abs(retirar);
                std::cout << "Su saldo actual es $" << saldo << "\n";
                std::cout << "El valor que usted ha puesto para retirar es $" << r << "\n";
                saldo -= r;
                std::cout << "Su nuevo saldo es de $" << saldo << "\n";
            }else{
                std::cout << "Su saldo actual es $" << saldo << "\n";
                std::cout << "El valor que usted ha puesto para retirar es $" << retirar << "\n";
                saldo -= retirar;
                std::cout << "Su nuevo salvo es de $" << saldo << "\n"; 
            }
            break;
        }
        case '3':{
            std::cout << "Has elegido la opcion de consultar saldo \n";
            std::cout << "Su saldo actual es de " << saldo;
            break;
        }
        default:{
            std::cout << "Has ingresado un valor que no esta en el menu, por favor intentelo nuevamente \n";
        }
    }

    return 0;
}