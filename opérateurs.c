#include <stdio.h>
int main()
{
    int a = 16, b=3, somme, difference, produit, quotient, reste, negation, et, ou;
    somme = a + b;
    printf("a+b = %d \n",somme);
    difference = a-b;
    printf("a-b = %d \n",difference);
    produit = a * b;
    printf("a*b = %d \n",produit);
    quotient = a / b;
    printf("a/b = %d \n",quotient);
    reste = a % b;
    printf("reste = %d \n",reste);
    negation = !a;
    printf("!a = %d \n",negation);
    et = a && b;
    printf("a&&b = %d \n",et);
    ou = a || b;
    printf("a||b = %d \n",ou);

    return 0;
}
