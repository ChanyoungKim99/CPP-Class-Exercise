#pragma once
#include <iostream>

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

