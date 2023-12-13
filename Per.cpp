#include <iostream>
#include "NeFloat.h"
#include "Per.h"

#define L_M 999
#define L_E 5

using namespace std;

void Per::print(void) {
	if (flag == 1) { printf(" *!!!\n"); }
	NeFloat::print();
}

void Per::perfcheck() {
	if (M == 0) {
		flag = 0;
		return;
	}
	if (e > L_E) {
		e = L_E;
		M = L_M;
		flag = 1;
	}

	if (e < -L_E) {
		e = -L_E;
		M = L_M;
		flag = 1;
	}
}

Per operator+(Per frst, Per scnd) {
	Per obj = operator+((NeFloat)frst, (NeFloat)scnd);
	return obj;
}

Per operator-(Per frst, Per scnd) {
	Per obj = operator-((NeFloat)frst, (NeFloat)scnd);
	return obj;
}

Per operator*(Per frst, Per scnd) {
	Per obj = operator*((NeFloat)frst, (NeFloat)scnd);
	return obj;
}

Per operator/(Per frst, Per scnd) {
	Per obj = operator/((NeFloat)frst, (NeFloat)scnd);
	return obj;
}