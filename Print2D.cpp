#include "Print2D.h"
#include <iostream>

int main()
{
	Coordinate Print2d;

	std::cout << "원점에서 ";
	Print2d.Coordinate::PrintPoint();
	std::cout << "까지의 거리는 " << Print2d.Coordinate::GetLength() << " 입니다.";
}
