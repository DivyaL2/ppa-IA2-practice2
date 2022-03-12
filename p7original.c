#include<stdio.h>
#include<math.h>
struct _triangle
{
  float b,h,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle(Triangle a)
{
  
  printf("enter the value of a);
  scanf("%f",&a);
}
Triangle find_area(Triangle b ,Triangle h)
{ 
   Triangle area ;
   area =(b*h)/2;
  
  return area;
}
void output(Triangle area)
{
  printf("the area of a triangle is %f",area);

}
int main()
{
  Triangle c,base,height;
   base =input_triangle();
   height=input_triangle();
  c =find_area(a,b);
  output(a,b,c);
  return 0;
}