#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int fizz, buzz, count, x;
	
	FILE *input;
	input = fopen( argv[1], "r");

	while (!feof(input))
	{	
		fscanf (input, "%d %d %d", &fizz, &buzz, &count);
	
		if(feof(input))
		{
			break;
		}
		
		for(x = 1; x <= count; x++)
		{
			if(x % fizz == 0 && x % buzz == 0)
			{
				printf("FB ");
			}
			
			else if (x % fizz == 0)
			{
				printf("F ");
			}
		
			else if (x % buzz == 0)
			{
				printf("B ");
			}
			
			else
			{
				printf("%d ", x);
			}
		}//end for
		
		printf("\n");
		
	}//end while
	
	return 0;
}//end main
