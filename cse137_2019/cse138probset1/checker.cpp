#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n,i;
    cin>>n;
    if( n>100000 || n<1)
    {
        printf("n should be between 1 to 100000\n");
        return 1;
    }
    for(i=1 ; i<=n ; i++)
    {
        ll x1, x2;
        cin>>x1>>x2;
        if(x1>1000000||x1<-1000000||x2>1000000||x2<-1000000)
        {
            printf("x1 or x2 must be between -1e6 to 1e6\n");
            return 1;
        }
        if(x1==x2)
        {
                printf("x1 & x2 can not be equal\n");
                return 1;
        }

    }

    printf("All cases are OK\n");
    return 0;
}
