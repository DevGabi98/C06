#include <unistd.h>

//USA ALGORITMO BUBBLE SORT

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *str1, char *str2)
{
	while(*str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
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

    i = 1;
    while (i < argc)
    {
        j = i + 1; 
        while (j < argc)
        {
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

