//Використання стандартних функцій для рядків char[]
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int count(char* charSequence)
{
	int counter = 0;
	for (int i = 1; i < strlen(charSequence); i++)
	{
		if (charSequence[i] == 'a' || charSequence[i] == 'b' || charSequence[i] == 'c')
		{
			if (charSequence[i + 1] == 'a' || charSequence[i + 1] == 'b' || charSequence[i + 1] == 'c')
			{
				if (charSequence[i - 1] == 'a' || charSequence[i - 1] == 'b' || charSequence[i - 1] == 'c')
				{
					counter++;
				}
			}
		}
	}
	return counter;
}

char* modifying(char* charSequence)
{
	for (int i = 1; i < strlen(charSequence); i++)
	{
		if (charSequence[i] == 'a' || charSequence[i] == 'b' || charSequence[i] == 'c')
		{
			if (charSequence[i + 1] == 'a' || charSequence[i + 1] == 'b' || charSequence[i + 1] == 'c')
			{
				if (charSequence[i - 1] == 'a' || charSequence[i - 1] == 'b' || charSequence[i - 1] == 'c')
				{
					charSequence[i] = '*';
					charSequence[i - 1] = '*';
					charSequence[i + 1] = '*';
				}
			}
		}
	}
	return charSequence;
}

int main()
{
	char charSequence[101];
	cout << "Enter string:" << endl;
	cin.getline(charSequence, 100);
	cout << "Number of letter combinations : " << count(charSequence) << endl;
	cout << "Modified string: " << modifying(charSequence);
	return 0;
}