#include "Rectangulo.hpp"

double Rectangulo::calcArea() {
    return largo * ancho;
}

void Rectangulo::setLargo(double la) {
    largo = la;
}

void Rectangulo::setAncho(double an) {
    ancho = an;
}