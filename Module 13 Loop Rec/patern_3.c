#include<stdio.h>
int main()
{
    int n,k=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        k++;
        printf("%d\n");

    }
return 0;
}