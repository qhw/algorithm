/************************************************************************/
/* 8皇后问题                                                                     */
/************************************************************************/
#include <stdio.h>
#include <math.h>
#define N  8
int col[N+1];
int count = 0;
//输出结果
void Output()
{
    for(int i=1;i<=N;i++)
    {
        printf("(%d,%d)",i,col[i]);
    }
    printf("\n");
	count++;
}
//求解函数
void Queen(int i,int n)
{
    if(i>n)
        Output();
    else
    {
        for(int j=1;j<=n;++j)
        {
            int k=1;
            col[i]=j;
            while(k<i)
            {
                if((col[k]-col[i])*(fabs(col[k]-col[i])-fabs(k-i))!=0)
                {
                    k++;
                    if(k==i)
                        Queen(i+1,n);
                }
                else
                {
                    break;
                }
            }
        }
    }
}
int main()
{
    printf("the answer is:\n");
    for(int i=1;i<=N;i++)
    {
        col[1]=i; //设置第一行
        Queen(2,N);
    }
	printf("%d", count);
}