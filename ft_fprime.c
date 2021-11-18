#include <stdio.h>
#include <stdlib.h>

//if input is invalid, print newline
//increment i until prime
//when prime is found, check nb % i == 0
//if true, print number, increment "first" variable, check same number again with new result.
//if false, find next prime
//if no primes found, i.e. first still == 0, print the number + newline

int	ft_isprime(int nb)
{
	int	i;

	i = 2;
	if (nb < i)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_fprime(int nb)
{
	int	first;
	int	i;

	first = 0;
	i = 2;
	while ((nb / i) > 1)
	{
		if (nb % i == 0)
		{
			if (ft_isprime(i))
			{
				if (first == 0)
				{
					printf("%d", i);
					first++;
				}
				else
					printf("*%d", i);
				nb = nb / i;
			}
		}
		else
			i++;
	}
	if (first == 0)
		printf("%d", nb);
	else
		printf("*%d", nb);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_fprime(atoi(argv[1]));
	}	
	printf("\n");
	return (0);
}
