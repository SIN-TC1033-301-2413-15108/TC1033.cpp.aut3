#pragma once

class Rectangulo {
public:
    double calcArea();
    void setLargo(double);
    void setAncho(double);
private:
    double largo, ancho;
};