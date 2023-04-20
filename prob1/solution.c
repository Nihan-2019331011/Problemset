#include<stdio.h>

int main()
{
    int n,i,j,pass_mark;
        scanf("%d %d",&n,&pass_mark);
        int a[n+5][5],pass[5]={};
        for(i=1;i<=n;i++)
        {
            for(j=1;j<4;j++)
            {
                scanf("%d",&a[i][j]);
                if(a[i][j]>=pass_mark) pass[j]=1; 
            }
        }
        if(pass[1]&&pass[2]&&pass[3]&&pass[4])
            printf("Kop Mama!\n");
        else printf("Next Year Kop Hobe!\n");
    
    return 0;
}
