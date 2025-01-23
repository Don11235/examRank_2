#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void*, void*))
{
	t_list *current;
	t_list *prev;

	current = *begin_list;
	prev = NULL;
	while (current != NULL)
	{
		if ((*cmp)(data_ref, current -> data) == 0)
		{
			if (current == *begin_list)
			{
				*begin_list = current -> next;
				free(current);
				current = *begin_list;
			}
			else
			{
				prev -> next = current -> next;
				free(current);
				current = prev -> next;
			}
		}
		else
		{
			prev = current;
			current = current -> next;
		}
	}
}

t_list	*ft_lstnew(void *content)
{
	t_list *pt;

	pt = (t_list *)malloc(sizeof(t_list));
	if (pt == NULL)
		return (NULL);
	pt -> data = content;
	pt -> next = NULL;
	return (pt);
}
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *pt;
	pt = *lst;
	while (pt -> next != NULL)
		pt = pt -> next;
	pt -> next = new;
}
int comp(void *a, void *b)
{
	if (*(int *)a == *(int *)b)
		return (0);
	return (1);
}
#include <stdio.h>

int main()
{

	t_list *new;
	t_list *p;
	
	int x = 42;
	int y = 1;
	int z = 78;
	int w = 12;
	new = ft_lstnew(&x);
	ft_lstadd_back(&new, ft_lstnew(&y));
	ft_lstadd_back(&new, ft_lstnew(&z));
	ft_lstadd_back(&new, ft_lstnew(&w));
	ft_list_remove_if(&new, &w, comp);
	p = new;
	while (p != NULL)
	{
		printf("%d ", *(int*)(p -> data));
		p = p -> next;
	}
}