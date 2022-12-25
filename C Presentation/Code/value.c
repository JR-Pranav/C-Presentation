#include<stdio.h>

void set(int a);
void set(int a)
{ 
  a = 0;
  printf("\n Inside set function a = %d ",a);

}

int main()
{
  int a = 10;
  printf("\n Before sending to set function a = %d",a);
  set(a);
  printf("\n After sending to set function a = %d",a);
 
}

