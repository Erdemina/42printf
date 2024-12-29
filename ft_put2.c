#include "ft_printf.h"

void	ft_putuhex(unsigned int n, int *result)
{
	char	*a;

	a = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_putuhex(n / 16, result);
		ft_putuhex(n % 16, result);
	}
	else
	{
		ft_putchar(a[n], result);
	}
}

void	ft_putptr(unsigned long n, int *result)
{

	if(!n)
	{
		ft_putstr("(nil)",result);
		return;
	}
	ft_putstr("0x",result);
	ft_puthexptr(n,result);
}

void ft_puthexptr(unsigned long n, int *result)
{
	char	*a;

	a = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthexptr(n / 16, result);
		ft_puthexptr(n % 16, result);
	}
	else
	{
		ft_putchar(a[n], result);
	}
}