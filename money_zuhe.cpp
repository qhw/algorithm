/************************************************************************/
/* �����100,50,20,10,5,1�ĳ�Ʊ��ϳ�����Ǯ  �����п��ܵ���Ŀ    
/* author by eric        
/* date : 2012/5/19                                                         */
/************************************************************************/
#include <iostream>
#include <time.h>
using namespace std;
int count = 0;
int inter[] = {100,50,20,10,5,1};
void zuhe(int sum, int num)//�ݹ�ʵ��
{
	int left = 0;
	for (int i =0; i <= sum/inter[num]; i++)
	{
		left = sum - inter[num] * i;
		if (left == 0)
		{
			count++;
			continue;
		}
		if (num + 1 == 5)//���ֻʣ��1��Ľ������  ֱ�Ӽ�1 ���ݹ�
		{
			count++;
			continue;
		}
		zuhe(left, num+1);
	}
}

void accu(int sum)//�ǵݹ�ʵ�� 
{
	int count = 0;
	int i,j,k,l,m,n;
	
	clock_t start = clock();
	for(i = sum/100; i >=0; i--)
	{
		
		int tmp1 = sum - i * 100;
		if (tmp1 == 0)
		{
			count++;
			continue;
		}
		for(j = tmp1 / 50; j >=0; j--)
		{
			int tmp2 = tmp1 - j * 50;
			if (tmp2 == 0) 
			{
				count++;
				continue;
			}
			for(k = tmp2 / 20; k >= 0; k--)
			{
				int tmp3 = tmp2 - k * 20;
				if (tmp3 == 0) 
				{
					count++;
					continue;
				}
				for(l = tmp3 / 10; l >= 0; l--)
				{
					int tmp4 = tmp3 - l * 10;
					if (tmp4 == 0)
					{
						count++;
						continue;
					}
					for(m = tmp4 / 5; m >= 0; m--)
					{
						int tmp5 = tmp4 - m * 5;
						count++;
					}
				}
			}
		}
	}
	
	clock_t end = clock();
	cout << "��ʱ :" << end - start <<"ms" <<endl;
	cout << "һ��" << count << "�����" <<endl;
}

void main()
{
	int sum = 2000;
	clock_t start = clock();
	zuhe(sum, 0);
	clock_t end = clock();
	cout << count <<endl;
	cout << "��ʱ: " << end - start <<"ms" <<endl;
}