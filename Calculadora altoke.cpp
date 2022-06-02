/*Escrbir un programa que lea la entrada estandar de dos numerso y muestre en la salida estandar la suma, resta, multipliación y división. */

#include <iostream>

using namespace std;

int main(){
	
	//Variables
	int numero1, numero2;
	
	//Iniciamos las variables de operadores en 0.
	int suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	//Impresion de texto en pantalla + la introduccion de los imput a traves de un cin.
	cout <<"Ingrese el primer numero: \n"; cin >> numero1;
	cout <<"Ingresa el segundo numero \n"; cin >> numero2;
	
	//Definiremos las operaciones.
	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;
	
	cout << "\nLa suma es: " << suma << endl;
	cout << "La resta es: " << resta << endl;
	cout << "La multiplicacion es: " << multiplicacion << endl;
	cout << "La division es: " << division << endl;
	
	return 0;
}
