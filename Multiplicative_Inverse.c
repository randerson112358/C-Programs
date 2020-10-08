//Program to finding Multiplicative inverse of a number
#include<stdio.h>
#include<conio.h>
#include<math.h>

int GCD(int a, int b);
int mulinv(int x, int y);

int main()
{
	int n, i, z, ans;
	printf("Enter the value of Z (Domain)\n");
	scanf("%d", &z);
	printf("Enter a number whose multiplicative inverse you want to know.\n");
	scanf("%d", &n);
	ans = GCD(z, n);
	printf("GCD is %d. \n", ans);
	if (ans == 1)
	{
		printf("\n\n-------Multiplicative Inverse Exist--------\n\n");
		mulinv(z, n);
	}
	if (ans != 1)
	{
		printf("No multiplicative inverse exsist.\n");
	}
	return 0;
}

int GCD(int a, int b)
{
	if (b != 0)
	{
		return GCD(b, a % b);
	}
	else {
		return a;
	}
}
int mulinv(int x, int y)
{
	int i;
	for (i = 0; i < x; i++)
	{
		if ((y * i) % x == 1)
		{
			printf("\n\nThe multiplicative inverse of (%d*%dmod%d=1)\n\n", y, i, x);
			printf("\n***The multiplicative inverse is-> %d.***", i);
			break;
		}
	}
}