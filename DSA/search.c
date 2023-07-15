#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int Search(int arr[], int size)
{
    int data, flag = 0;
    printf("Enter your Search Element");
    scanf("%d", &data);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == data)
        {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("Yes, Number is Present");
    else
        printf("No, Number is Not Present");
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
    // display(arr, size);
    Search(arr, size);
    size--;

    return 0;
}

// #include <stdio.h>
// void display(int arr, int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }
// void search(int arr, int size)
// {
//     int data, flag = 0;
//     printf("Enter your search array : ");
//     scanf("%d", &data);
//     printf("Enter your array : ");
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == data)
//         {
//             flag = 1;
//         }
//     }
//     if (flag == 1)
//     {
//         printf("Yes, number is persent : ");
//     }
//     else
//     {
//         printf("No,number is not persent : ");
//     }
// }
// int main()
// {
//     int arr[20], size, i;
//     printf("Enter your number :");
//     scanf("%d", &size);
//     printf("Your array is");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     search(arr, size);
//     size--;
//     return 0;
// }
