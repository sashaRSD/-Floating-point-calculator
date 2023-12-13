#pragma once
#include <iostream>
#include "NeFloat.h"

class Per : public NeFloat {
protected:
	bool flag = 0;
public:
	Per(float v = 0) : NeFloat(v) {
		perfcheck();
	}

	Per(int b1, int b2) : NeFloat(b1, b2) {
		perfcheck();
	}

	Per(NeFloat frst) : NeFloat(frst) {
		perfcheck();
	}

	void perfcheck();
	void print();
	friend Per operator+(Per, Per);
	friend Per operator-(Per, Per);
	friend Per operator*(Per, Per);
	friend Per operator/(Per, Per);
};