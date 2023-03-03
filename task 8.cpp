// task 8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
    const int SIZE = 7;


    int arr2[SIZE]{};
    int arr[SIZE]{ 1, 5, 4, 2, 2, 6, 7 };
    int count = 0, count1 = 0, b = 0;

    for (int i = 0; i < SIZE; i++)
    {
        count = 0;

        for (int j = 0; j < SIZE; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;

            }

        }
        if (count > count1)
        {
            b = arr[i];
            count1 = count;
        }

    }
    cout << b;
}

