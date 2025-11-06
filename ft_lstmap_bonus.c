/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:04:46 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/06 23:43:06 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list	*first_node;
// 	t_list	*first;
// 	t_list	*copy;
	
// 	if (lst == NULL || !(first = ft_lstnew(f(lst->content))))
// 		return (NULL);
// 	first_node = first;
// 	while (lst->next != NULL)
// 	{
// 		lst = lst->next;
// 		if (!(copy = ft_lstnew(f(lst->content))))
// 		{
// 			ft_lstclear(&first_node, del);
// 			return (NULL);
// 		}
// 		first->next = copy;
// 	}
// 	first->next = copy;
// 	copy->next = NULL;
// 	return (first_node);
// }


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*copy;
	
	if (!lst || !(new = ft_lstnew(f(lst->content))))
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(copy = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new, del);
			free(new);
			return (NULL);
		}
		ft_lstadd_back(&copy, new);
	}
	return (new);
}


// #include <stdlib.h>
// #include <string.h>
// void *duplicate_content(void *content) {
//     char *str = (char *)content;
//     char *dup = malloc(strlen(str) + 1);
//     strcpy(dup, str);
//     return dup;
// }

// void del_content(void *content) {
//     free(content);
// }

// int main() {
//     t_list *lst = ft_lstnew("Hello");
//     lst->next = ft_lstnew("World");

//     t_list *mapped = ft_lstmap(lst, duplicate_content, del_content);

//     if (mapped == NULL) return 1;
//     if (strcmp((char *)mapped->content, "Hello") != 0) return 1;
//     if (strcmp((char *)mapped->next->content, "World") != 0) return 1;

//     // Clean up original list
//     free(lst->next);
//     free(lst);

//     // Clean up mapped list
//     ft_lstclear(&mapped, del_content);

//     return 0;
// }