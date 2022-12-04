#include "stdio.h"
#include "stdlib.h"


void solution(int *arr, int n, int k)
//find the solution
{
    int i, j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d", arr[k - 1]);
}

int main()
{
    int n, k, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d %d", &n, &k);
    int *arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    solution(arr, n, k);
    return 0;
}




