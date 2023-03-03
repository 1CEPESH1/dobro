// task K.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 9;
	int arr[SIZE]{2, 1, 4, 2, 7, 4, 8, 7, 1};
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					arr[i] = 0;
					arr[j] = 0;
				}
			}
			
		}

	}
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] != 0)
		{
			cout << arr[i] << endl;
		}	

	}

  
}

