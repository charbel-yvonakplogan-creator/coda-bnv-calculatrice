#include <stdlib.h>
#include <stdio.h>

int main(){
    char symbol;
    int x;
    int y;
    double division;
    int resultat;

    printf("Bonjour cher utilisateur-ice.\n");

    printf("Choisissez un opérateur : +, -, *, /, %%,  : \n");
    scanf(" %c" , &symbol);

    printf("Veuillez choisir un premier nombre : \n");
    scanf("%d", &x);

    printf("Veuillez choisir un second nombre : \n");
    scanf("%d" , &y);

    if(symbol == '+')

    {
        printf("%d + %d = %d\n", x, y, x + y);
        resultat = x + y;
    }
    else if(symbol == '-')

    {
        printf("%d - %d = %d\n", x, y, x - y);
        resultat = x - y;
    }
    else if(symbol == '*')
    
    {
        printf("%d * %d = %d\n", x, y, x * y);
        resultat = x * y;
    }
    else if(symbol == '/')
{
        if (y == 0 ){
            printf("Erreur: Il est impossible de diviser par zéro.\n");
            exit(1);
        }
        division = (double)x / (double)y;
        printf("%d / %d = %.2f\n", x, y , division);
        double resultat = x / y;    
    }
    else if(symbol == '%'){
        if (y == 0){
            printf("Erreur: Il est impossible de diviser par zéro.\n");
            exit(1);
        }  
    
            printf("%d %% %d = %d\n", x, y, x % y);
        resultat = x % y;
 }
        
    else{
        printf("Le symbole  %c  n'est pas reconnu\n", symbol);
 }


exit(0);

}