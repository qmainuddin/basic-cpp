#include<iostream>

using namespace std;

void basic_left_shift()
{
    unsigned int a = 5;
    if((a&(a-1)) != 0)
    {
        a = (a&(a-1));
    }
    cout << (a&(a-1)) << endl;
}
int main()
{
    basic_left_shift();
}
