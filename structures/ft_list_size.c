#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data)
{
	t_list *tmp;

  tmp = NULL;
	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void  ft_list_push_back(t_list **begin_list, void *data)
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


/*
int ft_list_size(t_list *begin_list)
{
  int i;

  i = 0;
  while (begin_list != 0)
  {
    begin_list = begin_list->next;
    i++;
  }
  return (i);
}*/

int ft_list_size(t_list *begin_list)
{
  t_list  *list;
  int   i;

  i = 0;
  list = begin_list;
  while (list)
  {
    i++;
    list = list->next;
  }
  return (i);
}



int main()
{
  t_list *list;
  
  list = 0;
  //list->next = ft_create_elem("andrei");
  //list->next->next= ft_create_elem("nu");
  //list->next->next->next= ft_create_elem("gde");

  
  ft_list_push_front(&list, "data");
  ft_list_push_back(&list, "12334");
printf("schetchik : %d\n", ft_list_size(list));
  
while (list)
  {
    printf("%s\n", list->data);
    printf("%d\n", ft_list_size(list));
    list = list->next;
  }

  

  
  return (0);
  
}

