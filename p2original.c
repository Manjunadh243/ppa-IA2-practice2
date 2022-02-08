#include<stdio.h>
int input_side()
{
  int a;
  printf("enter any numbrer\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b&&b!=c&&a!=c)
  return 0;
  else 
  return 1;
}
void output(int a,int b,int c,int scalene)
{
 if(scalene==0)
 printf("scalene");
 else
 printf("not scalene");
}
int main()
{
  int a,b,c,z;
  a=input_side();
  b=input_side();
  c=input_side();
  z=check_scalene(a,b,c);
  output(a,b,c,z);
  return 0;
}