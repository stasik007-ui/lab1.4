#include <iostream>
#include <stdio.h>
int main()
{

	unsigned short a = 45671; // 1. Опис змінних наперед визначених типів
	unsigned short* pa; // 2. Опис вказівних змінних відповідних типів
	pa = &a; // 4. Ініціювання вказівних змінних адресами змінних, що описанні в п.1 даного завдання
	*pa = 45671; // 5. Ініціювання змінних, що описанні в п.1 даного завдання, значеннями з варіанта, використовуючи операцію розіменування вказівних змінних

	int b = 167;
	int* pb;
	pb = &b;
	int* pb = &b;

	float c = -3.9412f;
	float* pc;
	pc = &c;
	float* pc = &c;

	double d = -6.8e-6f;
	double* pd;
	pd = &d;
	double* pd = &d;

	// 3. Опис нетипізованої вказівної змвнної
	void* pv;

	// 6. Визначення розміру всіх змінних вашої програми
	int sizeUnSh = sizeof(unsigned short);
	int sizeInt = sizeof(int);
	int sizeFl = sizeof(float);
	int sizeDouble = sizeof(double);

	// 7. Ініціалізація нетипізованої змінної значенням типізованої
	pv = &a;
	pv = &b;
	pv = &c;
	pv = &d;

	return 0;
}
