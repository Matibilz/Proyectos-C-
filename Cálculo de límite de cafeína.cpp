//DOSIFIACIÃÓN DE CAFEÍNA PARA UNA PERSONA ADULTA +18.

//Dosis segura de cafeína para una persona adulta son 400 ml/día equivalen a 5 tazas de café.
//Red bull tiene 80 ml de cafeína y la Monster tiene 160 ml por unidad.
//Cálculo de la ingesta máxima de cafeína por día : 5,7mg x kilo de peso.
//Cálculo para el mÃ¡ximo de ingesta diaría de golpe : 3mg x Klg de peso.

//Recordar que 1kg son 1.000.000 miligramos

#include <iostream>
#include <cmath>
using namespace std;

main(){
	
	//Titulo
	cout << "CALCULADORA DE DOSIFICACION DE CAFEINA" << endl;
	cout << "***************************************" << endl;
	
	
	//Entrada
	float kilogramos_peso;
	float calculolimite_diario;
	float calculodiario_golpe;
	int calculo_redbull_dia;
	int calculo_redbull_golpe;
	int calculo_monster_dia;
	int calculo_monster_golpe;
	
	cout << "Introduce tu peso en Kilogramos: " << endl;
	cin >> kilogramos_peso;
	cout << "***************************************" << endl;

	//Formulas
	calculolimite_diario = (5.7*kilogramos_peso);
	calculodiario_golpe = (3.0*kilogramos_peso);
	calculo_redbull_dia = ((5.7*kilogramos_peso)/80);
	calculo_redbull_golpe = ((3.0*kilogramos_peso)/80);
	calculo_monster_dia = ((5.7*kilogramos_peso)/160);
	calculo_monster_golpe = ((3.0*kilogramos_peso)/160);
	
	//Salida
	printf ("Miligramos max. de cafe/dia son: %.2f ml.", calculolimite_diario);
	cout << "" << endl;
	printf ("Milgramos max. de golpe/dia son: %.2f ml.\n", calculodiario_golpe);
	cout << "***************************************" << endl;
	printf ("Puedes tomar %d Redbull al dia.", calculo_redbull_dia);
	cout << "" << endl;	
	printf ("Puedes tomar %d Monster por dia.", calculo_monster_dia);
	cout << "" << endl;
	printf ("Puedes beber %d Redbull de golpe x dia.", calculo_redbull_golpe);
	cout << "" << endl;
	printf ("Puedes beber %d Monster de golpe x dia.", calculo_monster_golpe);
	
	return 0;
}
