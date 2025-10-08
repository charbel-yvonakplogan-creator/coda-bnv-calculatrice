#include <stdlib.h>
#include <stdio.h>

int main(){
    char symbol;
    int x;
    int y;
    double division;

    printf("Bonjour cher utilisateur-ice.\n");

    printf("Choisissez un opérateur : +, -, *, /, %%,  : \n");
    scanf("%c" , &symbol);

    printf("Veuillez choisir un premier nombre : \n");
    scanf("%d", &x);

    printf("Veuillez choisir un second nombre : \n");
    scanf("%d" , &y);

    if(symbol == '+')

    {
        printf("%d + %d = %d\n", x, y, x + y);
    }
    else if(symbol == '-')

    {
        printf("%d - %d = %d\n", x, y, x - y);
    }
    else if(symbol == '*')
    
    {
        printf("%d * %d = %d\n", x, y, x * y);
    }
    else if(symbol == '/')
{
        division = (double)x / (double)y;
        printf("%d / %d = %.2f\n", x, y , division);
}
    else if(symbol == '%'){
        printf("%d %% %d = %d\n", x, y, x % y);
 }

    else{
        printf("Le symbole %c n'est pas reconnu\n", symbol);
 }


exit(0);

}