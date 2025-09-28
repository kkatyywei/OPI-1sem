#include <windows.h>
#include <iostream>
#include <string>
#include "letters.h"
#include "number.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str;
    int k;
    do
    {
        cout << "1-определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита,\n2-определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита,\n3-вывод в консоль кода символа, соответствующего введенной цифре,\n4-выход из программы\n";
        cout << "\nВведите номнр варианта: ";
        cin >> k;
        switch (k)
        {
        case 1:
        {
            AllLatinskie();
            break;
        }
        case 2:
        {
            AlLrusskie();
            break;
        }
        case 3:
        {
            numbers();
            break;
        }
        }
    } while (k != 4);
    return 0;
}
