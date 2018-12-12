#include<cstdio>

using namespace std;

int order_asc()
{
    int num1, num2, num3, min1, min3, min2;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 <= num2 && num1 <= num3)
    {
        min1 = num1;
        num1 = 99999999;
    }
    else if(num2 <= num1 && num2 <= num3)
    {
        min1 = num2;
        num2 = 99999999;
    }
    else if(num3 <= num2 && num3 <= num1)
    {
        min1 = num3;
        num3 = 99999999;
    }

    if(num1 <= num2 && num1 <= num3)
    {
        min2 = num1;
        num1 = 99999999;
    }
    else if(num2 <= num1 && num2 <= num3)
    {
        min2 = num2;
        num2 = 99999999;
    }
    else if(num3 <= num2 && num3 <= num1)
    {
        min2 = num3;
        num3 = 99999999;
    }

    if(num1 <= num2 && num1 <= num3)
    {
        min3 = num1;
        num1 = 99999999;
    }
    else if(num2 <= num1 && num2 <= num3)
    {
        min3 = num2;
        num2 = 99999999;
    }
    else if(num3 <= num2 && num3 <= num1)
    {
        min3 = num3;
        num3 = 99999999;
    }

    printf("%d %d %d", min1, min2, min3);
}

int main()
{
    order_asc();
}
