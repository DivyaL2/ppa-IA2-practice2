#include<stdio.h>
int input_array_size()
{
  int a;
  printf("enter the size of the array\n");
  scanf("%d",&a);
  return a;
}
void input_array(int n,int *a)
{
  printf("enter the array values\n");
  int count =0;

  for(int i=0;i<=a[n];i++)
  {
    if(a[i]%i==0)
    count++;
    scanf("%d",&a[i])
  }
}
int  sum_composite_numbers(int n,int a[n],int )
{
  int sum=0,count=0;
  

  for(int i=1;i<n;i++)
  {
    
    

      if(count>2)
      {
      sum=sum+a[i];
      }
    
  }
  return sum;
}
void output(int sum)
{
  printf("The sum is %d",sum);

}
int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;

}