#include<bits/stdc++.h>
using namespace std;
long long n,d=0;;
long long coso(long long i)
{
    long long so=1;
    while(i>0)
    {
        so=so*10;
        i--;
    } return so;
}
int main()
{
    cin>>n;
    d=0;
    for(int i=1;i<=18;i++)
    {
        if(coso(i)%n==0){cout<<coso(i);d++;break;}
    }
    if(d==0)cout<<d;
}
