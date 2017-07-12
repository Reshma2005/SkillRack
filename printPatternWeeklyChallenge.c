/**
print the pattern based on given input]
input:5
output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14



/



#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k=1,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;


}
