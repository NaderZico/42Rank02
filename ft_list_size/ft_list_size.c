#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int i = 0;
    while(begin_list)
    {
        i++;
        begin_list = begin_list->next;
    }
    return i;
}

// #include "ft_list.h"
// #include <stdio.h>
// #include <stdlib.h>

// t_list *create_node(void *data)
// {
//     t_list *new_node = (t_list *)malloc(sizeof(t_list));
//     if (!new_node)
//         return NULL;
//     new_node->data = data;
//     new_node->next = NULL;
//     return new_node;
// }

// void print_list_size(t_list *list)
// {
//     printf("List size: %d\n", ft_list_size(list));
// }

// int main(void)
// {
//     t_list *list = NULL;
    
//     // Test when list is empty
//     print_list_size(list);  // Expected output: List size: 0

//     // Create a few nodes and add them to the list
//     list = create_node("First node");
//     list->next = create_node("Second node");
//     list->next->next = create_node("Third node");

//     // Test when list is populated
//     print_list_size(list);  // Expected output: List size: 3

//     // Clean up the list
//     free(list->next->next);
//     free(list->next);
//     free(list);

//     return 0;
// }
