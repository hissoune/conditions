#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1,val2,somm;
    printf("donner le val 1 : ");
    scanf("%d",&val1);
    printf("donner le val 2 : ");
    scanf("%d",&val2);
    somm=val1+val2;
    if(val1==val2)
    {
        somm *=3;
        printf("les deux valeur est sont identiques , le triple de leur somm est %d ",somm);
    }else printf("la somm de cett deux valleure est %d",somm);
    return 0;
}
