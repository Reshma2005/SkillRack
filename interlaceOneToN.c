/*1 to N forward and reverse interlaced*/

#include<stdio.h>

int main()
{
    int i=1,n;
    scanf("%d",&n);
    while(n != 0)
    {
        printf("%d %d ",i++,n--);
    }
    return 0;
}
    
