#include <stdio.h>

int main ()
{
	int i, a;
	for (i=32; i<=126; i++)
		printf ("%3d -> %c -> %x\n", i, i, i);
	return 0;
}