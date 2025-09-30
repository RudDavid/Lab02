/****************************
 * Автор:       Руднев Д.А. *
 * Дата:        20.09.2025  *
 * Название:    Вариант 11  *
 * **************************/

#include <iostream>
#include <cmath>

using namespace std;

  // Инициализируем число пи
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
  double stepOfOuterCylinderRadius1;
  double stepOfOuterCylinderRadius2;
  double border1;
  double border2;
  
  cout << "Enter border1 = "; cin >> border1;
  cout << "Enter border2 = "; cin >> border2;
  cout << "Enter stepOfOuterCylinderRadius1 = "; cin >> stepOfOuterCylinderRadius1;
  cout << "Enter stepOfOuterCylinderRadius2 = "; cin >> stepOfOuterCylinderRadius2;
  cout << "Enter eshka = "; cin >> eshka;
  cout << "Enter lenght = "; cin >> lenght;
  cout << "Enter outerCylinderRadius1 = "; cin >> outerCylinderRadius1;
  cout << "Enter innerCylinderRadius1 = "; cin >> innerCylinderRadius1;

  while (outerCylinderRadius <= border1) {
    ceshka = 2.0 * PI * eshka * electricConstant * lenght / log(outerCylinderRadius / innerCylinderRadius);
    cout << "R = " << outerCylinderRadius
         << "\t\tC = " << ceshka << endl;
    outerCylinderRadius += stepOfOuterCylinderRadius1;
  }
  outerCylinderRadius += 0.9;
  
  do {
      ceshka = 2.0 * PI * eshka * electricConstant * lenght / log(outerCylinderRadius / innerCylinderRadius);
      cout << "R = " << outerCylinderRadius
           << "\t\tC = " << ceshka << endl;
      outerCylinderRadius += stepOfOuterCylinderRadius2;
  } while (outerCylinderRadius <= border2);
  
  return 0;
}



