#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int reverseNumber(int num)
{
    int revNum = num%10;
    num /= 10;
    while(num)
    {
        revNum = (revNum*10) + (num%10);
        num /= 10;
    }
    return revNum;
}
bool isPalindrome(int num)
{
    if(reverseNumber(num) == num)
    {
        return true;
    }
    return false;
}

int main()
{
    int nthPosition;

    cin >> nthPosition;
    int i =1;
    int nthPalindrome;

    while(nthPosition)
    {
        if(isPalindrome(i))
        {
            nthPalindrome = i;
            nthPosition--;
        }
        i++;
    }
    cout << "The palindrome number is " << nthPalindrome << endl;
}
