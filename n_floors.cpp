/************************************************************************/
/* ��һ��n��¥�ݣ���һ�μȿ�����2��¥���ֿ�����1��¥�ݣ�
/* ������n�׵Ļ��ж����߷�                                                                     */
/************************************************************************/
#include <iostream>
using namespace std;
int fun(int N)
{
	static int count = 1;
	cout << count++;
	if (N == 1)
	{
		return 1;
	}
	if (N == 2) 
	{
		return 2;
	}
	return fun(N-1) + fun(N-2);
}
void main()
{
	cout << fun(10) <<endl;
}