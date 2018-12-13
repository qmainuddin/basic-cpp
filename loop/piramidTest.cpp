#include<iostream>
#include<cstdio>

using namespace std;

void print1(int n)
{
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
}

void print2(int n)
{
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
}

void print3(int n)
{
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
}

void print4(int n)
{
    int max_val = n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=(n-max_val); j++)
        {
            printf(".");
        }
        for(int j=1; j<=max_val; j++)
        {
            printf("%d", j);
        }
        for(int j=max_val-1; j>=1; j--)
        {
            printf("%d", j);
        }
        for(int j=1; j<=(n-max_val); j++)
        {
            printf(".");
        }
        max_val--;
        printf("\n");
    }
}

void print5(int n)
{
    print3(n);
    int max_val = n-1;
    for(int i=1; i<=n-1; i++)
    {
        for(int j=1; j<=(n-max_val); j++)
        {
            printf(".");
        }
        for(int j=1; j<=max_val; j++)
        {
            printf("*");
        }
        for(int j=1; j<=max_val-1; j++)
        {
            printf("*");
        }
        for(int j=1; j<=(n-max_val); j++)
        {
            printf(".");
        }
        max_val--;
        printf("\n");
    }
}

void print6(int n)
{
    int index = 1;
    for(int i=1; i<n; i++)
    {
        for(int j = 1; j <= n-i; j++)
        {
            printf(".");
        }
        //for(int j = n-i; j<i+2; j+=1)
        for(int j = 1; j<=index; j+=1)
        {
            printf("%d", j);
        }
        index+=2;
        for(int j = 1; j <= n-i; j++)
        {
            printf(".");
        }
        printf("\n");
    }
    print4(n);
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        printf("..............Printing First Piramid...........\n\n");
        print1(n);
        printf("\n");
        printf("..............Printing Second Piramid...........\n\n");
        print2(n);
        printf("\n");
        printf("..............Printing Third Piramid...........\n\n");
        print3(n);
        printf("\n");
        printf("..............Printing Fourth Piramid...........\n\n");
        print4(n);
        printf("\n");
        printf("..............Printing Fifth Piramid...........\n\n");
        print5(n);
        printf("\n");
        printf("..............Printing Sixth Piramid...........\n\n");
        print6(n);
        printf("\n");
    }
}
