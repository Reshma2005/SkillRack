#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int day,month,year,age;
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    scanf("%d %d %d",&day,&month,&year);
    age = tm.tm_year - year +1900;
    if((tm.tm_mon+1) - month < 0)
    {
        age--;
        printf("%d",age);
        return 0;
    }
    if(tm.tm_mday - day < 0 && (tm.mon+1-month == 0))
    {
        age--;
        printf("%d",age);
        return 0;
    }
    printf("%d",age);
    return 0;
    


}
