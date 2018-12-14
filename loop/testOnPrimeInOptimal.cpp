#include<bits/stdc++.h>
using namespace std;
bool B[164009];
vector<long> V;
void prime()
{
    for(long i=2;i<=405;i++)
        if(B[i]==0)
            for(long j=2;i*j<=164000;j++)
                B[i*j]=1;
    for(long i=2;i<=164000;i++)
        if(B[i]==0)
            V.push_back(i);

}
int main()
{
    prime();
    long T;
    cin>>T;
    while(T--)
    {
        long N;
        cin>>N;
        cout<<V[N-1]<<"\n";
    }
    //for(vector<long>::iterator it=V.begin();it!=V.end();it++)
    //    cout<<*it<<"\n";
}
