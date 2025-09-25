#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y,z;
    
    printf("input the second : ");
    scanf("%i", &x);
    
    y = x / 60;
    z = x % 60;
    
    printf("the time is %i : %i\n", y, z);
    
  system("PAUSE");	
  return 0;
}
