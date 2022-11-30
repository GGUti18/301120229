1)#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	long int x, k, f = 1;
	double  p = 1, u;
	cout << "Input x"; cin >> x;
	for (k = 1; k <= 10; k++)
	{
		f = 1;
		for (int i = k * 2; i > 1; i--)
			f *= i;
		u = pow(x, k) / f;
		p *= pow(u, 2);

	}
	cout << "\nProduct=" << p;
	return 0;
}



2)#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	setlocale(0, ".1251");
	long int  n, k, f = 1;
	double  s = 0, u;
	cout << "Input k"; cin >> k;
	for (n = 1; n <= k; n++)
	{
		f = 1;
		if (n != 2)
		{
			for (int i = n + 1; i > 1; i--)

				f *= i;
			u = pow(-1, 2 - n) * pow(n * n - 9, 2) / ((n - 2) * f);
			s += u;

		}
	}
	cout << "\nSum" << s;
	return 0;
}
