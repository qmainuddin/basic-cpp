#include<iostream>
#include<cstdio>

using namespace std;

int sum1(int n)
{
    int sum = n;
    while(--n)
    {
        sum += n;
    }
    return sum;
}

int sum2(int n)
{
    int sum = 0;
    for(int i = 1; i<= n; i++)
    {
        sum += i*i;
    }
    return sum;
}

int sum3(int n)
{
    int sum = 0;
    for(int i = 1; i<= n; i++)
    {
        int mul = 1;
        for(int j=1; j<=i; j++)
        {
            mul *= i;
        }
        sum += mul;
    }
    return sum;
}
int sum4(int n)
{
    int sum = 0;
    int startIndex=1;
    for(int i=1; i<=n; i++)
    {
        int temp = 0;
        for(int j = 1; j<=i; j++)
        {
            temp += startIndex++;
        }
        sum += temp;
    }
    return sum;
}

int sum5(int n)
{
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        int temp = i;
        if(i&1)
        {
            sum += temp;
        }
        else
        {
            temp *= -1;
            sum += temp;
        }
    }
    return sum;
}

int sum6(int n)
{
    int sum = 0;
    int number=1;
    for(int i=1; i<=n; i++)
    {
        int temp1 = number++;
        for(int j = 1; j<i; j++)
        {
            int temp2 = 1;
            for(int k = 0; k<=j; k++)
            {
                temp2 *= number++;
            }
            temp1 += temp2;
        }
        sum += temp1;
    }
    return sum;
}

int sum7(int n)
{
    int sum = 0;
    int j = n;
    for(int i=1; i<=n; i++)
    {
        int temp = i*j;
        sum += temp;
        j--;
    }
    return sum;
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("1 + 2 + 3 +..... + %d = %d\n",n, sum1(n));
        printf("1^2 + 2^2 + 3^2 +..... + %d ^2 = %d\n",n, sum2(n));
        printf("1^1 + 2^2 + 3^3 +..... + %d ^ %d = %d\n",n,n, sum3(n));
        printf("1 + (2+3) + (4+5+6) +..... + %dth term = %d\n",n, sum4(n));
        printf("1 - 2 + 3 - 4 + 5 -..... + %dth term = %d\n",n, sum5(n));
        printf("1 + (2+ 3* 4) + (5+6*7+8*9*10)..... + %dth term = %d\n",n, sum6(n));
        printf("1*n + 2 *(n-1) +..... + %d * 1 = %d\n",n, sum7(n));
    }
}
