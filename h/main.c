#include <stdio.h>
#include <stdlib.h>

int main(){

int i,n,M;
 printf("entrez un nombre:");
scanf("%d",&n);
for (i=1;i<=10;i++){
M=n*i;

printf("%d*%d=:%d\n",n,i,M);
}
return 0;

}
