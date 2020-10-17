#include<Stdio.h>
#include<math.h>
float over(float n)
{
	float all;
	all = sqrt(n);
	return all;
}
int main()
{
	int n;
	float sum = 0.00;
	printf("Input your number : ");
	scanf_s("%d", &n);
	if (n <= 0)
	{
	printf("error");
	}
	if (n % 2 != 0)
	{
		for (int i = 1; i <= n; i += 2)
		{
			for (int j = 1; j <= i; j+=2)
			{
				printf(" RT{%d} ", j);
				sum += over(j);
				if (j != i)
				{
					printf(" + ");
				}
				else
				{
					printf(" =  %.2f ", sum);
				}

			}
			printf("\n");
			sum = 0;
		}
	}
	else 
	{ 
		for (int i = 2; i <= n; i += 2)
		{
			for (int j = 2; j <= i; j += 2)
			{
				printf(" RT{%d} ", j);
				sum += over(j);
				if (j != i)
				{
					printf(" + ");
				}
				else
				{
					printf(" =  %.2f ", sum);
				}

			}
			printf("\n");
			sum = 0;
		}
	}
	

	return 0;
}