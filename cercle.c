#include <stdio.h>
int main()
{
   float rayon, perimetre, aire;
 
   printf("Veuillez entrer le périmètre du cercle :\n");
   scanf("%f", &rayon);
   float pi = 3.14;
   aire = pi * rayon * rayon;
   printf("Aire du cercle : %f\n", aire);
   
   perimetre = 2 * pi * rayon;
   printf("Perimetre du cercle: %f\n", perimetre);
   return (0);
}
