#include <stdio.h>

int f(int x)
{
	if (x == 0)
		return 0;
	else
		return (2*f(x-1) + x*x);
}


int main() 
{
	int i = 0;
	for (;i<10;i++) {
		printf("%d\n",f(i));
	}
	return 0;
}
