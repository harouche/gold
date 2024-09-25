#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, fh;
    printf("entrez la température en centigrades\n");
    scanf ("&f", &c);

    fh = c + 273.15;

    printf ("la température en kelvim est %f\n", fh);

    return 0;

}
