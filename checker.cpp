#include<stdio.h>

int main()
{
    int n,pass_mark,x,i,j,q;
    scanf("%d %d", &n, &pass_mark);

    if( n>100000 || n<1)
    {
        printf("n should be between 1 to 100000\n");
        return 1;
    }

    if(pass_mark>100 || pass_mark<1)
    {
        printf("pass_mark should be between 1 to 100");
        return 1;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=4; j++)
        {
            scanf("%d",&q);
            if(q>100||q<1)
            {
                printf("number should be between 1 to 100\n");
                return 1;
            }
        }
    }

    printf("All cases is OK\n");
    return 0;
}
