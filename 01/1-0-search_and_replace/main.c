#include <unistd.h>        

// # main(argc = 4, argv="ola", a, r)
// # se argc != 4      only /n
// # se 'a' nao esta em 'ola' mostra a string + \n
int main(int argc, char **argv)
{
    if (argc != 4) {
        write(1, "\n", 1);
        return 0;
    }

    // Checar se são caracteres
    if (argv[2][1] != '\0' || argv[3][1] != '\0') {
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    while (argv[1][i] != '\0') {
        if (argv[1][i] == *argv[2])
            argv[1][i] = *argv[3];
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}