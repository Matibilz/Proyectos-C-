//DOSIFIACI��N DE CAFE�NA PARA UNA PERSONA ADULTA +18.

//Dosis segura de cafe�na para una persona adulta son 400 ml/d�a equivalen a 5 tazas de caf�.
//Red bull tiene 80 ml de cafe�na y la Monster tiene 160 ml por unidad.
//C�lculo de la ingesta m�xima de cafe�na por d�a : 5,7mg x kilo de peso.
//C�lculo para el máximo de ingesta diar�a de golpe : 3mg x Klg de peso.

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
