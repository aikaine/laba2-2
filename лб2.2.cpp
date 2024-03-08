// лб2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iostream>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a[10];
	int i;
	int s = 0;
	int *p = a;
	int n = 0;
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		*(p + i) =  rand() % 21-10;
		cout <<*(p + i) << " " ;
		if (*(p + i)  < 0) {
			s += *(p + i);
			n = n + 1;
		}
	}
	if (s == 0) {
		cout<< "\n" << "ЧИСЛА МЕНЬШЕ 0 ОТСУТСТВУЮТ";
	}
	else {
		cout<< "\n" << "СУММА РАВНА:" << s << endl;
		
	}

}