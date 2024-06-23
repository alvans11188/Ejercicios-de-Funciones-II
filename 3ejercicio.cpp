/*
Cálculo de la Hipotenusa: Crea un programa que calcule la hipotenusa de un triángulo rectángulo 
utilizando la fórmula de Pitágoras. Solicita al usuario los valores de los catetos y utiliza la función 
sqrt de cmath para calcular la raíz cuadrada de la suma de los cuadrados de los catetos. Muestra el 
resultado de la hipotenusa calculada.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int ct, a , b,pa,pb,suma,hip;
	cout << "Ingresa los valores de los catetos: ";
	cin >> a;
	cin >> b;
	pa= pow(a,2);
	pb= pow(b,2);
	suma= pa+ pb;
	hip = sqrt (suma);
	cout << "La hipotenusa del triangulo rectangulos era de: " << hip << endl;
	
	
	return 0;
}
