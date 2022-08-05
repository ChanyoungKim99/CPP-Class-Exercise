#include "Print2D.h"
#include <iostream>
#include <cmath>

int Coordinate::GetLength() const
{
	double length, result;
	length = ((mXpoint * mXpoint) + (mYpoint * mYpoint));
	result = sqrt(length);		// �̷� ��ɵ��� ����Ʈ cppreference ���� Ȯ��
	return result;
}

void Coordinate::PrintPoint() const
{
	std::cout << "( " << mXpoint << ", " << mYpoint << " )" << std::endl;
}

void Coordinate::SetPoint()
{
	int x, y;
	std::cout << "x ��ǥ�� �Է����ּ���." << std::endl;
	std::cin >> x;
	mXpoint = x;

	std::cout << "y ��ǥ�� �Է����ּ���." << std::endl;
	std::cin >> y;
	mYpoint = y;
}