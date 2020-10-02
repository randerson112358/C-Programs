/* 
 *
 *
 
 This program adds numbers from 0 to n.
 By: randerson112358
 Date: 4/4/2014
 
 *
 *
*/


//Header File has information related to input/output functions.
#include<stdio.h>

//Main Function
int main(void)
{
	//initialize the variables
	int n,i, sum=0;
	
	//Take input of a number
	printf("PLEASE ENTER A POSITIVE NUMBER:: ");
	scanf("%d", &n);
	
	for(i=0; i<=n; i++)
	  sum+=i;
	  
	//output to console in a formatted manner
	printf("\nTHE SUM OF ALL NUMBERS FROM 0 TO %d IS:: %d\n", n, sum);
	
	return 0;
}




/*
 *
 *
 OUTPUT OF ABOVE PROGRAM
 
 PLEASE ENTER A POSITIVE NUMBER:: 5
 THE SUM OF ALL NUMBERS FROM 0 TO %d IS:: 15
 
 *
 *
*/
