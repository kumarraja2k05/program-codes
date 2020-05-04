#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) 
{
  //Write your code here.
  int i;
  int a,m,j,l,b;
  for(i=1;i<=n;i++)
  {
      a=i;
      b=i++;
      m=a&b;
      j=a|b;
      l=a^b;
      if(m<k)
      {
          goto and;
      }
      if(j<k)
      {
          goto or;
      }
      if(l<k)
      {
          goto xor;
      }
  }
  and:
  printf("%d",m);
  or:
  printf("\n%d",j);
  xor:
  printf("\n%d",l);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

