#include <iostream>
#include <stdio.h>
int main()
{

	unsigned short a = 45671; // 1. ���� ������ ������� ���������� ����
	unsigned short* pa; // 2. ���� �������� ������ ��������� ����
	pa = &a; // 4. ���������� �������� ������ �������� ������, �� ������� � �.1 ������ ��������
	*pa = 45671; // 5. ���������� ������, �� ������� � �.1 ������ ��������, ���������� � �������, �������������� �������� ������������ �������� ������

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

	// 3. ���� ����������� ������� ������
	void* pv;

	// 6. ���������� ������ ��� ������ ���� ��������
	int sizeUnSh = sizeof(unsigned short);
	int sizeInt = sizeof(int);
	int sizeFl = sizeof(float);
	int sizeDouble = sizeof(double);

	// 7. ����������� ����������� ����� ��������� ���������
	pv = &a;
	pv = &b;
	pv = &c;
	pv = &d;

	return 0;
}