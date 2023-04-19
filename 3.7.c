#include<stdio.h>
main()
{
	float pi=3.1415,radius,perimeter,area;
	
	printf("enter the value \n");
	scanf("%f ,&radius");
	
	area= pi*radius*radius;
	perimeter= 2*pi*radius;
	
	printf ("area of circle is %f and perimeter is f",area,perimeter);
}
