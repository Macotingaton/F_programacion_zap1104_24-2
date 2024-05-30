// 000_Practica_2_Variables.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    
    //Función para tener idioma español soportado

        //Tipo de dato+nombre+declaración de inicializacion

        bool bandera= false;

        //Imprimimos el valor de la Bandera
        std::cout << "El valor de la bandera variable booleana llamada bandera es " << bandera << std::endl;

        //Delcarar variable 
        int edad = 0;
        //Imprir valor inicializado
    std::cout << "El valor de la variable entera llamada edad es: " <<  edad << std::endl;

        //Solicitamos al usuario su edad
        std::cout<<"¿Cual es tu edad?"<< std::endl;

        //Recibimos la edad del usuario
        std::cin>> edad;
        std::cout << std::endl;
        if (edad > -1) { std::cout << "Tu edad es: " << edad << " años" << std::endl; }
        if (edad < 0) { std::cout << "Tu no existes aún" << std::endl; }
        if (edad < 18) { std::cout<<"No puedes pasar"; }
        if (edad >= 18) { std::cout << "Bienvenido"<< std::endl; }
        //Volver a imprimir el dato modificado

        
        
        

        //Realizar las siguientes acciones para los siguientes tipos de datos
  //Declarar variable
  //Imprimir valor inicializado
  //Solicitamos al usuario
  //Recibimos la variable del usuario
  //Volver a imprimir el dato modificado

        

          




}


