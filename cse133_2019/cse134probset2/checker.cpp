#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	if(t<1||t>1000)
	{
		printf("t must be greater than 1 and less than or equal 1000\n");
		return 1;
	}
	while(t--)
	{
		int n;
		scanf("%d",&n);
		if(n<1||n>100000)
		{
			printf("invalid n\n");
			return 1;
		}
	}
	printf("All test cases are ok!!!\n");
	return 0;
}