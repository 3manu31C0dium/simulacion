#include <iostream>
#include <cstdlib> // Para la función rand()
#include <ctime> // Para sembrar la función rand()
#include "simular.h"

int main() {
    // Sembramos la función rand() para obtener resultados aleatorios diferentes en cada ejecución
    srand(time(0));

    // Creamos un objeto Partido para simular un partido entre el Barcelona y el Real Madrid
    Partido partido("Nacional", "Medellin");
    // Iniciamos el partido
    partido.iniciarPartido();

    return 0;
}
