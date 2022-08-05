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
	// 헤더와 소스의 구분은
	// 클래스의 선언/정의 로 나눠야 한다.
};

