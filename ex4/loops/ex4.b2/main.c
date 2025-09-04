#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
int inverse;

    printf("veuillez entrez un nombre:");
    scanf("%d",&n);
    do{
        inverse=(inverse*10)+(n%10);
    }
    while(n !=0 );
        printf("l'inverse est :%d",inverse);
    return 0;
}
