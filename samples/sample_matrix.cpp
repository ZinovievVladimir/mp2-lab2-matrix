// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// sample_matrix.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (20.04.2015)
//
// Тестирование верхнетреугольной матрицы

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  int i, j, size;

  setlocale(LC_ALL, "Russian");
  cout << "Тестирование программ поддержки представления треугольных матриц"
    << endl;
  cout << "Размер матриц" << endl;
  cin >> size;
  TMatrix<int> a(size), b(size);

  cout << "Введите матрицу a" << endl;
  cin >> a;

  cout << "Введите матрицу b" << endl;
  cin >> b;

  
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;

  TMatrix<int> c(5);

  c = a + b;
  cout << "Matrix c = a + b" << endl << c << endl;

  c = a - b;
  cout << "Matrix c = a - b" << endl << c << endl;
}
//---------------------------------------------------------------------------
