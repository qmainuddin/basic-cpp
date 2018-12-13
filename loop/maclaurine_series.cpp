#include<iostream>

using namespace std;

int get_factorial(int n)
{
    int fact = 1;
    for(int i=n; i>=1; i--)
    {
        fact *= i;
    }
    return fact;
}

int get_pow(int base, int power)
{
    int val = 1;
    for(int i=1; i<=power; i++)
    {
        val *= base;
    }
    return val;
}

int main()
{
    int x, n;

    while(cin >> x >> n)
    {
        double series_val = 0, cosx;
        for(int i = 2; i <= n; i+=2)
        {
            double temp1 = get_pow(x, i), temp2 = get_factorial(i);
            double div = temp1/temp2;

            cout << "div " << div << endl;

            series_val += temp1/temp2;

            cout << series_val << "   ";
        }
        cosx = 1 - series_val;

        cout << cosx << endl;
    }
    return 0;
}
