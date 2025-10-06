#include<stdio.h>
#include<stdlib.h>
int count(int n)
{
	if(n==1)
	{
		return n;
	}
	else
	{
		return n * count(n-1);
	}
} 

int main(void)
{
	int Num;
	scanf("%d", &Num);
	printf("%d\n",count(Num));
	system("pause"); 
}
