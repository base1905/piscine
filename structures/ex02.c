#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}


void ft_list_push_front(t_list **begin_list, void *data)
{
  t_list *new;
  t_list *kek;

  kek = ft_create_elem(data);
  
  if (new == NULL)
    *begin_list = kek;
  else
  {
    new = kek;
    new->next = *begin_list;
    *begin_list = new;
  }
  
}



int main()
{

  t_list *list;
  
  list = ft_create_elem("privet");
  list->next = ft_create_elem("andrei");
  list->next->next= ft_create_elem("nu");
  list->next->next->next= ft_create_elem("gde");
  ft_list_push_front(&list, "data");
while (list)
  {
    printf("%s\n", list->data);
    list = list->next;
  }

  
  return (0);
  
}


