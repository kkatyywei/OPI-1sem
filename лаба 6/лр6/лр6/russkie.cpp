#include "russkie.h"

void GetRusskie()
{
	char str[200] = "";
	const int RAZ = 32, NOL = 0;
	cout << "Введите символ: ";
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'А' && str[i] <= 'Я' || str[i] >= 'а' && str[i] <= 'я' || str[i] == 'ё' || str[i] == 'Ё')
		{
			if (str[i] >= 'А' && str[i] <= 'Я' || str[i] == 'Ё')
			{
				cout << str[i] << ": Разница значений кодов строчной и прописной буквы равна 0х20\n" << "Верхний регистр: " << (byte)str[i] + NOL << "\t" << "Нижний регистр: " << (byte)str[i] + RAZ << "\n";
			}
			else
			{
				cout << str[i] << ": Разница значений кодов строчной и прописной буквы равна 0х20\n" << "Верхний регистр: " << ((byte)str[i] - RAZ) << "\t" << "Нижний регистр: " << (byte)str[i] + NOL << "\n";
			}
		}
		else
		{
			cout << str[i] << ": Введенный символ не является русской буквой\n";
		}
	}
	cout << "\n";
}