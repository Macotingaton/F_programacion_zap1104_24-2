// P006  Repaso Entrada y Salida de datos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<locale>
#include<string>




int main()
{
    int i;
    std::string Title[5];
    

    std::cout << "Please, write the titles of your 5 favorite videogames from least to most:\n";
    
    for (int i = 0; i < 5; i++); {
        getline(std::cin, Title[i]);
    }
    
    
    std::cout << "So your 5 favorite videogames are:\n"

        for (int i = 0; i < 5; i++); {
            std::cout << Title[i] <<"\n";
            "SO COOL!";
    
    
    
    return 0;
}