#include "Print2D.h"
#include <iostream>

int main()
{
	Coordinate Print2d;

	std::cout << "�������� ";
	Print2d.Coordinate::PrintPoint();
	std::cout << "������ �Ÿ��� " << Print2d.Coordinate::GetLength() << " �Դϴ�.";
}
