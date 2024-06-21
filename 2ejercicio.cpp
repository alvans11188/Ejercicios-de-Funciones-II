/*
Generador de Números Aleatorios: Crea un programa que genere y muestre una serie de números 
aleatorios entre 0 y un número máximo especificado por el usuario. El programa solicitará al usuario 
la cantidad de números aleatorios que desea generar y el valor máximo permitido. Utiliza la función 
rand de la librería cstdlib para generar los números aleatorios.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	int n, nm, i, na;
	
	cout << "Ingrese la cantidad de numero aleatorios que desea generar: ";
	cin >> n;
	cout << "Ingrese el numero maximo que desea generar: ";
	cin >> nm;
	srand(time(0));
	
	for (int i=1;i<=n;i++){
		
		na = rand() % nm + 1;
		cout << na << endl;
	}
	
	
	
	return 0;
}

