#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    int M;
    printf("entrez un nombre:");
    scanf("%d",&n);
    for(i=1;i<=n;i--)
        M=n*i;
    printf("%d*%d=%d\n",n,i,M);
    return 0;
}
