#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i;
int s;
printf("entrez la valeur de n:");
scanf("%d",&n);
s=0;
for(i=0;i<=n;i++)
    s=s+i;
printf("la somme est:%d",s);
return 0;
}
