#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        int isPrime = true;
        for(int i=2; i*i<= n; i++)
        {
            if(n%i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if(n == 1)
        {
            isPrime = false;
        }
        if(isPrime)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }
    return 0;
}
