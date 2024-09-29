#include <iostream>
#include "Rectangulo.hpp"

int main() 
{
  Rectangulo rect;
  Rectangulo rect1(10,20);
  
  double area;

  rect.setLargo(10);
  rect.setAncho(5);

  area = rect.calcArea();
  std::cout << "El area es: " << area << "\n";

  return 0;
}
