#include <stdio.h>
#include <stdlib.h>
int main()
{

int a,b,c,n,i,terms;


    printf("enter the no of terms : ");
        scanf("%d" , &n);
    a=0;
    b=1;
    c=0;
    
    printf("fibonacci terms : \n");
    
    for(i=3; i<=n; i++)
    {
        printf("%d," , c);
        a=b;
        b=c;
        c=a+b;
    }
return 0;
}

