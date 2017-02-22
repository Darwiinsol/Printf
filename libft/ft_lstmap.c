#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
  t_list	*new;
  t_list	*first;

  first = NULL;
  new = NULL;
  if (lst != NULL && f != NULL)
    {
      if (!(new = (t_list *)malloc(sizeof(t_list))))
	return (NULL);
      new = (*f)(lst);
      first = new;
      while (lst->next)
	{
	  if (!(new->next = (t_list *)malloc(sizeof(t_list))))
	    return (NULL);
	  lst = lst->next;
	  new->next = (*f)(lst);
	  new = new->next;
	}
    }
      return (first);
}
