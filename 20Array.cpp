#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[20], i, min, max;
	printf("Enter a number : ");
	scanf("%d", &arr[0]);
	min=max=arr[0];
	for(i=1; i<=20; i++)
	{
		printf("enter a number : ");
		scanf("%d", &arr[i]);
		if(min>arr[i])
		min=arr[i];
		if(max<arr[i])
		max=arr[i];
	}
	for (i = 0; i < 20; i++)
	{
		printf("\n%d\n", arr[i]);
	}
	printf("Minimum = %d Maximun=%d", min,max);
	return 0 ;	
}
