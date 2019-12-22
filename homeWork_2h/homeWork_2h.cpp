#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	const int n = 80;
	char buffer[n];
	int i = 0, k = 0, j = 0;
	const int num = 26;
	int counts[num] = { 0 };
	char letters[num];
	int row;
	cin >> row;
	cin.get();
	
	do
	{
		cin.getline(buffer, n, '\n');
		k = 0;
		while (buffer[k] != 0)
		{
			if (tolower(buffer[k]) >= 'a' && tolower(buffer[k]) <= 'z')
			{
				i = tolower(buffer[k]) - 'a';
				counts[i]++;
			}
			k++;
		}
	} while (row--);
	for (i = 0; i < num; i++)
	{
		letters[i] = (char)('a' + i);
		if (counts[i] > 0)
		{
			cout << letters[i] << ":" << counts[i] << endl;
			j++;
		}
	}
	if (j == 0)
		cout << "字符串中无字母。" << endl;
	return 0;
}