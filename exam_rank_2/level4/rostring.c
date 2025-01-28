#include <unistd.h>
#include <stdio.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *pt1;
	t_list *pt2;
	void *tmp;

	pt1 = lst;
	while (pt1 != NULL)
	{
		pt2 = pt1 -> next;
		while (pt2 != NULL)
		{
			if ((*cmp)(pt1 -> data, pt2 -> data) == 0)
			{
				tmp = pt1 -> data;
				pt1 -> data = pt2 -> data;
				pt2 -> data = tmp;
			}
			pt2 = pt2 -> next;
		}
		pt1 = pt1 -> next;
	}
	return (lst);
}
