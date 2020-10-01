#include<stdio.h>
#include<string.h>

int main(){
	
	int i,n,sum=0;
	printf("enter number of elements");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
         scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
        sum=sum+a[i];
	}		
	
	//Print the sum of the array
	printf("%d \n", sum);

	char *name = "Izzy";
	int length = strlen(name);
	
	//Print every character in the array
	for(i=0; i<length; i= i +1){
		printf("%c \n", name[i]);
	}
	
	//Infinite for loop, this loop below will never end
	/*for( ; ; ){
		//Code here
		printf("hello \n");
	}*/
	
	return 0;
}

