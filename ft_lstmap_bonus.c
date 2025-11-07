/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtourdia <@student.42mulhouse.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:04:46 by gtourdia          #+#    #+#             */
/*   Updated: 2025/11/07 14:55:03 by gtourdia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first_node;
	(void) del;

	if (!lst || !(new = ft_lstnew(f(lst->content))))
		return (NULL);
	first_node = new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if(!(new->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&first_node, del);
			free(first_node);
			return (NULL);
		}
		new = new->next;
	}
	return (first_node);
}


// #include <stdlib.h>
// #include <string.h>
// #include <stdio.h>
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
//     printf("%d %s\n", strcmp((char *)mapped->content, "Hello"), (char*) mapped->content);
//     printf("%d %s\n", strcmp((char *)mapped->next->content, "World"), (char*) mapped->next->content);
//     printf("%d %s\n", strcmp((char *)mapped->next->next->content, "World"), (char*) mapped->next->next->content);

//     // Clean up original list
//     free(lst->next);
//     free(lst);

//     // Clean up mapped list
//     ft_lstclear(&mapped, del_content);

//     return 0;
// }