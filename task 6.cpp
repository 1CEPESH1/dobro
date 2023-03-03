// task 6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>
using namespace std;

int main()
{
	string s = "abbcdaacbbda";
	string t = "abbab";


	for (int i = 0; i < s.length(); i++)
	{
		for (int k = 0; k < t.length(); k++)
		{
			if (s[i] == t[k])
			{
				s.erase(i, 1);
			}
		}
	}
	std::cout << s;
}