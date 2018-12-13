#include<iostream>

using namespace std;

int main()
{
    int n, r, result;
    while(cin >> n >> r)
    {
        int lob = 1;
        int hor = 1;
        for(int i=n; i>=(n-r+1); i--)
        {
            lob *= i;
        }
        for(int i=r; i>=1; i--)
        {
            hor *= i;
        }
        int result = lob/hor;

        cout << result << endl;
    }
    return 0;
}
