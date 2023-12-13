#pragma once
class NeFloat {
protected:
	int M;
	int e;
public:
	NeFloat(float v = 0)
	{
		M = 0, e = 0;
		while (v >= 1)
		{
			v /= 2;
			e++;
		}
		while (v < 0.1)
		{
			if (v == 0) { break; }
			else {
				v *= 2;
				e--;
			}
		}
		M = int(v * 1000);
	}

	NeFloat(int vi, int ei)
	{
		while (vi >= 1000)
		{
			vi /= 2;
			ei++;
		}
		while (vi < 500)
		{
			if (vi == 0) { break; }
			else {
				vi *= 2;
				ei--;
			}
		}
		M = vi, e = ei;
	}
	void print();
	friend NeFloat operator + (NeFloat, NeFloat);
	friend NeFloat operator - (NeFloat, NeFloat);
	friend NeFloat operator * (NeFloat, NeFloat);
	friend NeFloat operator / (NeFloat, NeFloat);
};
