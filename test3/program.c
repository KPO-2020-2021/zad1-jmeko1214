#include <stdio.h>


extern const double PI; /*zamiana extern na static*/
extern const double E; 


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
