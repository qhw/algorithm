/************************************************************************/
/* 求数组中所有组合的输出                                                                     */
/************************************************************************/
#include <iostream>
using namespace std;
void rec(char *p, int);
void print(char *p, int);
int length = 0;
void main()
{
	char words[] = {'a', 'b', 'c', 'd'};
	length = 3;
	rec(words, length);
}

void print(char *p, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << *(p+i);
	}
	cout << endl;
}

void rec(char *p, int len)
{
	if(len == 1)
		print(p, length);
	else
		for(int i = 0; i < len; i++)
		{
			char ch = *(p + i);
			*(p + i) = *(p + len -1);
			*(p + len -1) = ch;
			rec(p, len - 1);
			*(p + len - 1) = *(p + i);
			*(p + i) = ch;
		}
}