#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
      printf ("affiche l'�tat de l'eau � cette temp�rature");
      scanf  ("%d",&c);

      if (c < 0)
      printf ("Solide");

      if (c < 100)
      printf ("Liquide");

      if (c >= 100 )
      printf ("gaz");
    return 0;
}
