//C�lculo de dosificaci�n de cafe�na para una persona adulta o ni�o.
//Red bull tiene 80 ml de cafe�na y la Monster tiene 160 monsters al d�a.
//Dosis segura de cafe�na para una persona adulta son 400 ml/d�a equivalen a 5 tazas de caf�.
//Algoritmo ser�a 5,7mg x kilo de peso.

//Cuanto puedo tomar de golpe son 3mg x Klg de peso.

#include <iostream>
#include <cmath>
using namespace std;

main(){
	
	//TODO DEBE SER EN KILOGRAMOS, POR ESO OCUPAREMOS EL FLOAT PARA INTRODUCIR KILOGRAMOS
	int kilogramo_peso_persona;
	float calculo_limite_seguro_cafeina;
	float calculo_limite_seguro_cafeina_golpe;
	
	cout << "Introduzca su peso en kilogramos: " << endl;
	cin >> kilogramo_peso_persona;
	
	if(kilogramo_peso_persona>0){
		calculo_limite_seguro_cafeina = (5.7*kilogramo_peso_persona);
		printf ("Puedes tomar, durante el dia, como maximo %.1f miligramos de cafeina",calculo_limite_seguro_cafeina);
	}

	cout << "" << endl;

	if(kilogramo_peso_persona>0){
		calculo_limite_seguro_cafeina_golpe = (3*kilogramo_peso_persona);
			printf ("Puedes tomar de golpe, en el dia, como maximo %.1f miligramos de cafeina",calculo_limite_seguro_cafeina_golpe);
	}
	
	return 0;
}
