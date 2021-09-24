#include <stdio.h>  

int main(){
  
  int tab[42], nbr, i;  
  
  printf("Entrez le nombre a convertir: ");  
  scanf("%d",&nbr);  
  
  if (nbr == 0) {
	  printf("\nLe nombre binaire est = 0\n");
          
  }
  else {
	  for(i=0; nbr > 0; i++)  
	  {  
	    tab[i] = nbr%2;  
	    nbr = nbr/2;  
	  } 
	  
	  printf("\nLe nombre binaire est = ");
	  
	  for(i=i-1; i >= 0; i--)  
	  {  
	    printf("%d",tab[i]);
	 
	  }  
	  printf("\n");
  }
  return 0;
}
