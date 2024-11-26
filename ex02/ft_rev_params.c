#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc - 1; //inizia da ultimo argomento
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{	write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--; //vai a leggere ogni argomento da destra a sinistra(dal più recente al più vecchio
	}
	return(0);
}
