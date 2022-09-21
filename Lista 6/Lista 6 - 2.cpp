#include <stdio.h>

int main ()
{
	int pri, seg = 1, ter = 1, i = 1;
	printf ("1\n");
	printf ("1\n");
	while (i <= 13)
	{	
		pri = seg + ter;
		printf ("%d\n", pri);
		if (i%2 == 0)
			seg = pri;
		else
			ter = pri;
		i++;
	}
	return 0;
}
			     
                     