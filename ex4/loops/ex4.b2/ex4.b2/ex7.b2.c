#include <stdio.h>
#include <stdlib.h>

int main(){
int N;
int inverse=0;
printf("veuillez entrez un nombre:");
scanf("%d",&N);
do{
    inverse=(inverse*10)+(N%10);
}
    while (N!=0);
    printf("l'inverse est: %d",inverse);

    return 0;
}
