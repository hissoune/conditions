#include <stdio.h>
#include <stdlib.h>

int main()
{
   char choix ;
   printf("entre votre character :");
   scanf("%c",&choix);
    switch(choix){
    case 'a':
    case 'A':
    case 'E':
    case 'U':
    case 'u':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'e':
         printf("le character %c est voiylle ",choix);
         break;
         default: printf("le character est pas un voiylle !!!");}

    return 0;
}
