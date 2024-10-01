#include "simular.h"

Partido::Partido(std::string e1, std::string e2) {
    equipo1 = e1;
    equipo2 = e2;
    // Inicializamos todas las estadísticas a cero al comenzar el partido
    faltasEquipo1 = 0;
    faltasEquipo2 = 0;
    tirosEsquina1 = 0;
    tirosEsquina2 = 0;
    resultado1 = 0;
    resultado2 = 0;
}

void Partido::iniciarPartido() {
    std::cout << "Comienza el partido entre " << equipo1 << " y " << equipo2 << std::endl;
    // Llamamos a la función jugarPartido() para simular el desarrollo del partido
    jugarPartido();
    // Mostramos el resultado final y las estadísticas del partido
    std::cout << "Resultado final: " << equipo1 << " " << resultado1 << " - " << resultado2 << " " << equipo2 << std::endl;
    std::cout << "Faltas: " << equipo1 << " " << faltasEquipo1 << ", " << equipo2 << " " << faltasEquipo2 << std::endl;
    std::cout << "Tiros de esquina: " << equipo1 << " " << tirosEsquina1 << ", " << equipo2 << " " << tirosEsquina2 << std::endl;
}

void Partido::jugarPartido() {
    // Simulamos una duración aleatoria para el partido (entre 45 y 90 minutos)
    int minutos = 45 + rand() % 46;
    // Iteramos por cada minuto simulado
    for (int i = 1; i <= minutos; ++i) {
        // Generamos un número aleatorio para determinar qué evento ocurre
        int evento = rand() % 10;
        // Si el número es menor a 3, simulamos un gol
        if (evento < 3) {
            hacerGol();
        }
        // Si el número está entre 3 y 6 (excluyendo el 7), simulamos una falta
        else if (evento < 7) {
            hacerFalta();
        }
        // Si el número es mayor o igual a 7, simulamos un tiro de esquina
        else {
            hacerTiroEsquina();
        }
    }
}

// Función privada para simular un gol y actualizar el marcador
void Partido::hacerGol() {
    // Elegimos aleatoriamente qué equipo marca el gol
    if (rand() % 2 == 0) {
        ++resultado1;
    } else {
        ++resultado2;
    }
}

int Partido::hacerGol(int a)
{
    return 0;
}

// Función privada para simular una falta y actualizar el contador de faltas
void Partido::hacerFalta() {
    // Elegimos aleatoriamente qué equipo comete la falta
    if (rand() % 2 == 0) {
        ++faltasEquipo1;
    } else {
        ++faltasEquipo2;
    }
}

// Función privada para simular un tiro de esquina y actualizar el contador
void Partido::hacerTiroEsquina() {
    // Elegimos aleatoriamente qué equipo obtiene el tiro de esquina
    if (rand() % 2 == 0) {
        ++tirosEsquina1;
    } else {
        ++tirosEsquina2;
    }
}
