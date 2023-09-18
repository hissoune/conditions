#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,del,x1,x2;
    printf("entrer les nembre a,b et c : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    del=pow(b,2)*a*c;
    if(del>0){
        x1=-b+sqrt(del)/2*a;
        x2=-b+sqrt(del)/2*a;
        printf("les solution est x1 = %.2f et x2 = %.2f ",x1,x2);
    } else if (del==0)
    { x1=x2=-b/a*2;
      printf("le solution est x1=X2=%.2f ",x1);

    } else {}
    return 0;
}
