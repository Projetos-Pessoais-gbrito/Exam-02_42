#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void pgcd(char **argv)
{
    int first_argv = atoi(argv[1]);
    int second_argv = atoi(argv[2]);
    int rest;
    int higher_num;
    int lower_num;

    rest = 0;
    higher_num = 0;
    lower_num = 0;
    
    if (first_argv > second_argv)
    {
        higher_num = first_argv;
        lower_num = second_argv;
    }
    else
    {
        higher_num = second_argv;
        lower_num = first_argv;
    }
    while(1)
    {
        rest = higher_num % lower_num;
        if (rest == 0)
        {   
            printf("%d", lower_num);
            break;
        }
        higher_num = lower_num;
        lower_num = rest;
    }
}

int main(int argc, char **argv)
{
    if(argc != 3)
    {
        printf("\n");
        return (0);
    }
    pgcd(argv);
    printf("\n");
    return (0);
}
