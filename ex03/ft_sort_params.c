#include <unistd.h>

//USA ALGORITMO BUBBLE SORT

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
		i++;
	return (i);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while(*str1 && *str2 && *str1 == *str2)
	{
		i++;
	}
	return (*str1 - *str2);
}

void swap(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1; //i = 1 perché arg[0] è il nome del programma e non ci interessa ordinarlo
    while (i < argc) //finché non abbiamo considerato tutti gli argomenti.
    {
        j = i + 1; // impostiamo j = i + 1 cosicché verifichi tutti gli argomenti cge vengono dopo 
        while (j < argc)
        {   //se il confronto tra i due argomenti è > 0, significa che argv[i] viene dopo argv[j] in ordine alfabetico, allora fa swap e li invert
            if (ft_strcmp(argv[i], argv[j]) > 0)
            {
                swap(&argv[i], &argv[j]);
            }
            j++;
        }
        i++;
    }
    i = 1;
    while (i < argc)
    {
        write(1, argv[i], ft_strlen(argv[i]));
        write(1, "\n", 1);
        i++;
    }
    return (0);
}

