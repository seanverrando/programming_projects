// a program that converts the ASCII character to the ASCII decimal
// takes user arguments 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//forward declaration
void print_letters(char arg[], int arglength);

void print_argument(int argc, char *argv[])
{
    int i = 0;
    int length  = 0;

    for(i = 1; i < argc; i++)
    {
        length = strlen(argv[i]);

        print_letters(argv[i], length);
    }
}

void print_letters(char arg[], int arglength)
{
    int i = 0;

    for(i = 0; i <= arglength; i++){
        char ch = arg[i];

        if(isalpha(ch) || isblank(ch)){
            printf("%c == %d\n", ch, ch);
        }
    }
}

int main(int argc, char *argv[])
{
    print_argument(argc, argv);
    return 0;
}