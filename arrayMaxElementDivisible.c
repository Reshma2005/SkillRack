/*largest number divisible by d in a given array*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[1000],n,d,mul=0,num=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(a[i]%d ==0 && a[i]/d > mul)
        {
            mul = a[i]/d;
            num = a[i];
        }
        
    }
     printf("%d",num);
     return 0;

}
