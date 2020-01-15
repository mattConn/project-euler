#include <stdio.h>

#define MAX 1000

int main()
{

	for(int a = 1; a < MAX; a++)
	{
		for(int b = 1; b < MAX; b++)
		{
			for(int c = 1; c < MAX; c++)
			{
				if((a*a + b*b == c*c) && (a+b+c == 1000))
				{
					printf("%d\n",a*b*c);
					return 0;
				}
			}
		}
	}

}
