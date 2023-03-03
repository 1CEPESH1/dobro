// task L.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int arr[SIZE]{};
    int b = 0;

    cout << "fill the array: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < SIZE; j++)
    {
        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i] > 0)
            {
                if (arr[i] == b + 1)
                {
                    b = arr[i];
                }
            }


        }
    }
    
    if (b != 0)
    {
        cout << b + 1;
    }
    else
        cout << b;
}

