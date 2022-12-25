#include<stdio.h>
void swap(int a,int b);

void swap(int a,int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("\n Inside swap function a = %d and b = %d",a,b);
}
int main()
{
  int a = 10;
  int b = 20;
  printf("\n Before Swapping a = %d and b = %d",a,b);
  printf("\n After Swapping a = %d and b = %d",a,b);
  swap(a,b);

}