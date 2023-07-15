// #include <stdio.h>
// void display(int arr[], int n)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int indInsertion(int arr[], int size, int element, int index)
// {
//     for (int i = size; i >= index; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[index - 1] = element;
// }
// int main()
// {
//     int arr[100] = {10,20,30,40,50,60};
//     int size = 6, element = 45, index = 3;
//     display(arr, size);
//     indInsertion(arr, size, element, index);
//     size++;
//     display(arr, size);
// }
