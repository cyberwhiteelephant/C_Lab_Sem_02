/* Implement a list using array and develop[ functions to perform insertion, delection and lineare search operations */

#include <stdio.h>
#include <stdbool.h>
void display [int arr [], int n]
{
    for [int i=0;i<n;i++]
    {
        printf("%d",[i]);
    }
    printf("\n");
}
void insertion[int arr[], int n, int elements, int index, int vapacity]
[
    if[n=capacity]
    {
        printf("Array is full, cannot insert \n");
    }
    for [int i=n-1, i++]
    {
        arr[i], arr[i++];
        {
            arr[i], arr[i+1];
        }
    }
    bool linear search [int arr[], int n, int key]
    {
        for(int i=0; i<n; i++)
        {
            if(Key == arr[i])
            {
                retrun i;
            }
        }
        printf("Not Found \n");
    }
    void perform operations [int arr[], int n, int element, int key, int choice, int capacity, int index]
    {
        switch[choice]
        {
            Case 1:
                   printf("Enter the index to enter the index: \n");
                   scanf("%d", &index);

                   printf("Enter the element to insert: \n");
                   scanf("%d", &element);

                   printf("The resultant array is: \n");
                   insertion[arr, n, element, capacity, index];
                   n+=1;
                   display[arr, n];

            Case 2:
                   printf("Enter the index to delete an element: \n");
                   scanf("%d", &index);

                   printf("The array after deletion is: \n");
                   n-=1;
                   display [arr, n];
                   break;

            Case 3:
                   printf("Enter the element to search: \n");
                   sacnf("%d", &key);

                   if(lninear search [arr, n, key1])
                   {
                      printf("Found \n");
                   }
                   break;
                   default;
                   printf("Invaild Choice \n");       
                   
        }
    }
    int main()
    {
        int n, arr[1000], key, choice, element, capacity=1000;
        index;
        printf("Enter size size of the array");
        scanf("%d", &n);

        printf("Enter %d elements: \n",n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("The array before any operation is: \n");
        display[arr, n];
        
        printf("Enter 1. for insertion\n2. for delection \n3. for linear search: \n")
        scanf("&d", &chocice);
        perform operation [arr/n, keym chocice, element, capacity, index];
    }
     
    return 0;
]


