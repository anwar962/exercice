#include <stdio.h>
#include <stdlib.h>

int main(){
int n,i;

    printf("entrez un nombre n : ");
    scanf("%d",&n);
    printf("les premiers nombres impaires sont:\n");
    for(i=0;i<=n;i++);
    printf("%d",2*i+1);
    return 0;
}
