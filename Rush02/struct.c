#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
typedef struct s_triple
{
    char unit;
    char ten;
    char hundred;
    struct s_triple *next;
} t_triple;

typedef struct dict
{
    char key;
    char value;
    struct dict *next;
} t_dict;

typedef struct s_number
{
    struct s_triple     units[3];
    struct s_triple     thousands[3];
    struct s_triple     millions[3];
    struct s_triple     billions[3];
    struct s_triple     trillion[3];
    struct s_triple     quadrillion[3];
    struct s_triple     quintillion[3];
    struct s_triple     sextillion[3];
    struct s_triple     septillion[3];
    struct s_triple     octillion[3];
    struct s_triple     nonillion[3];
    struct s_triple     decillion[3];
    struct s_triple     undecillion[3];
} t_number;

int     main()
{
    struct s_number input_1;
    ft_strcpy(input_1.units, "jon");
    ft_strcpy(input_1.units, "Science");

    printf("%f", ketya.gpa);

    return 0;
}