#include <stdio.h>

int main ()
{
	int men, mai;
	do
	{
	printf ("Digite o numero menor: \n");
	scanf ("%d", &men);
	printf ("Digite o numero maior: \n");
	scanf ("%d", &mai);
	} while (men >= mai);
	while (men <= mai)
	{
		printf ("\n%d", men);
		men++;
	}
	return 0;
}