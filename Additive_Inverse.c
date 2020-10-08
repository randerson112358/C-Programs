//Additive Inverse Using C

#include<stdio.h>
#include<math.h>

int main()
{
	int a, p, i, j, k, r, ans, count = 0, c = 0;
	printf("Enter the value of a.\n");
	scanf("%d", &a);
	printf("Enter the value of p which must be prime.\n");
	scanf("%d", &p);
	int store[p];
	for (k = 1; k <= p; k++)
	{
		if (p % k == 0)
		{
			c++;
		}
	}
	if (c != 2)
	{
		printf("Sorry %d  is not Prime.\n", p);
	}
	else {

		for (i = 1; i < p; i++)
		{
			ans = pow(a, i);
			r = ans % p;
			store[i] = r;
			printf("%d^%d mod %d is %d \n", a, i, p, store[i]);
		}
		for (i = 1; i < p; i++)
		{
			for (j = i + 1; j < p; j++)
			{
				if (store[i] == store[j])
				{
					count++;
					break;
				}
			}
		}
		printf("\n\n---Repetition of integer is %d.\n\n---", count);
		if (count == 0)
			printf("\n Yess!! %d is primitive root of %d", a, p);
		else
			printf("\n NO!! %d is not primitive root of %d", a, p);
	}

	return 0;
}