
#include <stdio.h>
#include <stdlib.h>

/*
    function prototypes
*/ 


int parse_command_line(int argc, char *argv[], char *parms[]);

int main (int argc, char *argv[])
{
    char **localparms = malloc(argc);
    int x = parse_command_line(argc, argv, localparms);
    free(localparms);
}

/*
    This function parses the command line using the 'main' input variables and
    the addition 'parms' parameter. The argv parameters will be set into the
    **parms variable.
    Return : 0 if parms exists, -1 otherwise
*/
int parse_command_line(int argc, char *argv[], char **parms)
{
    int i;
    for (i = 1; i < argc; i++) {
        parms[i-1] = argv[i];
    }
    return sizeof(parms) ? 0 : -1;
}

