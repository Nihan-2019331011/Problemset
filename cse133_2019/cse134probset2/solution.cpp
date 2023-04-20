#include<stdio.h>
#define ll long long
int v[1000005];
ll N=100005,i,j,cnt[1000005],t;
int main()
{
    for(i=1;i<=N;i++)
        v[i]=1;
    v[0]=0;v[1]=0;
    for(i=4;i<=N;i+=2) v[i]=0;
    for(i=3;i*i<=N;i+=2)
    {
        if(v[i])
        {
            for(j=i*i;j<=N;j+=i+i) v[j]=0;
        }
    }
    j=1;cnt[1]=cnt[2]=0;cnt[4]=cnt[3]=2;
    for(i=5;i<=N;i++)
    {
        cnt[i]=cnt[i-1];
        if(v[i]&&v[i-2]) cnt[i]++;
    }
    //int t,l=1;
    scanf("%lld",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        printf("%d\n",cnt[n]);

    }

    return 0;

}
