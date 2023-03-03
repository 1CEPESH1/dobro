#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int arr[SIZE]{};
	int b, c;

	for (int i = 0; i < SIZE; i++)
	{

		cin >> arr[i];
		if (i == 0)
		{
			c = arr[i];
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				swap(arr[j], arr[j + 1]); 
				
				/*b = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = b;
				*/
				
			}

		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	for (int i = 9; i > -1; i--)
	{
		if (c == arr[i])
		{
			cout << i + 1;
			break;
		}
	}
}
