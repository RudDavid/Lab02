/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        20.09.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  // Вводим число пи
  const double PI = 3.141592;
  // Электрическая постоянная
  const double electricConstant = 8.85 / 100;           

  // Диэлектрическая проницаемость стекла 
  int eshka;
  // Радиус внутреннего цилиндра
  float innerCylinderRadius;
  // Радиус внешнего цилиндра
  float outerCylinderRadius;
  // Высота цилиндров
  float lenght;                                              
  float ceshka;

  eshka = 6;
  lenght = 13.0;
  outerCylinderRadius = 4.7;
  innerCylinderRadius = 4.5;

  while (outerCylinderRadius <= 5) {
    ceshka = (2.0f * PI * eshka * electricConstant * lenght) / (log(outerCylinderRadius / innerCylinderRadius));
    cout << "R = " << outerCylinderRadius;
    cout << "\t\tC = " << ceshka << endl;
    outerCylinderRadius += 0.1;
    }
    outerCylinderRadius += 0.9;
  
    do {
      ceshka = (2 * PI * eshka * electricConstant * lenght) / (log(outerCylinderRadius / innerCylinderRadius));
      cout << "R = " << outerCylinderRadius;
      cout << "\t\tC = " << ceshka << endl;
      outerCylinderRadius += 1;
    } while (outerCylinderRadius <= 10);
  return 0;
}
