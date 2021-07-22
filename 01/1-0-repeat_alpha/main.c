#include <stdio.h>        
#include <unistd.h>        

void putcha(int c) {
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        while(*argv[1]) {
            if (*argv[1] > 96 && *argv[1] < 123)
            {
                int count = *argv[1] - 96;
                while(count > 0)
                {
                    putcha(*argv[1]);
                    count--;
                }
            } else if (*argv[1] > 64 && *argv[1] < 91)
            {
                int count = *argv[1] - 64;
                while(count > 0)
                {
                    putcha(*argv[1]);
                    count--;
                }
            } else {
                putcha(*argv[1]);
            }
            argv[1]++;
        }
    }

    putcha('\n');
    return (0);
}