// task 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    string a;
    int count = 0, count1 = 0;

    char frequent;
    frequent = a[0];


    a = "abcbabcdbadbcs";

    for (int i = 0; i < a.length(); i++)
    {
        for (int k = 0; k < a.length(); k++)
        {
            if (a[i] == a[k])
            {
                count++;
                if (count > count1)
                {
                    count1 = count;

                    frequent = a[i];
                }
               
            }

        }
        count = 0; 

      
    }

    cout << frequent;
}

