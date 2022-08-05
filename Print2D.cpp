#include "Print2D.h"
#include <iostream>
#include <cmath>

int Coordinate::GetLength() const
{
	double length, result;
	length = ((mXpoint * mXpoint) + (mYpoint * mYpoint));
	result = sqrt(length);		// 이런 기능들은 사이트 cppreference 에서 확인
	return result;
}

void Coordinate::PrintPoint() const
{
	std::cout << "( " << mXpoint << ", " << mYpoint << " )" << std::endl;
}

void Coordinate::SetPoint()
{
	int x, y;
	std::cout << "x 좌표를 입력해주세요." << std::endl;
	std::cin >> x;
	mXpoint = x;

	std::cout << "y 좌표를 입력해주세요." << std::endl;
	std::cin >> y;
	mYpoint = y;
}