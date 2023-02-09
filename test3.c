#include <stdio.h>
void main (void)
{
    int mwazaf;
    int salary;
    int salary_mon;
    int salary_year;
    int total;
    mwazaf=20;
    printf(" number of mwazaf is %d\n",mwazaf);
    printf("your salary is:");
    scanf("%d",&salary);
    printf(" salary mon is:");
    scanf("%d",&salary_mon);

    printf("salary year is:");
    scanf("%d",&salary_year);
     total=salary_mon*salary_year;
     printf("total of  %d * %d =%d",salary_mon ,salary_year,total);





}
