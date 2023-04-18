#include<stdio.h>
main()
{
	int a= a , b , c ;
	
	printf("a = ");
	scanf ("%d",&a);
    printf("b = ");
	scanf ("%d",&b);
	printf("c = ");
	scanf ("%d",&c);
	
	c = a;
	a = b;
	b = c;
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
}
