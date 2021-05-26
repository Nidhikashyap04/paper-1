#include <stdio.h>
#include <limits.h>

void smallestAndSecondSmallest(int *arr,int n)
{
    int i, first, second;
 
    /* There should be atleast two elements */
    if (n < 2)
    {
        printf(" Invalid Input ");
        return;
    }
 
    first = second = INT_MAX;
    for (i = 0; i < n ; i ++)
    {
        /* If current element is smaller than first
           then update both first and second */
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
 
        /* If arr[i] is in between first and second
           then update second  */
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        printf("There is no second smallest element\n");
    else
        printf("The smallest element is %d and second "
               "Smallest element is %d\n", first, second);
}

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
         scanf("%d",arr[i]);
    }

    smallestAndSecondSmallest(arr, n);

    delete[] arr;
}
