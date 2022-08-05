#pragma once
#include <iostream>
#include <cmath>

class Coordinate
{
private:
	int mXpoint{4};
	int mYpoint{3};

public:
	int GetLength() const
	{
		double length, result;
		length = ((mXpoint * mXpoint) + (mYpoint * mYpoint));
		result = sqrt(length);
		return result;
	}

	void PrintPoint() const
	{
		std::cout << "( " << mXpoint << ", " << mYpoint << " )" << std::endl;
	}
};

