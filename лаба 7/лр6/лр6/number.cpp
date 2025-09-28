#include "number.h"
#include <iostream>

using namespace std;
void number(char ch)
{

    if (ch >= '0' && ch <= '9')
    {        
        cout << ch << ": " << int(ch) << "\n";
    }
    else
    {
        cout << ch << ": Введенный символ не является цифрой\n";
    }
}

void numbers()
{
    string str;
    cout << "\nВведите символ: ";
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        number(str[i]);
    }
    cout << "\n";
}
