#include "latinskie.h"

void GetLatinskie()
{
	char str[200] = "";
	const int RAZ = 32;
	cout << "������� ������ : ";
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				cout << str[i] << ": ������� �������� ����� �������� � ��������� ����� ����� 0�20\n" << "������� �������: " << int(str[i]) << "\t" << "������ �������: " << int(str[i]) + RAZ << "\n";
			}
			else
			{
				cout << str[i] << ": ������� �������� ����� �������� � ��������� ����� ����� 0�20\n" << "������� �������: " << int(str[i]) - RAZ << "\t" << "������ �������: " << int(str[i]) << "\n";
			}
		}
		else
		{
			cout << str[i] << ": ��������� ������ �� �������� ��������� ������\n";
		}


	}
	cout << "\n";
}