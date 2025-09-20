/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        20.09.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double PI = 3.141592;                           // Вводим число пи
  const double electricConstant = 8.85 / 100;           // Электрическая постоянная

  int eshka;                                              // Диэлектрическая проницаемость стекла 
  float innerCylinderRadius;                          // Радиус внутреннего цилиндра
  float outerCylinderRadius;                                              // Радиус внешнего цилиндра
  float lenght;                                              // Высота цилиндров
  float ceshka;

  eshka = 6;
  lenght = 13;
  outerCylinderRadius = 4.7;
  innerCylinderRadius = 4.5;

  while (outerCylinderRadius <= 5) {
    ceshka = (2 * PI * eshka * electricConstant * lenght) / (log(outerCylinderRadius / innerCylinderRadius));
    cout << "R = ";
    cout << outerCylinderRadius;
    cout << "\t\tC = ";
    cout << ceshka << endl;
    outerCylinderRadius += 0.1;
    }
    outerCylinderRadius += 0.9;
    while (outerCylinderRadius <= 10) {
      ceshka = (2 * PI * eshka * electricConstant * lenght) / (log(outerCylinderRadius / innerCylinderRadius));
      cout << "R = ";
      cout << outerCylinderRadius;
      cout << "\t\tC = ";
      cout << ceshka << endl;
      outerCylinderRadius += 1;
    }
    return 0;
}
