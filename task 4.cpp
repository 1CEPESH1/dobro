// task 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    int l, r, d, c;

    cin >> l >> r >> d;

    for (; l != r; l++)
    {
        c = l % d;

        if (c == 0)
        {
            cout << l << endl;
        }
      
    }

    /*
    int a, b, c;

    cin >> a >> b;

    c = a % b;

    cout << c;*/
}