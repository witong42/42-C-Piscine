#include <unistd.h>

void	putnb(nb)
{
	if (nb >= 10)
		putnb(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(void)
{
	int	nb;

	nb = 1;
	while (nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (nb % 5 == 0)
			write(1, "buzz\n", 5);
		else if (nb % 3 == 0)
			write(1, "fizz\n", 5);
		else
		{
			putnb(nb);
			write(1, "\n", 1);
		}
		nb++;
	}
}
