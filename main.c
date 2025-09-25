#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j;
    int a,b,c,d,e;
    
    printf("input two integers\n");
    scanf("%d%d", &i,&j);
    printf("input two integers : %d %d\n", i,j);
    
    a = i + j;
    b = i - j;
    c = i * j;
    d = i / j;
    e = i % j;
    
    printf("+ result is %d\n", a);
    printf("- result is %d\n", b);
    printf("* result is %d\n", c);
    printf("/ result is %d\n", d);
    printf("%% result is %d\n", e);
  
  system("PAUSE");	
  return 0;
}
