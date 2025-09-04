#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    int estpremier ;
    printf("entrez un nombre:");
    scanf("%d",&n);
    estpremier=1;
    for(i=2;i<=n;i++)
    if(n%2==0){
        estpremier=0;
        break;
    }
    if(estpremier==1)
        printf("%d est un nombre entier",n);
    else
        printf("%d n'est pas un nombre premier",n);
    return 0;
}
