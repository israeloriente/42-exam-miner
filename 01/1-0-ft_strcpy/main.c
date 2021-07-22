#include <stdio.h>        
char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while(s2[i]) {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return s1;
}

int main() {
    char s1[] = "israel";
    char s2[] = "Marie";
    printf("%s\n", s1);
    ft_strcpy(s1, s2);
    printf("%s\n", s1);
}