#include "number.h"

void GetNumbers()
{
	char str[200] = "";
	cout << "\n������� ������: ";
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cout << str[i] << ": " << int(str[i]) << "\n";
		}
		else
		{
			cout << str[i] << ": ��������� ������ �� �������� ������\n";
		}
	}
	cout << "\n";
}
