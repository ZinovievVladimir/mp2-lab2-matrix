// ����, ���, ���� "������ ����������������-2", �++, ���
//
// sample_matrix.cpp - Copyright (c) ������� �.�. 07.05.2001
//   ������������ ��� Microsoft Visual Studio 2008 �������� �.�. (20.04.2015)
//
// ������������ ����������������� �������

#include <iostream>
#include "utmatrix.h"
//---------------------------------------------------------------------------

void main()
{
  int i, j, size;

  setlocale(LC_ALL, "Russian");
  cout << "������������ �������� ��������� ������������� ����������� ������"
    << endl;
  cout << "������ ������" << endl;
  cin >> size;
  TMatrix<int> a(size), b(size);

  cout << "������� ������� a" << endl;
  cin >> a;

  cout << "������� ������� b" << endl;
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
