/*
** EPITECH PROJECT, 2017
** mylist.h
** File description:
** mylist.h
*/

#ifndef MY_LIST_H_

# define MY_LIST_H_

typedef struct			linked_list
{
	void			*data;
	struct linked_list	*next;
}				linked_list_t;

#endif /* !MY_LIST_H_ */
