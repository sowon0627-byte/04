#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int second, minute;
    
    printf("input the second : ");
    scanf("%d", &second);
    
    printf("The time for %d second is %d : %d : %d\n",
           second, (second / 3600), ((second / 60) % 60 ), (second % 60));
    
  system("PAUSE");	
  return 0;
}
