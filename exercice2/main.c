#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i;
int F;

    printf("entrez un nombre:");
    scanf("%d",&n);
    F=1;
    if(n>0){
    for(i=2;i<=n;i++){
            F=F*i;
    }
    printf("la factoriel est:%d",F);}
    else if (n==0){
        printf("la factoriel est:1");
    }
        else
        printf("entrez un nombre positif");

    return 0;
}
