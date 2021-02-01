#include<stdio.h>
void main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n)-i;j++)  
        {
            (j<=n-i) ? printf(" ") : ( (i%2==1) ?  printf("%d ",++k) :printf("%d ",k--) );
        }
        k+=n;                 
        printf("\n");
    }
}