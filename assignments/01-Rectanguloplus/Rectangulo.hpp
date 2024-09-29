#pragma once

class Rectangulo {
public:
    Rectangulo();
    Rectangulo(double, double);
    ~Rectangulo();
    
    double calcArea();
    void setLargo(double);
    void setAncho(double);

    double getLargo();
    double getAncho();
private:
    double largo, ancho;
};