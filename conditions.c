#include <stdio.h> 
int main (){
     int compteur;
     for (compteur=1; compteur < 1001; compteur ++){
         if (compteur%2==0 && compteur%15==0){;
         
         printf ("Un multiple de 2 et de 15 est : %d\n", compteur) ;
}
}
     int compteur2;
     for (compteur2=1; compteur2 < 1001; compteur2 ++){
         if (compteur2%103==0 || compteur2%107==0){;
         
         printf ("Un multiple de 103 ou de 107 est : %d\n", compteur2) ;
  
}
}
      int compteur3;
      for (compteur3=1; compteur3 < 1001; compteur3 ++){
         
         if (compteur3%5==0 || compteur3%7==0){;
         	if (compteur3%3!=0){;
         		printf ("Un multiple de 5 ou de 7 mais pas de 3 est : %d\n", compteur3) ;
}  
}
}


     return 0;

}
