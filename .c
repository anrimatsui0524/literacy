#include<stdio.h>
void main(void)
{
    int n,i,sum;
    
    printf("整数nを入力してください"¥n);
    scanf("%d",&n);
    
    i = 1;
    sum=0;
     while(i <= n)
     {
        sum*=i;
        i++;
     }
     printf("整数%dの階乗の値は%d ¥n",n,sum)
     }
