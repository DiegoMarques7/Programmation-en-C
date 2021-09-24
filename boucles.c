#include <stdio.h>

int main (){
	int compter;
	printf("donner la taille du sapin :\n");
	scanf("%i", &compter);
	while (compter < 4){
		printf("donner la taille du sapin (sup à 4) :\n");
		scanf("%i", &compter);}


	for (int sapin = 0; sapin < compter; sapin++){
		for (int etoile = 0; etoile != sapin+1; etoile++){
			if (etoile ==0 || etoile == sapin || sapin == compter-1){
				printf("*");}
			else {
				printf("#");}
		}
		printf("\n");
	}
	return 0;
}
