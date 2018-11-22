#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp2.h"

char *get_first_arg(int argc, char *argv[])
{
    if (argc <2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

int main(int argc, char *argv[])
{
    char *arg = get_first_arg(argc, argv); 

    int NxtUp = 0;

    printf("chaine: %s\n", arg);

    //printf("chaine maj : %s\n",upper(arg));

    for(int i = 0; i < strlen(arg); i++)
    {
	if(arg[i] == ' ')
        {
            printf("\n");
            NxtUp = 1;
        }
        else
        {
            if ((NxtUp)&&(arg[i] < 97))
            {
                printf("%c", arg[i] - 32);
            }
            else
            {
                printf("%c",arg[i]);
            }
        }



    }

    return 0;
}




