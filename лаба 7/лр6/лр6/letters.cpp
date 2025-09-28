#include "letters.h"
#include <iostream>
#include <windows.h>
using namespace std;

void latinskie(char ch)
{
    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        if (ch >= 'A' && ch <= 'Z')
        {
            cout << ch << ": ������� �������� ����� �������� � ��������� ����� ����� 0�20\n" << "������� �������: " << int(ch) << "\t" << "������ �������: " << int(ch) + 32 << "\n";
        }
        else
        {
            cout << ch << ": ������� �������� ����� �������� � ��������� ����� ����� 0�20\n" << "������� �������: " << int(ch) - 32 << "\t" << "������ �������: " << int(ch) << "\n";
        }
    }
    else
    {
        cout << ch << ": ��������� ������ �� �������� ��������� ������\n";
    }
}

void AllLatinskie()
{
    string str;
    cout << "\n������� ������: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        latinskie(str[i]);
    }
    cout << "\n";
}


void russkie(char ch)
{
    if (ch >= '�' && ch <= '�' || ch >= '�' && ch <= '�' || ch == '�' || ch == '�')
    {
        if (ch >= '�' && ch <= '�' || ch == '�')
        {
            cout << ch << ": ������� �������� ����� �������� � ��������� ����� ����� 0�20\n" << "������� �������: " << (byte)ch + 0 << "\t" << "������ �������: " << (byte)ch + 32 << "\n";
        }
        else
        {
            cout << ch << ": ������� �������� ����� �������� � ��������� ����� ����� 0�20\n" << "������� �������: " << ((byte)ch - 32) << "\t" << "������ �������: " << (byte)ch + 0 << "\n";
        }
    }
    else
    {
        cout << ch << ": ��������� ������ �� �������� ������� ������\n";
    }
}

void AlLrusskie()
{
    string str;
    cout << "\n������� ������: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        russkie(str[i]);
    }
    cout << "\n";
}


