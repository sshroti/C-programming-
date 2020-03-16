#include <stdio.h>
#include <ctype.h>
int main()
{
	int i=0, nl=0, nd=0, ns=0;
	char st[50];
	printf("Enter a string : ");
	scanf("%[^\n]s", st);
	while(st[i]!='\0')
	{
		if (isalpha(st[i]))
		nl++;
		if (isdigit(st[i]))
		nd++;
		if (isspace(st[i]))
		ns++;
		i++;
	}
	printf("\nNumber of Letters = %d\n", nl);
	printf("Number of Digits = %d\n", nd);
	printf("Number of Spaces = %d\n", ns);
	return 0;
}
