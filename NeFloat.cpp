#include <iostream> 
#include "NeFloat.h" 

using namespace std;

void NeFloat::print(void)
{
	printf("(%d %d) %f\n", M, e, M*0.001*pow(2, e));
}

NeFloat operator+ (NeFloat a1, NeFloat a2)
{
	int h;
	int d;

	if (a1.e >= a2.e)
	{
		h = a1.e;
		for (int i = 0; i < a1.e - a2.e; i++)
			a2.M /= 2;
	}
	else
	{
		h = a2.e;
		for (int i = 0; i < a2.e - a1.e; i++)
			a1.M /= 2;
	}
	d = a1.M + a2.M;
	return NeFloat(d, h);

}

NeFloat operator- (NeFloat a1, NeFloat a2)
{
	a2.M = -a2.M;
	return operator+ (a1, a2);
}



NeFloat operator* (NeFloat a1, NeFloat a2) {
	NeFloat Um;
	Um.M = a1.M * a2.M / 1000;
	Um.e = a1.e + a2.e;
	return NeFloat(Um.M, Um.e);
}

NeFloat operator/ (NeFloat a1, NeFloat a2) {
	NeFloat Del;
	Del.M = a1.M / a2.M * 1000;
	Del.e = a1.e - a2.e;
	return NeFloat(Del.M, Del.e);
}