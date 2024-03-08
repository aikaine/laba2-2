// lb2,2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество элементов: ";
	cin >> n;
	int* a = new int[n];
	int i, proiz = 1, ad = 0, adr = 0;
	int s = 0, sum = 0, ibeg = 0, iend = 0;
	int* p = a;
	if (cin.fail()) {
		cout << "Введите корректное колличество элементов" << endl << endl;
		exit(0);
	}
	if (n < 0 or n == 0) {
		cout << "Введите корректное колличество элементов" << endl << endl;
		exit(0);
	}
	srand(time(0));
	for (i = 0; i < n; i++)
	{
		*(p + i) = rand() % 8 - 4;
		cout << *(p + i) << " ";
		if (i % 2 == 0)
		{
			proiz *= *(p + i);
		}
	}
	cout << "\n Произведение равно " << proiz;
	for (i = 0; i < n; i++)
		if (*(p+i) == 0)
		{
			ibeg = i;
			break;
		}
	for (i = ibeg + 1; i < n; i++)
		if (*(p+i) == 0)
		{
			iend = i;
		}
	for (i = ibeg + 1; i < iend; i++){
		sum += *(p+i);
	}
	cout << ("\nСумма между 1 и последним 0-ми элементами: ") << sum << endl;
	
	cout << "преобразованый массив:" << endl;
	for (i = 0; i < n; i++) 
		if (*(p+i) >= 0)      
		{
			cout << *(p+i)<< ' '; 
		}
	for (i = 0; i < n; i++)  
		if (*(p + i) < 0)
		{
			cout << *(p + i) << ' ';
		}
}