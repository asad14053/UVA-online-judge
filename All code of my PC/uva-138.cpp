#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x=8,tc=0;
    double n2;
    while(1)
    {
        n2=sqrt(x*(x+1)/2);
        n=n2;
        if(n==n2)
        {
            printf("%10lld%10lld\n",n,x);
            tc++;
        }
        if(tc==10)
        break;
        x++;
    }
return 0;
}
