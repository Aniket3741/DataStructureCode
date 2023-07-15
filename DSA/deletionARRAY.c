#include <stdio.h>
// 1   // ///////////////////////////////////Trvarsel an Array///////////////////////
int show(int arr[], int size)
{
    printf("\nYour Array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
/////////////////////////////////delete an Element an Array///////////////////////
int Delete(int arr[], int size)
{
    int position;
    printf("\nEnter your Position -> ");
    scanf("%d", &position);
    for (int i = position - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int size, arr[20], i;
    printf("Enter your size of Array : ");
    scanf("%d", &size);
    printf("Enter your Array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    show(arr, size);
    Delete(arr, size);
    size--;
    show(arr, size);
    return 0;
}