#include<stdio.h>

struct _triangle
{
 float b,h ,area ;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle k;
  printf("enter the value of k\n");
  scanf("%f %f",&k.b,&k.h);
  return k;
}
Triangle find_area(Triangle *k)
{
  
  k->area=0.5 * k->b * k->h;
}
void output(Triangle t)
{
  printf("The area of a triangle is %f\n",t.area);
}
int main()
{   
   Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
  } 
