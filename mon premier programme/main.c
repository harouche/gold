#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
   char prenom[20], email[20];
    int age;
    printf("entrez votve prenom : ");
    scanf ("%s" ,prenom);
    printf("entez votre email :" );
    scanf ("%s" ,email);
    char sexe[20] ;
    printf("donner moi votre sexe");
    scanf ("%s" ,sexe);
    printf ("enter votre age : ");
    scanf ("%d" ,&age);
    return 0;
}

