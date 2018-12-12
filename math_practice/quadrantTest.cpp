#include<cstdio>

using namespace std;

int quanrant_test()
{
    int x,y;
    scanf("%d %d", &x, &y);

    if(x >= 0 && y >= 0)
    {
        printf("(%d,%d) is in first quadrant.\n", x, y);
    }
    if(x < 0 && y >= 0)
    {
        printf("(%d,%d) is in second quadrant.\n", x, y);
    }
    if(x < 0 && y < 0)
    {
        printf("(%d,%d) is in third quadrant.\n", x, y);
    }
    if(x >= 0 && y < 0)
    {
        printf("(%d,%d) is in fourth quadrant.\n", x, y);
    }
}

int main()
{
    quanrant_test();
}

