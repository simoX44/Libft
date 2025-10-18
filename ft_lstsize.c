#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len_list;

	len_list = 0;
	while (lst)
	{
		len_list++;
		lst = lst->next;
	}
	return (len_list);
}
