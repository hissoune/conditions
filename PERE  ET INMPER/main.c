#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("donner le nombre : ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf(" le numbre %d est pere ",a);
    }
    else {printf("le numbre %d est impere ");}
    return 0;
}
