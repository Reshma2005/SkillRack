/*The array of n positive integers is passed as input. The output must print the array in the order of frequency*/

#include<stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);

int main()
{
    int ar[50],a1[24],cnt[25];
    int i,j,n,count = 1,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i] != -1)
        {
            for(j=i+1;j<n;j++)
            {
                if(ar[i] == ar[j])
                {
                    ar[j] = -1;
                    count++;
                }
            
            }
            cnt[p] = count;
            a1[p] = ar[i];
            count = 1;
            p++;
        }
    }
    
    for(i=0;i<p;i++)
    {
        for(j=i+1;j<p;j++)
        {
            if(cnt[i] < cnt[j])
            {
                swap(&cnt[i],&cnt[j]);
                swap(&a1[i],&a1[j]);
            }
            else if(cnt[i] == cnt[j])
            {
                if(a1[i] > a1[j])
                {
                    swap(&a1[i],&a1[j]);
                }
            }
        }
    }
    
    for(i=0;i<p;i++)
    {
        printf("%d ",a1[i]);
    }
    return 0;

}

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
