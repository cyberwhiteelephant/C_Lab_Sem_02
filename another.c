// Write a program to printf the position of the smallest number of n elements using arrrays.

#include <stdio.h>
int main() 
{
    int n, i;
    int smallest_pos = 0; 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please enter a valid number of elements.\n");
        return 1; 
    }

    int arr[n]; 
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    for (i = 1; i < n; i++) 
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
            smallest_pos = i;
        }
    }
    printf("The position of the smallest element is: %d\n", smallest_pos);

    return 0;
}
