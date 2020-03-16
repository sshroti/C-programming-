#include <stdio.h>
#include <stdlib.h>
int main()
{
	// Prime number logic
	// Variables
	int i, n, c;
	for (n = 1; n <= 50; n++)
	{
		//Check Prime Number
		c = 0;
		for(i = 1; i <= n; i++)
		{
			if(n%i == 0)
			c++;
		}
		if (c == 2)
		printf(" %d", n);
	}
	return 0;
}
