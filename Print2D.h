#pragma once
#include <iostream>
#include <cmath>

class Coordinate
{
private:
	int mXpoint;
	int mYpoint;

public:
	int GetLength() const;
	void PrintPoint() const;
	void SetPoint();
	// ����� �ҽ��� ������
	// Ŭ������ ����/���� �� ������ �Ѵ�.
};

