#include <stdio.h>
int main()
{   char c_var = 'a';
    unsigned char uc_var = 2;
    short s_var = -325;
    unsigned short us_var = 65479;
    int i_var = -65;
    unsigned int ui_var = 3187;
    long int li_var = -6655;
    unsigned long int uli_var = 387;
    long long int lli_var = -58765748LL;
    unsigned long long int ulli_var = 5476354ULL;
    float f_var = 3.14;
    double d_var = 3.14E-8;
    long double ld_var= 3.146452;


    printf("La valeur de la variable char est : %c\n", c_var);
    printf("La valeur de la variable unsigned char est : %hhu\n", uc_var);
    printf("La valeur de la variable short est : %hd\n", s_var);
    printf("La valeur de la variable unsigned short est : %hu\n", us_var);
    printf("La valeur de la variable int est : %d\n", i_var);
    printf("La valeur de la variable unsigned int est : %d\n", ui_var);
    printf("La valeur de la variable long int est : %ld\n",li_var );
    printf("La valeur de la variable unsigned long int est : %ld\n", uli_var);
    printf("La valeur de la variable long long int est : %lld\n", lli_var);
    printf("La valeur de la variable unsigned long long int est : %lld\n", ulli_var);
    printf("La valeur de la variable float est : %f\n",f_var);
    printf("La valeur de la variable double est : %f\n", d_var);
    printf("La valeur de la variable long double est : %Lf\n",ld_var);

    return 0;
}
