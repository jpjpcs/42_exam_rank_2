/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 21:51:24 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/15 21:51:32 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0; 

    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {
                av[1][i] = 97 + 122 - av[1][i];
            }
            if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {
                av[1][i] = 65 + 90 - av[1][i];
            }
            write (1, &av[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}