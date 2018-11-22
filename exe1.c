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

    //printf("chaine: %s\n", arg);
    //printf("len = %ld \n", strlen(arg));
    //printf("chaine maj : %s\n",upper(arg));

    for(int i = strlen(arg); i >= 0; i--)
    {
        for(int j = strlen(arg)-1; j >= 1; j--)
	{
	    if( i > j)
            {
                printf("%c", arg[j]);
            }
            else
            {
                printf(" ");
            }
        }

	for(int j = 0; j < strlen(arg); j++)
        {
             if( i >  j)
	     {
                 printf("%c", arg[j]);
             }
	     else
             {
                 printf(" ");
             }
        }

        printf("\n");

    }

    return 0;
}


