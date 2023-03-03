// task 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	long int A, B;
	int d;

	std::cout << "enter coordinate of the point A" << endl;
	std::cin >> A;

	std::cout << "enter coordinate of the point B" << endl;
	std::cin >> B;

	std::cout << "Enter the length" << endl;
	std::cin >> d;
	
	if (A < B)
	{
		A += d;

		if (A < B)
		{
			std::cout << A;
		}
		if (A >= B)
		{
			cout << B;
		}
		return 0;
	}

	if (A > B)
	{
		A -= d;

		if (A <= B)
		{
			std::cout << B;
		}
		if (A > B)
		{
			cout << A;
		}
		return 0;
	}

	if (A = B)
	{
		cout << A;
		return 0;
	}
}
