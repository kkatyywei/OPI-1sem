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
            cout << ch << ": Разница значений кодов строчной и прописной буквы равна 0х20\n" << "Верхний регистр: " << int(ch) << "\t" << "Нижний регистр: " << int(ch) + 32 << "\n";
        }
        else
        {
            cout << ch << ": Разница значений кодов строчной и прописной буквы равна 0х20\n" << "Верхний регистр: " << int(ch) - 32 << "\t" << "Нижний регистр: " << int(ch) << "\n";
        }
    }
    else
    {
        cout << ch << ": Введенный символ не является латинской буквой\n";
    }
}

void AllLatinskie()
{
    string str;
    cout << "\nВведите символ: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        latinskie(str[i]);
    }
    cout << "\n";
}


void russkie(char ch)
{
    if (ch >= 'А' && ch <= 'Я' || ch >= 'а' && ch <= 'я' || ch == 'ё' || ch == 'Ё')
    {
        if (ch >= 'А' && ch <= 'Я' || ch == 'Ё')
        {
            cout << ch << ": Разница значений кодов строчной и прописной буквы равна 0х20\n" << "Верхний регистр: " << (byte)ch + 0 << "\t" << "Нижний регистр: " << (byte)ch + 32 << "\n";
        }
        else
        {
            cout << ch << ": Разница значений кодов строчной и прописной буквы равна 0х20\n" << "Верхний регистр: " << ((byte)ch - 32) << "\t" << "Нижний регистр: " << (byte)ch + 0 << "\n";
        }
    }
    else
    {
        cout << ch << ": Введенный символ не является русской буквой\n";
    }
}

void AlLrusskie()
{
    string str;
    cout << "\nВведите символ: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        russkie(str[i]);
    }
    cout << "\n";
}


