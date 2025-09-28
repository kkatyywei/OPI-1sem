#include <windows.h>
#include <iostream>
#include <string>
#include "russkie.h"
#include "number.h"
#include "latinskie.h"
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string str;
    int variant;
    bool var;
    do
    {
        cout << "1-определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита,\n2-определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита,\n3-вывод в консоль кода символа, соответствующего введенной цифре,\n4-выход из программы\n";
        cout << "\nВведите номнр варианта: ";
        cin >> variant;
            switch (variant)
            {
            case 1:
            {
                GetLatinskie();
                break;
            }
            case 2:
            {
                GetRusskie();
                break;
            }
            case 3:
            {
                GetNumbers();
                break;
            }
            }
    } while (variant != 4);
    return 0;
}
