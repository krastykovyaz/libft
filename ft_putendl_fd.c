/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoisome <lnoisome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:35:42 by lnoisome          #+#    #+#             */
/*   Updated: 2019/09/15 15:08:33 by lnoisome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t l;

	if (s)
	{
		l = ft_strlen(s);
		write(fd, s, l);
		ft_putchar_fd('\n', fd);
	}
}
