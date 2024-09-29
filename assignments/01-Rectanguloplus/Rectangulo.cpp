#include "Rectangulo.hpp"

//Constructor default 
Rectangulo::Rectangulo() {
    largo=0;
    ancho=0;
}

//Otro constructor con sobrecarga
Rectangulo::Rectangulo(double la, double an)
{
    largo = la;
    ancho = an;
}

//Destructor
Rectangulo::~Rectangulo()
{}

//Cálcular el área del rectangulo 
double Rectangulo::calcArea() {
    return largo * ancho;
}

//Funciones miembro setters
void Rectangulo::setLargo(double la) {
    largo = la;
}

void Rectangulo::setAncho(double an) {
    if (an > 0)
        ancho = an;
    else
        ancho=0;
}

//Funciones miembro getters
double Rectangulo::getAncho() {
    return ancho;
}

double Rectangulo::getLargo() {
    return largo;
}