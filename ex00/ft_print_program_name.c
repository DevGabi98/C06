/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:06:11 by vhacman           #+#    #+#             */
/*   Updated: 2024/11/28 12:07:18 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_put_name(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
		
}
int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_put_name(argv[0]);
	write(1, "\n", 1);
	return(0);
}*/

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	(void) argc;
	return (0);
}

/*
int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		char	*str;
		str = argv[0];
		while (str[i] != '\0')
		{
			write(1, str++, 1);
		}
		write (1, "\n", 1);
		return (0);
	}
}*/
