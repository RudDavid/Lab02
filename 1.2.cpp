/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        20.09.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>
#include <cmath>

using namespace std;

// Вводим число пи
  const double PI = 3.141592;
  // Электрическая постоянная
  const double electricConstant = 8.85 / 100; 

int main() {          
  // Диэлектрическая проницаемость стекла 
  double eshka;
  // Радиус внутреннего цилиндра
  double innerCylinderRadius;
  // Радиус внешнего цилиндра
  double outerCylinderRadius;
  // Высота цилиндров
  double lenght;                                              
  double ceshka;
  double stepOfOuterCylinderRadius_1;
  double stepOfOuterCylinderRadius_2;
  double border_1;
  double border_2;
  
  border_1 = 5.0;
  border_2 = 10.0;
  stepOfOuterCylinderRadius_1 = 0.1;
  stepOfOuterCylinderRadius_2 = 1;
  eshka = 6.0;
  lenght = 13.0;
  outerCylinderRadius = 4.7;
  innerCylinderRadius = 4.5;

  while (outerCylinderRadius <= border_1) {
    ceshka = (2.0 * PI * eshka * electricConstant * lenght) / log(outerCylinderRadius / innerCylinderRadius);
    cout << "R = " << outerCylinderRadius;
    cout << "\t\tC = " << ceshka << endl;
    outerCylinderRadius += stepOfOuterCylinderRadius_1;
  }
    outerCylinderRadius += 0.9;
  
  do {
      ceshka = (2.0 * PI * eshka * electricConstant * lenght) / log(outerCylinderRadius / innerCylinderRadius);
      cout << "R = " << outerCylinderRadius;
      cout << "\t\tC = " << ceshka << endl;
      outerCylinderRadius += stepOfOuterCylinderRadius_2;
    } while (outerCylinderRadius <= border_2);
  return 0;
}


