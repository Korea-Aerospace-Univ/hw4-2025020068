#include <stdio.h>

int main(void)
{
    int a=0 , b=0, atp=0;
    
    scanf("%d",&a);
    do {
        scanf("%d",&b);
        atp++;
        if (a<b) printf("%d>?\n",b);
        else if (a>b) printf("%d<?\n",b);
        else printf("%d==?\n",b);
    }while(a!=b);
    
    printf("%d",atp);
    return 0;
}
