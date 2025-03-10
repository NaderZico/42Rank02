#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int range;
    int *arr;

    if(start < end)
    arr = malloc(sizeof(int) * (end - start + 1));
    else
    arr = malloc(sizeof(int) * (start - end + 1));
    if(!arr)
        return NULL;
    
    while(start != end)
    {
        arr[i] = start;
        if(start < end)
            start++;
        else
            start--;
        i++;
    }
    return arr;
}

// #include <stdio.h>

// void print_array(int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
// }

// int main()
// {
//     int *arr1 = ft_range(1, 5);   // [1, 2, 3, 4, 5]
//     int *arr2 = ft_range(5, 1);   // [5, 4, 3, 2, 1]
//     int *arr3 = ft_range(3, 3);   // [3] (Single value case)

//     if (arr1) print_array(arr1, 5);
//     if (arr2) print_array(arr2, 5);
//     if (arr3) print_array(arr3, 1);

//     free(arr1);
//     free(arr2);
//     free(arr3);

//     return 0;
// }

