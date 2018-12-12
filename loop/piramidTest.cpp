
#include<iostream>
#include<cstdio>

using namespace std;

void print1(int n)
{
    printf("..............Printing First Piramid...........\n\n");
    for(int i=1; i<=n; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("*");
        }
        for(int j = 1; j <= n-i; j++)
        {
            printf(".");
        }
        printf("\n");
    }
    printf("\n");
}

void print2(int n)
{
    printf("..............Printing Second Piramid...........\n\n");
    for(int i=0; i<n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf(".");
        }
        for(int j = 1; j<=n-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}

void print3(int n)
{
    printf("..............Printing Third Piramid...........\n\n");
    int index = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            printf(".");
        }
        //for(int j = n-i; j<i+2; j+=1)
        for(int j = 1; j<=index; j+=1)
        {
            printf("*");
        }
        index+=2;
        for(int j = 1; j <= n-i; j++)
        {
            printf(".");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        print1(n);
        print2(n);
        print3(n);
    }
}
