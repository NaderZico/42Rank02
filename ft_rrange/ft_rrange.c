#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size;
    int i = 0;
    int *arr;
    if(end > start)
        size = end - start + 1;
    else
        size = start - end + 1;
    arr = malloc(sizeof(int) * (size));

    while(end != start)
    {
        arr[i] = end;
        if(end > start)
            end--;
        else
            end++;
        i++;
    }
    arr[i] = end;
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
//     int *arr1 = ft_rrange(1, 5); 
//     int *arr2 = ft_rrange(5, 1);  
//     int *arr3 = ft_rrange(3, 3);

//     if (arr1) print_array(arr1, 5);
//     if (arr2) print_array(arr2, 5);
//     if (arr3) print_array(arr3, 1);

//     free(arr1);
//     free(arr2);
//     free(arr3);

//     return 0;
// }

