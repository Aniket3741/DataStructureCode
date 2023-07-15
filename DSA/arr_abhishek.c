////////////////////////////////////Linear search array////////////////////////////////////
// #include <stdio.h>
// int main()
// {
//     int n, i, element;
//     printf("Enter your size of array : ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter your array\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter your search element : ");
//     scanf("%d", &element);
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == element)
//         {
//             printf("YES");
//             break;
//         }
//     }
//     return 0;
// }

//////////////////////////////////////Bianry seach array////////////////////////////////////
// #include <stdio.h>
// int binary(int arr[], int n, int element)
// {
//     int low = 0, high = n - 1, mid;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;
//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         if (arr[mid] < element)
//         {
//             low = mid;
//         }
//         else
//         {
//             high = mid;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n, i, element;
//     printf("Enter your size of array : ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter your array\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter your element : ");
//     scanf("%d", &element);
//     printf("%d", binary(arr, n, element));
//     return 0;
// }

////////////////////////////////////////duplicate element in array//////////////////////////////
// #include <stdio.h>
// int main()
// {
//     int n, i, count = 0;
//     printf("Enter your size of array : ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter your array : ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 arr[count] = arr[j];
//                 count++;
//                 break;
//             }
//         }
//     }
//     for (i = 0; i < count; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n%d", count);
//     return 0;
// }

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
// 2     ///////////////////////////////////insert an Element an Array///////////////////////
// int Insert(int arr[], int size)
// {
//     int data, position;
//     printf("\nEnter your Data : Position -> ");
//     scanf("%d %d", &data, &position);
//     for (int i = size; i >= position; i--)
//     {
//         arr[i] = arr[i - 1];
//     }
//     arr[position - 1] = data;
// }
//3      ///////////////////////////////////delete an Element an Array///////////////////////
//  int Delete(int arr[], int size)
//  {
//      int position;
//      printf("\nEnter your Position -> ");
//      scanf("%d", &position);
//      for (int i = position-1; i < size; i++)
//      {
//          arr[i] = arr[i + 1];
//      }
//  }
// 4      ///////////////////////////////////Search an element an Element an Array///////////////////////
 int Search(int arr[], int size)
 {
     int data, flag = 0;
     printf("\nEnter your Search Element -> ");
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
// 5 6     ///////////////////////////////////First and Second large Element /////////////////////////
//  int Large(int arr[], int size)
//  {
//      int max = 0, max2 = 0;
//      for (int i = 0; i < size; i++)
//      {
//          if (arr[i] > max)
//          {
//              max = arr[i];
//          }
//      }
//      for (int i = 0; i < size; i++)
//      {
//          if (arr[i] < max && arr[i] > max2)
//          {
//              max2 = arr[i];
//          }
//      }
//      printf("\nLarge Element is %d %d", max, max2);
//  }
// 7 8         ///////////////////////////////////First and Second small Element /////////////////////////
//  int Small(int arr[], int size)
//  {
//      int min = arr[0], min2 = arr[0];
//      for (int i = 0; i < size; i++)
//      {
//          if (arr[i] < min)
//          {
//              min = arr[i];
//          }
//      }
//      for (int i = 0; i < size; i++)
//      {
//          if (arr[i] > min && arr[i] < min2)
//          {
//              min2 = arr[i];
//          }
//      }
//      printf("\nsmall Element is %d %d", min, min2);
//  }
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

// Move all the negative elements to one side of the array
// #include <stdio.h>
// int main()
// {
//     int size, i, arr[10], arr1[10], j = 0;
//     printf("Enter your size : ");
//     scanf("%d", &size);
//     printf("Enter yur Array : ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     for (i = 0; i < size; i++)
//     {
//         if (arr[i] < 0)
//         {
//             arr1[j] = arr[i];
//             j++;
//         }
//     }
//     printf("\n");
//     for (i = 0; i < size; i++)
//     {
//         if (arr[i] >= 0)
//         {
//             arr1[j] = arr[i];
//             j++;
//         }
//     }
//     printf("\n");
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", arr1[i]);
//     }
//     return 0;
// }

// Find the Union and Intersection of the two sorted arrays
// #include <stdio.h>
// int main()
// {
//     int size, i, j, arr[10], arr2[10], count = 0, arr3[10];
//     printf("Enter your size of Array : ");
//     scanf("%d", &size);
//     printf("\nEnter your First Array : ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("\nEnter your Second Array : ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &arr2[i]);
//     }
//     for (i = 0; i < size; i++)
//     {
//         for (j = 0; j < size; j++)
//         {
//             if (arr[i] == arr2[j])
//             {
//                 arr3[count] = arr[i];
//                 count++;
//                 break;
//             }
//         }
//     }
//     for (i = 0; i < count; i++)
//     {
//         printf("%d ", arr3[i]);
//     }
//     return 0;
// }