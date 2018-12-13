#include<iostream>

using namespace std;

int main()
{
    int n, fact;
    while(cin >> n)
    {
        fact = 1;
        for(int i=n; i>=1; i--)
        {
            fact *= i;
        }
        cout << fact << endl;
    }
    return 0;
}
