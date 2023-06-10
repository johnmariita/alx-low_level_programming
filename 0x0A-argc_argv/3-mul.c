#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	
	printf("%d\n", num1 * num2);
	return (0);
}
