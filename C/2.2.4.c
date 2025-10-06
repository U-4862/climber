#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b; 
    *b = temp;
}

int main()
{
    int length;
    
    scanf("%d", &length);
    
    int arr[length];
    
    
    for(int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i < length-1;i++)
    {
        for (int n=0; n < length - i-1;n++)
        {
            if(arr[n]>arr[n+1])
            {
                swap(&arr[n], &arr[n + 1]);
            }
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
