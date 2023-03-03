// task J.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int n = 0; // dynamic array
	cout << "set an even array length" << endl;
	cin >> n;
	int* arr = new int[n];
	int b = n / 2;


	cout << "fill the array: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << endl;

	for (int i = 0; i < (n / 2); i++)
	{
		for (int j = 0; j < (n / 2); j++) //first half
		{
			int auxiliary = 0;

			if (j < ((n / 2) - 1))
			{
				if (arr[j] > arr[j + 1])
				{
					auxiliary = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = auxiliary;
					
				}
			}
		}
	}
	
	for (int i = (n / 2); i < n; i++)
	{
		for (int k = (n / 2); k < n; k++) // second half
		{
			if (k < (n - 1))
			{
				if (arr[k] < arr[k + 1])
				{
					//swap(arr[j], arr[j + 1]);
					int auxiliary = arr[k + 1];
					arr[k + 1] = arr[k];
					arr[k] = auxiliary;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;

	}
	
}

