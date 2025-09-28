#include <iostream>
#include <conio.h>
int main()
{
	setlocale(LC_CTYPE, "rus");
	using namespace std;
	char ch;
	int k;
	while(true)
	{
		cout << "Введите символ: ";
		cin >> ch;
		cout << "\n1-определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита,\n2-определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита,\n3-вывод в консоль кода символа, соответствующего введенной цифре,\n4-выход из программы\n";
		cin >> k;
		switch (k)
		{
		case 1:
		{
			cout << "var1";
			break;
		}
		case 2:
		{

			break;
		}
		case 3:
		{

			break;
		}
		case 4:
		{
		
		}
		default:
		{ cout << "Некоректный вариант\n";}

		}

	}

}