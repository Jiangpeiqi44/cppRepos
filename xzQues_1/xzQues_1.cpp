

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
	int t;
	cout << "����������" << endl;
	cin >> t;
	int *pt = new int[2 * t];
	int *time = new int[t];

	cin.get();
	cout << "������Ҫ�жϵ������ÿո����" << endl;
	for (size_t i = 0; i < 2 * t; i++)
	{
		cin >> *(pt + i);
		cin.get();
	}

	for (size_t i = 0; i < t; i++)
	{
		time[i] = 0;
	}
	for (size_t i = 0; i < t; i++)
	{
		switch (*(pt + 2 * i) >= *(pt + 1 + 2 * i))
		{
		case 0:

			do
			{
				*(pt + 2 * i) = (*(pt + 2 * i) << 1);
				cout << "λ��һ��" << endl;
				time[i]++;
			} while ((*(pt + 2 * i) != *(pt + 2 * i + 1)) && (time[i] <= 16 * t));

			break;
		case 1:

			do
			{
				*(pt + 2 * i + 1) = (*(pt + 2 * i + 1) << 1);
				cout << "λ��һ��" << endl;
				time[i]++;
			} while ((*(pt + 2 * i) != *(pt + 2 * i + 1)) && (time[i] <= 16 * t));

			break;
		default:
			cout << "��������";
			break;
		}
	}

	for (size_t i = 0; i < t; i++)
	{
		if (time[i] <= 16)
		{
			cout << "��" << i + 1 << "��λ��" << time[i] << "�γɹ�" << endl;
		}
		else
		{
			cout << "��" << i + 1 << "�޷�ͨ��λ�Ƶõ�" << endl;
		}
	}
	cout << "��������˳�";

	delete[] time;
	delete[] pt;
	pt = NULL;
	time = NULL;
	cin.get();
	cin.get();
	return 0;
}
