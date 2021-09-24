#include <stdio.h>
int main(){
    int num1, num2;
    char op;
    printf("Veuillez entrer la valeur du nombre 1 :\n");
    scanf("%d", &num1);
    printf("Veuillez entrer le type d'opération :\n");
    scanf("%c", &op);
    printf("Veuillez entrer la valeur du nombre 2 :\n");
    scanf("%d", &num2);
    
    switch (op){
      case '+' : printf("La somme entre les 2 numéros donne %u\n", num1+num2);
   	 break;
      case '-' : printf("La difference entre les 2 numéros donne %u\n", num1-num2);
    	break;
      case '*' : printf("Le produit entre les 2 numéros donne %u\n", num1*num2);
    	break;
      case '/': printf("La division entre les 2 numéros donne %u\n", num1/num2);
   	 break;
      case '%' : printf("Le reste de la division entre les 2 numéros donne %u\n", num1%num2);
    	break;
      case '&' : printf("L'opération & entre les 2 numéros donne %u\n", num1&num2);
   	 break;
      case '|' : printf("L'opération | entre les 2 numéros donne %u\n", num1|num2);
   	 break;
    default : printf("Erreur de saisie du caractère dans l'opération");
    }

    return 0;
}
    
