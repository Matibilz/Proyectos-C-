/*Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA */

#include <iostream>
using namespace std;

main (){
	
	float precio_sin_iva;
	float iva_del_producto;
	float precio_agregado_iva;
	
	cout << "El precio del producto sin impuesto (%19): \n";
	cin >> precio_sin_iva;
	
	//Calculo de precio con IVA.
	iva_del_producto = ((precio_sin_iva * 19)/100);
	
	printf ("El IVA del producto es: %.2f precio\n", iva_del_producto);
	
	//Sumamos el IVA al producto
	precio_agregado_iva = precio_sin_iva + iva_del_producto;
	printf ("El precio del pruducto con IVA es: %.2f pesos", precio_agregado_iva);
	
	return 0;
}
