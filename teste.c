// #include <stdio.h>

// int main()
// {
//     float a,b,c;
//     printf("Digite três números: ");
//     scanf("%f",&a);
//     scanf("%f",&b);
//     scanf("%f",&c);
//     if( a > b){
//         if(a>c){
//             if(b>c){
//                 printf("%f < %f < %f",c,b,a);
//             }
//             else{
//                  printf("%f < %f < %f",b,c,a);
//             }
//         }
//         else{
//              printf("%f < %f < %f",b,a,c);
//         }
//     }
//     else{
//         if(b>c){
//             if(c>a){
//                  printf("%f < %f < %f",a,c,b);
//             }
//             else{
//                  printf("%f < %f < %f",c,a,b);
//             }
//         }
//         else{
//              printf("%f < %f < %f",a,b,c);
//         }
//     }
   
//     system("pause");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float quantidade,valor;
//     printf("Digite a quantidade consumida: \n");
//     scanf("%f",&quantidade);
//     if(quantidade<=50){
//         valor=quantidade;
//     }
//     else{
//         if(quantidade<=100){
//             valor= 50+(quantidade-50)*1.3;
//         }
//         else{
//             if(quantidade<=150){
//                 valor=115+(quantidade-100) * 1.6;
//             }
//             else{
//                 valor=195 + (quantidade-150)*2;
//             }

//         }
//     }
//     printf("O valor total consumido é igual a %f",valor);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     float a,b,c,d,e;
//     float maior,menor;
//     printf("Digite cinco numeros: ");
//     scanf("%f",&a);
//     scanf("%f",&b);
//     scanf("%f",&c);
//     scanf("%f",&d);
//     scanf("%f",&e);
//     maior=a;
//     menor=a;
//     if(menor>b){
//         menor=b;
//     }
//     if(maior<b){
//         maior=b;
//     }
//     if(menor>c){
//         menor=c;
//     }
//     if(maior<c){
//         maior=c;
//     }
//     if(menor>d){
//         menor=d;
//     }
//     if(maior<d){
//         maior=d;
//     }
//     if(menor>e){
//         menor=e;
//     }
//     if(maior<e){
//         maior=e;
//     }
//     printf("O maior eh %f",maior);
//     printf("O menor eh %f",menor);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a,b,c;
//     printf("Digite tres numeros diferentes:\n");
//     scanf("%i",&a);
//     scanf("%i",&b);
//     scanf("%i",&c);
//     if(a != b && b!=c && a!=c){
//         if(a>b && a>c){
//             printf("O maior eh o \n %i \n",a);
//         }
//         else{
//             if(b>a && b>c){
//                 printf("O maior eh o \n %i \n",b);
//             }
//             else{
//                 printf("O maior eh o \n %i \n",c);
//             }
//         }
        
//     }
//     else{
//         printf("Os numeros sao iguais e invalidos.");
//     }
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     float peso,altura;
//     printf("Digite seu peso\n");
//     scanf("%f",&peso);
//     scanf("%f",&altura);
//     float imc=peso/(altura*altura);
//     if(imc < 18.5){
//         printf("Desnutricao");

//     }
//     else{
//         if(imc< 25){
//             printf("peso normal");

//         }
//         else{
//             if(imc < 30){
//                 printf("sobrepeso");

//             }
//             else{
//                 if(imc<40){
//                     printf("obesidade");
//                 }
//                 else{
//                     printf("obesidade morbida");
//                 }
//             }
//         }
//     }
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int option;
//     printf("Digite uma opcao:\n");
//     scanf("%i",&option);
//     switch(option){
//         case 1:
//             printf("Nao perecivel");
//             break;
//         case 2:
//         case 3:
//         case 4:
//             printf("perecivel");
//             break;
        
//         case 5:
//         case 6:
//             printf("vest");
//             break;
//         case 7:
//             printf("higiene pessoal");
//             break;
//         case 8:
//         case 9:
//         case 10:
//         case 11:
//         case 12:
//         case 13:
//             printf("limpeza e utensilio");

//             break;
//         default:
//             printf("Invalido");
//             break;
//     }
//     system("pause");
//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int tipo;
//     float dist,cons_medio,quantidade_combustivel,valor;
//     printf("Digite um combustivel:\n 1-Gasolina 2-Alcool 3-Diesel\n");
//     scanf("%i",&tipo);
//     if( tipo != 1 && tipo !=2 && tipo !=3){
//         printf("\nTipo invalido");
//     }else{
//         printf("Digite o rendimento km/L :\n");
//         scanf("%f",&cons_medio);
//         printf("Digite a distancia que voce ira viajar:\n");
//         scanf("%f",&dist);
//         quantidade_combustivel=dist/cons_medio;
//         if(tipo == 1){
//             valor=quantidade_combustivel * 4.79;
//         }else{
//             if(tipo == 2){
//                  valor=quantidade_combustivel * 2.68;

//             }
//             else{
//                 valor=quantidade_combustivel * 2.64;
//             }
//         }
//     }
//     system("pause");
//     return 0;
// }
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float delta,x1,x2;

    printf("Digite tres valores inteiros de uma equacao do segundo grau:\n:ax² +bx +c\n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);
    delta=(b*b) - 4 * a * c;
    if(delta >= 0){
        x1=(-b + sqrt(delta))/2*a;
        x2=(-b - sqrt(delta))/2*a;
        printf("A equacao tem as raizes reais %.2f %.2f",x1,x2);

    }
    else{
        printf("A equacao nao tem raizes reais");
    }
    system("pause");
    return 0;
}