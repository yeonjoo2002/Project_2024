#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void square (int a)
{
	a = a*a;
}

int main()
{
	int a= 2;
	square (a);
	printf("a=%i\n",a);
}
// a=2라고 출력


/*int square (int a)
{
	return (a*a);
}

int main()
{
	int a = 2;
	a = square (a);
	printf("a=%i\n",a);	
}*/

// a=4

