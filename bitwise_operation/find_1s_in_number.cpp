#include<iostream>

using namespace std;

bool hasOne(unsigned int number, unsigned int opset)
{
    if((number & opset) == 0) return false;
    else return true;
}

int main()
{
    int indices[500];
    unsigned int a, b=1;
    cin >> a;
    int i = 0;
    int maxNum=0;
    for(int lp=0; lp<32; lp++)
    {
        if(hasOne(a, b))
        {
            indices[i++] = lp;
            if(maxNum<lp) maxNum = lp;
        }
        b <<= 1;
    }
    cout << maxNum << endl;
}
