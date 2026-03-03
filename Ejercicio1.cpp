#include <iostream>
#include <iomanip>
#include <string>

int main(){
 double TCelsius;
 
 std::cout << "*|Bienvenido al convertidor de tempretaturas|* \n";
 std::cout << "*|Por favor ingrese su valor de temperatura en la unidad de medida Celsius (C)|* \n";
 
 std::cin >> TCelsius;
 std::cout << "El valor de la temperatura que has asignado es: " << TCelsius;

 
 
 double TFahrenheit = (9 * TCelsius)/5 + 32;
 std::cout << "El valor de la temperatura de " << TCelsius <<"C"<< " en grados Fahrenheit(F) es igual a: " << std::setprecision(2) << TFahrenheit << "F" << "\n";
 
 double TKelvin = TCelsius + 273.15;
 std::cout << "El valor de la temperatura de " << TCelsius << "C" << " en grados Kelvin(K) es igual a: " << std::setprecision(2) << TKelvin << "K" << "\n";
 
 double TRankine = TFahrenheit + 459.67;
 std::cout << "El valor de la temperatura de " << TCelsius << "C" << " en grados Rankine(R) es igual a: " << std::setprecision(2)  << TRankine << "R" << "\n";
 
 return 0;
}