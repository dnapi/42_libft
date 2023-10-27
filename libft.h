#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *b, size_t len);
void    *ft_memcpy(void *dst, const void *src, size_t n);

#endif 
