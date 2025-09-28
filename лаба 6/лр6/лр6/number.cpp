#include "number.h"

void GetNumbers()
{
	char str[200] = "";
	cout << "\nВведите символ: ";
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cout << str[i] << ": " << int(str[i]) << "\n";
		}
		else
		{
			cout << str[i] << ": Введенный символ не является цифрой\n";
		}
	}
	cout << "\n";
}
