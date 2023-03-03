// task 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	long long int n, k, c;

	cin >> n;

	c = n;

	for (k = 0; ; k++)
	{
		if (n == 1)
		{
			cout << 1;
			return 0;
		}

		if (k == 0)
		{
			cout << 1 << " ";
		}

		if (c > 1000000000)
		{
			return 0;
		}

		else
		{
			cout << c << " ";

			c *= n;
		}	
	}
	return 0;
}