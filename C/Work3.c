#include <stdio.h> 
#include <stdbool.h>
#include <stdlib.h>

bool isPrime(int n)
{
	if(n == 1)
	{
		return false;
	}
	if(n == 2)
	{
		return true;
	}
	if(n % 2 == 0)
	{
		return false;
	}
	
	for(int i = 3;i*i <= n;i+=2)
	{
		if(n % i == 0)
		{
			return false;
		}
		
	}
	return true;
}

int main(void)
{
	int Num;
	scanf("%d",&Num);
	if(Num == 1)
	{
		return 1; 
	}
	
	int sum = 0;
	int count = 0;
	int current = 2;
	
	while(sum < Num && current <= Num)
	{
		if(isPrime(current))
		{
			if(sum + current <= Num)
			{
				sum += current;
				count++;
				printf("%d\n",current);
			
			}
			else
			{
				current++;
				continue;
			}
		}
		current++;
	}
	printf("%d\n", count);
	
	system("pause");
	return 0;
	
}
