#ifndef SIMULAR_H
#define SIMULAR_H

#include <iostream>

class Partido {
private:
    // Atributos públicos para acceder fácilmente a la información del partido
    std::string equipo1, equipo2;
    int faltasEquipo1, faltasEquipo2, tirosEsquina1, tirosEsquina2;
    int resultado1, resultado2;

public:
    // Constructor para inicializar los equipos y las estadísticas al crear un objeto Partido
    Partido(std::string e1, std::string e2);
    // Función para iniciar y simular todo el partido
    void iniciarPartido();

private:
    // Función privada para simular el desarrollo del partido
    void jugarPartido();
    // Función privada para simular un gol y actualizar el marcador
    void hacerGol();
    // Función privada para simular un gol (incluyendo aleatoriedad y actualizar el marcador
    int hacerGol(int a);
    // Función privada para simular una falta y actualizar el contador de faltas
    void hacerFalta();
    // Función privada para simular un tiro de esquina y actualizar el contador
    void hacerTiroEsquina();
};

#endif // SIMULAR_H
