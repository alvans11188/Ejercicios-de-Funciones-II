/*
Funci�n calcularRaices: Ampl�a el ejercicio anterior definiendo una funci�n void llamada 
calcularRaices que reciba los coeficientes de la ecuaci�n (a, b, c) por valor y las variables donde 
se almacenar�n las ra�ces por referencia. Adem�s, incluye una variable por referencia que indique si 
las ra�ces son reales o complejas. La funci�n debe calcular las ra�ces utilizando la f�rmula general y 
actualizar las variables correspondientes.
*/
#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices(int a, int b, int c) {
	
	double xp, xn, raiz;
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
	

}




void variablePorReferencia(double &raiz) {
	if (raiz > 0) {
		cout << "Las raices son reales" << endl;
	}else{	
		cout << "Las raices son complejas" << endl;
	}
}


int main (){
	double a,b,c, raiz;

	cout << "Ingresa los valores de a,b,c:  " << endl;
	cin >> a;
	cin >> b;
	cin >> c;	
	
	calcularRaices(a,b,c);
	variablePorReferencia(raiz);
	 
	

	return 0;
}
