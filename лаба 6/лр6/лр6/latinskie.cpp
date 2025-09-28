#include "latinskie.h"

void GetLatinskie()
{
	char str[200] = "";
	const int RAZ = 32;
	cout << "Введите символ : ";
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				cout << str[i] << ": Разница значений кодов строчной и прописной буквы равна 0х20\n" << "Верхний регистр: " << int(str[i]) << "\t" << "Нижний регистр: " << int(str[i]) + RAZ << "\n";
			}
			else
			{
				cout << str[i] << ": Разница значений кодов строчной и прописной буквы равна 0х20\n" << "Верхний регистр: " << int(str[i]) - RAZ << "\t" << "Нижний регистр: " << int(str[i]) << "\n";
			}
		}
		else
		{
			cout << str[i] << ": Введенный символ не является латинской буквой\n";
		}


	}
	cout << "\n";
}