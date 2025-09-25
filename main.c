#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int year;
    
    printf("input the year : ");
    scanf("%d", &year);
    
    printf("is the year %d the leap year? : %d\n",
           year, (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
    
  system("PAUSE");	
  return 0;
}
