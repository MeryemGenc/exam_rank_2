#include "list.h"
#include <stdlib.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int tmp;
    t_list *lst_start;
    t_list *tmp_list;

    lst_start = lst;
    while (lst_start)
    {
        tmp_list = lst_start->next;
        while (tmp_list)
        {
            if ((*cmp)(tmp_list->data, lst_start->data))
            {
                tmp = (int)(lst_start->data);
                lst_start->data = tmp_list->data;
                tmp_list->data = tmp;
            }
            tmp_list = tmp_list->next;
        }
        lst_start = lst_start->next;
    }
    return lst;
}

//#include <stdio.h>
// int main(void)
// {
//     // Sample List
//     t_list *lst = malloc(sizeof(t_list));
//     lst->data = 5;
//     lst->next = malloc(sizeof(t_list));
//     lst->next->data = 2;
//     lst->next->next = malloc(sizeof(t_list));
//     lst->next->next->data = 8;
//     lst->next->next->next = NULL;

//     // First state of the list
//     printf("Before sorting: ");
//     t_list *current = lst;
//     while (current)
//     {
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");

//     // Sorting List
//     lst = sort_list(lst, ascending);

//     // Sorted List
//     printf("After sorting: ");
//     current = lst;
//     while (current)
//     {
//         printf("%d ", current->data);
//         current = current->next;
//     }
//     printf("\n");
//     free(lst->next->next);
//     free(lst->next);
//     free(lst);

//     return 0;
// }
