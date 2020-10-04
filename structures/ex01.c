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


void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *kek;
  t_list *iter;

	iter = *begin_list;
  kek = ft_create_elem(data);

	if (kek != 0)
	{
		while (iter->next)
			iter = iter->next;
		iter->next = kek;
	}
	else
		*begin_list = kek;
}



int main()
{

  t_list *list;
  


  list = ft_create_elem("privet");
  list->next = ft_create_elem("andrei");
  list->next->next= ft_create_elem("nu");
  list->next->next->next= ft_create_elem("gde");

  ft_list_push_back(&list, "ti");
  
while (list)
  {
    printf("%s\n", list->data);
    list = list->next;
  }

  
  return (0);
  
}


