#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "libft.h"

int	ft_isalpha_test(int num_test); // 01
int ft_isdigit_test(int num_test); // 02

void ft_memset_test(int num_test); // 07
void ft_bzero_test(int num_test);  // 08	
void ft_memcpy_test(int num_test); // 09
void ft_memmove_test(int num_test);  // 10
void ft_atoi_test(int num_test);  // 21

void ft_substr_test(int num_test);  // 24
void ft_itoa_test(int num_test);        //28



int main(void)
{
//	ft_isalpha_test(1);
//	ft_isdigit_test(2);
//	ft_memset_test(7);
//	ft_bzero_test(8);
//	ft_memcpy_test(9);
//	ft_memmove_test(10);
//	ft_atoi_test(21);
//	ft_substr_test(24);
	ft_itoa_test(28);  

	return (0);
}


int ft_isalpha_test(int num_test)
{
	char str[] = {'0','1','B','9','&'};
	int i;
	int count;
	int delta;

	printf("Test %d for isalpha \n", num_test);	

	i = -1;
	count = 0;
	while (++i < 5)
	{
	delta =  isalpha(str[i]) - ft_isalpha(str[i]);
		printf("	%c  -> %d\n", str[i], ft_isalpha(str[i]));
		if (delta != 0)
			count++;
	}
	
	if (count > 0)
		printf("	KO!");
	else 
		printf("	OK!");

	printf("\n\n\n");
	return (1);
}

int ft_isdigit_test(int num_test)
{
	char str[] = {'0','1','B','9','&'};
	int i;
	int count;
	int delta;

	printf("Test %d for isdigit \n", num_test);	

	i = -1;
	count = 0;
	while (++i < 5)
	{
	delta =  isdigit(str[i]) - ft_isdigit(str[i]);
		printf("	%c  -> %d\n", str[i], ft_isdigit(str[i]));
		if (delta != 0)
			count++;
	}
	
	if (count > 0)
		printf("	KO!");
	else 
		printf("	OK!");

	printf("\n\n\n");
	return (1);
}

void ft_memset_test(int num_test)  // 07 
{	
	int numbers[5];
	int c;

	printf("START Test %d - memset\n\n", num_test);
	c = 1;
    memset(numbers, c, sizeof(numbers));
	printf("	sizeof(numbers)=%lu\n", sizeof(numbers));
	printf("	unsigned char of 1=%d\n", (unsigned char)c);
    printf("	Initialized array of integers: ");
    for (int i = 0; i < 5; ++i) {
        printf("	%d ", numbers[i]);
    }
    printf("\n");

	c=0;
    ft_memset(numbers, c, sizeof(numbers) - 5);
    for (int i = 0; i < 5; ++i) {
        printf("	%d ", numbers[i]);
    }
    printf("\n");

	printf("End of test %d\n\n",num_test);
    return ;

}

void ft_bzero_test(int num_test)  // 08	
{	
	int numbers[5];
	int numbers_test[5];
	int c;

	printf("START Test %d - bzero\n\n", num_test);
	c = 1;
    memset(numbers, c, sizeof(numbers));
    memset(numbers_test, c, sizeof(numbers_test));
	printf("	sizeof(numbers)=%lu\n", sizeof(numbers));
	printf("	unsigned char of 1=%d\n", (unsigned char)c);
    printf("	Initialized array of integers: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    ft_bzero(numbers_test, sizeof(numbers_test) -5);
    bzero(numbers, sizeof(numbers) -5);
    for (int i = 0; i < 5; ++i) {
        printf("	%d vs %d \n", numbers[i],numbers_test[i]);
    }
    printf("\n");

	printf("End of test %d\n\n",num_test);
    return ;
}

void	ft_memcpy_test(int num_test)  // 09	
{	
	int numbers_dst[5];
	int numbers_dst_org[5];
	int numbers_src[5];
	int c;

	printf("START Test %d - memcpy\n\n", num_test);
	c = 0;
    memset(numbers_src, c + 1, sizeof(numbers_src));
    memset(numbers_dst, c + 0, sizeof(numbers_dst));
    memset(numbers_dst_org, c + 0, sizeof(numbers_dst));
	printf("	sizeof(numbers_src)=%lu\n", sizeof(numbers_src));
	printf("	c = %d, unsigned char of c=%d\n", c,  (unsigned char)c);
	printf("	c + 1 = %d, unsigned char of c + 1=%d\n", c + 1,  (unsigned char)(c + 1));

    ft_memcpy(numbers_dst, numbers_src, sizeof(numbers_src) - 5);
    memcpy(numbers_dst_org, numbers_src, sizeof(numbers_src) - 5);
    for (int i = 0; i < 5; ++i) {
        printf("	%d vs %d \n", numbers_dst[i],numbers_dst_org[i]);
    }
    printf("\n");

	printf("End of test %d\n\n",num_test);
    return ;
}

void	ft_memmove_test(int num_test)  // 09	
{	
	int numbers_dst[5];
	int numbers_dst_org[5];
	int numbers_src[5];
	int c;

	printf("START Test %d - memmove\n\n", num_test);
	c = 0;
    memset(numbers_src, c + 1, sizeof(numbers_src));
    memset(numbers_dst, c + 0, sizeof(numbers_dst));
    memset(numbers_dst_org, c + 0, sizeof(numbers_dst));
	printf("	sizeof(numbers_src)=%lu\n", sizeof(numbers_src));
	printf("	c = %d, unsigned char of c=%d\n", c,  (unsigned char)c);
	printf("	c + 1 = %d, unsigned char of c + 1=%d\n", c + 1,  (unsigned char)(c + 1));

    ft_memmove(numbers_dst, numbers_src, sizeof(numbers_src) - 5);
    memmove(numbers_dst_org, numbers_src, sizeof(numbers_src) - 5);
    for (int i = 0; i < 5; ++i) {
        printf("	%d vs %d \n", numbers_dst[i],numbers_dst_org[i]);
    }
    printf("\n");

	printf("End of test %d\n\n",num_test);
    return ;
}

void ft_atoi_test(int num_test) // 21
{
	
	printf("START Test %d - atoi\n\n", num_test);
	printf("%d\n", atoi("++548"));
	printf("%d\n", ft_atoi("++548"));
}
	
void ft_substr_test(int num_test)  //24
{
	char *pnt;

	pnt = ft_substr("Hello", 0, 5);
	printf("%s:lenth=%zu\n", pnt, ft_strlen(pnt));
	write(1, pnt, 5);
}


void ft_itoa_test(int num_test)       //28
{
	char *s;
	int i = -123;

	s = ft_itoa(i);
	printf("%s\n",s);
}


