#include <stdio.h>
int show(int arr[], int size)
{
    int i;
    printf("\nyour array is : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int delete (int arr[], int size)
{
    int position;
    printf("\nEnter your position : ");
    scanf("%d", &position);
    for (int i = position - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int size, arr[20], i;
    printf("Enter your size of array : ");
    scanf("%d", &size);
    printf("\nEnter your array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    show(arr, size);
    delete (arr, size);
    size--;
    show(arr, size);
    return 0;
}
