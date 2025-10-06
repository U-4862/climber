#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n)
{
	if(n== 1)
	{
		return 1;
	}
	else if(n == 2)
	{
		return 1;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
		
	}
}
 
int main(void){

 	int Num;
 	int arr[30];
 	printf("1 ");
 	scanf("%d",&Num);
 	for(int i = 1; i <= Num; i++)
 	{
 		printf("%d ",i+1);
 		scanf("%d", &arr[i-1]);
 	}	
	system("cls");
	for(int i = 1; i <= Num; i++)
	{
		printf("%d %d\n", i,fibonacci(arr[i-1]));
	
	}
		
	system("pause"); 
	return 0;
}
 
