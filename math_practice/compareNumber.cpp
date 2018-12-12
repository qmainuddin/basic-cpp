#include<cstdio>

using namespace std;

int compareTwo()
{
    int num1, num2, greaterOne;
    scanf("%d %d", &num1, &num2);
    if(num1 >= num2)
    {
        greaterOne = num1;
    }
    else
    {
        greaterOne = num2;
    }
    printf("%d is greater", greaterOne);
}
int compareThree()
{
    int num1, num2, num3, greaterOne;
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 >= num2 && num1 >= num3) greaterOne = num1;
    else if(num2 >= num1 && num2 >= num3) greaterOne = num2;
    else if(num3 >= num2 && num3 >= num1) greaterOne = num3;
    printf("%d is greater", greaterOne);
}
int main()
{
    //compareTwo();
    compareThree();
}
