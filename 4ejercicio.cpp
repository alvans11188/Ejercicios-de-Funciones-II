/*
Cálculo de Raíces de una Ecuación Cuadrática: Crea un programa que calcule las raíces de una 
ecuación cuadrática utilizando la fórmula general. Utiliza la función sqrt de la librería cmath para 
calcular la raíz cuadrada. Solicita al usuario los coeficientes de la ecuación (a, b, c) y muestra las 
raíces obtenidas. Considera los casos en los que las raíces son reales o complejas.
*/
#include <iostream>
#include <cmath>

using namespace std;
int main () {
	int a,b,c;
	double xp, xn, raiz;
	cout << "Ingresa los valores de a,b,c:  " << endl;
	cin >> a;
	cin >> b;
	cin >> c;	
	
	raiz = (pow(b,2)-1*(4*(a*c)));
	
	if (raiz > 0){
		// Casos con numeros reales
		raiz = sqrt(raiz);
		xp = ((-1*b) + raiz ) / 2*a;
		xn = ((-1*b) - raiz ) / 2*a;
		cout << " Los resultados posibles son: " << xp << "  y  " << xn << endl;
	}else{
		//Casos con numeros complejos
		raiz = -1*raiz;
		raiz = sqrt(raiz);
		
		
		raiz = raiz/2*a;
		xp = (-1*b)/ 2*a;
		xn = (-1*b) / 2*a;
		
		cout << " Los resultados son: " << xp << " + " << raiz << "i   "<< endl;
		cout << " Los resultados son: " << xn << " - " << raiz << "i   "<< endl;
		
	}
	

	return 0;
}
