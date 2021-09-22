#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	double y;
	double A;
	double B;

	cout << "x = "; cin >> x;

	A = (2 + (x * 6));

	if (x <= 0)
		B = ((log(cos(x)) + (x * x * x * x * x)));
	if (0 < x && x <= 3)
		B = (cos((1 + log(x)) / 3)) / (sin((1 + log(x)) / 3));
	if (x > 3)
		B = ((12 - x) - (x * x * x * x * x * x * x));

	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	if (x <= 0)
		B = ((log(cos(x)) + (x * x * x * x * x)));
	else
		if (x > 3)
			B = ((12 - x) - (x * x * x * x * x * x * x));
		else
			B = (cos((1 + log(x)) / 3)) / (sin((1 + log(x)) / 3));

	y = A + B;
	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}