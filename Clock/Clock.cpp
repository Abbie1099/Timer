#include<iostream>
#include<stdlib.h>
#include<Windows.h>
using namespace std;

int main()
{
	const int sleep = 1;
	int h = 0, m = 0, s = 0;

	while (true)
	{
		s++;
		if (s == 60)
		{
			m++;
			s = 0;
		}
		if (m == 60)
		{
			h++;
			m = 0;
		}
		Sleep(1000);
		cout << h << ":" << m << ":" << s << endl;
	}
}