#include<stdio.h>
#include<math.h>
struct _triangle
{
  float b,h,area;
};
typedef struct _triangle  
struct _triangle input_triangle(struct _triangle *b,struct _triangle  *h)
{
  
  printf("enter the value of base and height\n");
  scanf("%f %f", b,h);
}
struct _triangle find_area(struct _triangle b,struct _triangle h)
{ 
   struct _triangle area ;
   area =(b*h)/2;
  
  return area;
}
void output(struct _triangle a,struct _triangle b,struct _triangle area)
{
  printf("the area of a triangle is %f",area);

}
int main()
{
  struct _triangle a,b,c;
  input_triangle(&a,&b);
  c =find_area(a,b);
  output(a,b,c);
  return 0;
}