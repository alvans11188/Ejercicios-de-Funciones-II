/* 
Juego de Piedra, Papel y Tijeras: Desarrolla un programa que simule el juego de piedra, papel y
tijeras contra la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. Muestra el
resultado final indicando el ganador del juego.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
using namespace std;
string obtenerjugadacompu() {
    int jugada = rand() % 3; 
    switch (jugada) {
        case 0:
            return "piedra";
        case 1:
            return "papel";
        case 2:
            return "tijeras";
        default:
            return "piedra";
    }
}

string determinarGanador(string jugadaUsuario, string jugadacompu) {
    if (jugadaUsuario == jugadacompu) {
        return "empate";
    } else if ((jugadaUsuario == "piedra" && jugadacompu == "tijeras") ||
               (jugadaUsuario == "papel" && jugadacompu == "piedra") ||
               (jugadaUsuario == "tijeras" && jugadacompu == "papel")) {
        return "usuario";
    } else {
        return "computadora";
    }
}

int main() {
    srand(time(0)); 

    int puntosU = 0;
    int puntosC = 0;

    while (puntosU < 3 && puntosC < 3) {
        string jugadaUsuario;
        cout << "Escribe tu jugada (piedra, papel o tijeras): ";
        cin >> jugadaUsuario;

        string jugadacompu = obtenerjugadacompu();
        cout << "elecccion del computador: " << jugadacompu << endl;

        string resultado = determinarGanador(jugadaUsuario, jugadacompu);
        if (resultado == "usuario") {
            puntosU++;
            cout << "gano " << endl;
        } else if (resultado == "computadora") {
            puntosC++;
            cout << "gano el computador" << endl;
        } else {
            cout << "Empate" << endl;
        }
        cout << "Puntos: jugador " << puntosU << " - " << puntosC << " computador" << endl;
    }

    if (puntosU == 3) {
        cout << " Gano" << endl;
    } else {
        cout << "Perdio, Intente denuevo" << endl;
    }
    return 0;
}

