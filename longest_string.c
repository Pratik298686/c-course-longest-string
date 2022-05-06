#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *maxilen = "\n";

    for (int i = 1; i < argc; i++)
    {
        if (strlen(argv[i]) > strlen(maxilen))
        {
            maxilen = argv[i];
        }
    }
    puts(maxilen);
    return EXIT_SUCCESS;
}
