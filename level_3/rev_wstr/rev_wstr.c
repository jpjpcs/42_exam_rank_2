/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaosilva <joaosilva@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 18:32:48 by joaosilva         #+#    #+#             */
/*   Updated: 2023/12/26 19:53:56 by joaosilva        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>


int main(int ac, char **av)
{   
    int i = 0;
    int j = 0;
    if (ac == 2)
    { 
        while (av[1][i])
            i++;
        while (i > 0)
        {
            while (av[1][i] != ' ' && i > 0)
                i--; 
            j = i --;
           if (av[1][j] && av[1][j] == ' ')
                j++;
            while (av[1][j] && av[1][j] != ' ')
                write (1, &av[1][j++], 1);
            if (i > 0)
                write (1, " ", 1);
        }
    }
    write (1, "\n", 1);
    return (0);
}