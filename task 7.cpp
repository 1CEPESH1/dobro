// task 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	string s = "cdxxbbbbbzbzbbzRRRaaa";
	int k = 3, count = 0, count1 = 0;
	string auxiliary, conclusion;
	bool tru;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < s.length(); i++)
	{
		count = 0;

		if (s[i] >= 'a' && s[i] <= 'z')
		{
			for (int j = 0; j < s.length(); j++)
			{
				if (s[j] >= 'a' && s[j] <= 'z')
				{
					if (s[i] == s[j])
					{
						count++;
					}
				}

			}
			if (count >= k)
			{
				count1 = 0;

				for (int l = 0; l < auxiliary.length(); l++)
				{
					if (s[i] == auxiliary[l])
					{
						count1++;
					}
					
				}
				if (count1 == 0)
				{
					auxiliary += s[i];

				}
			}
			
		}
	
	}
	for (int i = 0; i < alphabet.length(); i++)
	{
		for (int j = 0; j < auxiliary.length(); j++)
		{
			if (alphabet[i] == auxiliary[j])
			{
				conclusion += auxiliary[j];
			}
		}
	}
	cout << conclusion;
}
