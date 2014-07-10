#include <stdio.h>
int main(){
    int edad;
    printf("¿Cual es tu edad?: ");
    scanf("%d",&edad);
    if (edad>=18){
        printf("Eres mayor de edad puedes votar \n");
}
    else if (edad<18 && edad>0){
     printf("Eres menor de edad NO puedes votar \n");
}
}
