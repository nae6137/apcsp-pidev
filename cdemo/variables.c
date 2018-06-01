#include <stdio.h>

int main()
{
	int a;
	int b =3;
	int c;
	int temp;

	a=2;
	c = a + b;
	printf("Sum of a=%d and b=%d is c=%d\n", a, b, c);

	temp = a;
	a = c;
	c = temp;
	printf("a is %d and c is %d\n", a, temp);
}
