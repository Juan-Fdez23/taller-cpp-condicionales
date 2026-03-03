#include <iostream>
#include <cmath>

int main(){
    double x , y;
    char z;

     std::cout << "*|Bienvenido a la calculadora|* \n";
  std::cout << "Por favor ingrese su operacion de la forma (a, signo, b) Ej: 2+3 \n";
  
  std::cin >> x >> z >> y;
  //std::cout << "a = "<< x << "\n" << "signo = "<< z << "\n"<< "b = "<< y;
  
  switch(z){
   case '+':{
    float suma = x + y;
    std::cout << "\n El total de la suma de " << x << " + " << y << " es igual a: " << suma;
    break;
    }
   
   case '-':{
    float resta = x - y;
    std::cout << "\n La diferencia de la resta de " << x << " - " << y << " es igual a: " << resta;
    break;
    }
   
   case '*':{
    float producto = x * y;
    std::cout << "\n El producto de la multiplicacion de " << x << " * " << y << " es igual a: " << producto;
    break;
    }
   
   case '/':{
    if(y != 0){
     float cociente = x / y;
     std::cout << "\n El cociente de la division de " << x << " / " << y << " es igual a: " << cociente;
    }else{
    std::cout << "\n \a MANDAMIENTO NUMERO 11: NO DIVIRIRAS POR 0";
   }
    break;
    }

    case '%':{
        if(y != 0){
        float residuo = fmod(x , y);
        std::cout << "\n El residuo de la division de " << x << " / " << y << " es igual a: " << residuo;    
        }else{
            std::cout << "\n \a EL RESIDUO DE UNA DIVISION POR 0 NO EXISTE, YA QUE NO SE PUEDE DIVIDIR POR 0";
        }
        break;
    }
    
     default:{
     std::cout << "\n \a Ha habido un error";
     break;
     }
   }
 std::cout << "\n |MUCHAS GRACIAS POR USAR ESTA CALCULADORA|";
 return 0;
}
