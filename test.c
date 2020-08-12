#include "libft.h"

int main()
{
	int i;

	ft_putstr("Hello world!!!");
	ft_putchar('\n');
	ft_putstr("My programmer gave me a skill to count to ten!\n");
	i = 0;
	while (i < 10)
	{
		ft_putnbr(i);
		ft_putchar('\n');
		i++;
	}
	ft_putstr("Oh, wait, it`s nine...\n");
	ft_putstr("Ummmm...Nah, that`s fine\n");
}
