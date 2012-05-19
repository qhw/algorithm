/************************************************************************/
/* 有一个n阶楼梯，你一次既可以走2阶楼梯又可以走1阶楼梯，
/* 问走完n阶的话有多少走法                                                                     */
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