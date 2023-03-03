// task 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int n, res = 0, sum = 0, i = 0, r, k = 1, v = 0, t = 0, sum1 = 0;
	double a;

	cin >> n; // ввод пятиричьного числа

	while (n != 0) // перевод в десятичную
	{		
		a = n % 10;

		a *= pow(5, i);

		i++;

		res += a;

		n /= 10;
	}
	
	cout << res << endl;

	while (res != 0) // перевод в семиричную // перевод в десятичную
	{
		r = res % 7;

		sum += r;

		res /= 7;
	}

	res = 0;
	r = 0;
	cout << sum << endl;

	sum1 = sum;
	while (1) // перевод в троичную
	{
		if ((sum1 / 3) != 0)
		{
			sum1 = sum1 / 3;
			k++;
		}
		else break;
	}
	sum1 = sum;

	for (int i = 0; i < k; i++)
	{
		t = sum1 % 3;

		v += pow(10, i) * t;

		sum1 = sum1 / 3;
	}
	cout << v;
}

