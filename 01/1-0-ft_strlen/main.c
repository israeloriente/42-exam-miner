#include <stdio.h>        

int	ft_strlen(char *str)
{
    int i = 0;
    while(*(str + i) != '\0')
        i++;
    return i;
}

int main()
{
    char s1[] = "israel";
    printf("%d\n", ft_strlen(s1));
    return (0);
}