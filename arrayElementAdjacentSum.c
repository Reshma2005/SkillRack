/*Sum of adjacent elemnts of array*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d ",a[1]);
    for(i=1;i<n-1;i++)
    {
        printf("%d ",(a[i-1] + a[i+1]));
    }
    printf("%d",a[n-2]);
    return 0;

}
