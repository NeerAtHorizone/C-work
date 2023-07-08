// PATTERN
/*


*******
 *****
  ***
   *
  ***
 *****
*******


*/

#include <stdio.h>
int main()
{

	printf("Enter Half Number of Rows : ");

	int rows;
	scanf("%d", & rows);

	int i, j, k, l, str = rows + rows - 1;


	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < (str - j); k++)
		{
			printf("*");
		}
		for (l = 0; l < i; l++)
		{
			printf(" ");
		}
		printf("\n");
		str--;
	}


	for (i = 1; i < rows; i++)
	{
		for (j = i; j < rows - 1; j++)
		{
			printf(" ");
		}
		for (k = 0; k < i + i + 1; k++)
		{
			printf("*");
		}
		for (l = 0; l < rows; l++)
		{
			printf(" ");
		}

		printf("\n");
	}

	return 0;
}