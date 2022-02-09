#include<stdio.h>
struct_triangle
{
  float base,altitude,area;
};
struct_triangle input_triangle()
{
  struct_triangle base,altitude;
  printf("enter the value of base and altitude\n");
  scanf("%d %d", base,altitude);
}
struct_triangle find_area()
