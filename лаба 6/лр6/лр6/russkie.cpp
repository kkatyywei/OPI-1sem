#include "russkie.h"

void GetRusskie()
{
	char str[200] = "";
	const int RAZ = 32, NOL = 0;
	cout << "������� ������: ";
	cin >> str;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= '�' && str[i] <= '�' || str[i] >= '�' && str[i] <= '�' || str[i] == '�' || str[i] == '�')
		{
			if (str[i] >= '�' && str[i] <= '�' || str[i] == '�')
			{
				cout << str[i] << ": ������� �������� ����� �������� � ��������� ����� ����� 0�20\n" << "������� �������: " << (byte)str[i] + NOL << "\t" << "������ �������: " << (byte)str[i] + RAZ << "\n";
			}
			else
			{
				cout << str[i] << ": ������� �������� ����� �������� � ��������� ����� ����� 0�20\n" << "������� �������: " << ((byte)str[i] - RAZ) << "\t" << "������ �������: " << (byte)str[i] + NOL << "\n";
			}
		}
		else
		{
			cout << str[i] << ": ��������� ������ �� �������� ������� ������\n";
		}
	}
	cout << "\n";
}