#include<bits/stdc++.h>
#include<cstdlib>
#include <queue>
#include <vector>
#include<algorithm>
#define ll long long
#define sc scanf
#define pf printf
#define Pi 2*acos(0.0)
using namespace std;
int main ()
{
    int n,a;
    while (scanf("%d",&n))
    {
        if(n==0)
            break;
        priority_queue<int>pq;
        int sum=0,i,c=0;
        for (i=0; i<n; i++)
        {
            scanf("%d",&a);
            pq.push(-a);
        }
        for(i=0; i<n-1; i++)
        {
            int d=-pq.top();
            pq.pop();
            int b=-pq.top();
            pq.pop();
            c=d+b;
            sum+=c;
            pq.push(-c);
        }
        pf("%d\n",sum);
    }


    return 0;
}

