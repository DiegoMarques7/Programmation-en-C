#include <stdio.h>
int main()
{
    printf("La taille d'un char est : %ld\n", sizeof(char));
    printf("La taille d'un unsigned char est : %ld\n", sizeof(unsigned char));
    printf("La taille d'un short est : %ld\n", sizeof(short));
    printf("La taille d'un unsigned short est : %ld\n", sizeof(unsigned short));
    printf("La taille d'un int est : %ld\n", sizeof(int));
    printf("La taille d'un unsigned int est : %ld\n", sizeof(unsigned int));
    printf("La taille d'un long int est : %ld\n", sizeof(long int));
    printf("La taille d'un unsigned long int est : %ld\n", sizeof(unsigned long int));
    printf("La taille d'un long long int est : %ld\n", sizeof(long long int));
    printf("La taille d'un unsigned long long int est : %ld\n", sizeof(unsigned long long int));
    printf("La taille d'un float est : %ld\n", sizeof(float));
    printf("La taille d'un double est : %ld\n", sizeof(double));
    printf("La taille d'un long double est : %ld\n", sizeof(long double));

    return 0;
}
