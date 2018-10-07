#include <stdio.h>
#include <conio.h>
main()
{
	int x, y;
	printf("Proporciona el valor de x. ");
	scanf("%d", &x);
	y= x>2? ((x*x)+(3*x)-2) : 	((2*x*x)+x+8);
	printf("y= %d", y);

}
