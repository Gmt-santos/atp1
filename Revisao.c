
// #define limite 5
// int main(){
//   int qtde=0,opt,n;
//   int inicio=0,fim=0;
//   int M[limite];
  

//   do{
//     printf("%d",qtde);
//       printf("\nDigite as opcoes \n 1-Adicionar 2-Remover 3-Mostrar o primeiro 4-Pra mostrar tudo 0-Sair\n");
//       scanf("%d",&opt);
//       if(opt==1){
//         if(qtde!=limite){
//             printf("\nDigite o numero que quer adicionar:\n");
//             scanf("%d",&n);
//             M[fim]=n;
//             fim=(fim+1)%limite;
//             qtde++;
//         }else{
//           printf("\n Fila Cheia \n");
//         }
//       }else if(opt == 2){
//         if(qtde == 0){
//             printf("\n  Fila Vazia \n");
//         }else{
//             printf("\nRemovendo...");
//             inicio=(inicio+1)%limite;
//             qtde--;
//         }
        
//       }else if(opt == 3){
//         if(qtde!=0){
//           printf("\nO primeiro da fila eh o %d\n",M[inicio]);
//         }
        
//       }else if(opt ==4){
//         for(int pos=inicio;pos!=fim;pos=(pos+1)%limite){
//           printf("Posicao %d item %d",pos,M[pos]);

//         }
//       }

//   }while(opt!=0);
//   system("pause");
//    return 0;
// }
// int main(){
//   int indice=0;
//   int codigo[10],opt;
//   char nome[10][255];

//   int n;
//   float varsal,salbase[10],salreaj[10],totalsalbase=0,totalsalreaj=0;

//   do{
//     printf("Quer registrar mais funcionarios??? 1-SIM 0-NAO\n");
//     scanf("%d",&opt);
//     if(opt ==1){
//       printf("Digite o codigo do funcionario\n");
//       scanf("%d",&n);
//       codigo[indice]=n;
//       printf("Digite o nome do funcionario\n");
//       scanf("%s",nome[indice]);
//        printf("Digite o salario do funcionario\n");
//       scanf("%f",&varsal);
//       salbase[indice]=varsal;
//       totalsalbase+=varsal;
//       if(varsal<500){
//         salreaj[indice]=varsal*1.15;
//         totalsalreaj+=salreaj[indice];
//       }else if(varsal<=1000){
//         salreaj[indice]=varsal*1.1;
//          totalsalreaj+=salreaj[indice];
//       }else{
//         salreaj[indice]=varsal*1.05;
//          totalsalreaj+=salreaj[indice];
//       }
//       printf("\n \t \t------------------------------------Processando------------------------------------\n");
//       indice++;
//     }
//   }while(opt!=0);
//    printf("\n----------------------------------------------------------------\n");
//   printf("\t Lista de salarios dos funcionarios da Empresa AB");
//   printf("\n----------------------------------------------------------------\n");
//   printf("\t Codigo \t Nome \t \t Sal.Base \t Sal.Reajustado ");
//   printf("\n----------------------------------------------------------------\n");
//   for(int i=0;i<indice;i++){
//     printf("\t %d",codigo[i]);
//     printf("\t \t %s",nome[i]);
//     printf("\t \t %.2f",salbase[i]);
//     printf("\t \t %.2f\n",salreaj[i]);
//   }
//    printf("\n----------------------------------------------------------------\n");
//   printf("\t \t \t Total \t \t %.2f \t  %.2f\n",totalsalbase,totalsalreaj);
//   system("pause");
//   return 0;
// }
// int main(){
//   int v[11],indice,n,aux;
//   srand(time(NULL));
//   for(int i=0;i<10;i++){
//     v[i]=rand()%100;
//   }

//   printf("\nDigite agora um indice entre 0 e 9\n");
//   scanf("%d",&indice);
//   printf("\n Agora um valor\n");
//   scanf("%d",&n);
//   for(int i=0;i<11;i++){
//     printf("%d----> %d\n",i,v[i]);
//   }
//   for(int i=10;i>indice;i--){
//    aux=v[i];
//    v[i]=v[i-1];
//    v[i-1]=aux;
//   }
//   v[indice]=n;
//   for(int i=0;i<11;i++){
//     printf("%d----> %d\n",i,v[i]);
//   }
//   system("pause");
//   return 0;
// }

// // FIBONACCI //
// int main(){
//   int anterior=0,atual=1,aux;
//   int fib[15];
//   for(int i=0;i<15;i++){
//     fib[i]=anterior;
//     aux=atual;
//     atual=atual+anterior;
//     anterior=aux;
//   }
//   for(int i=0;i<15;i++){
//     printf("%d \n",fib[i]);
//   }
//   system("pause");
//   return 0;
// }
// #include <stdio.h>
// #include <string.h>
// int main(){ 
//   int fim;
//   char str1[40];
//   char str2[40];
//   char strreserva[80];
//   printf("Digite uma palavra\n");
//   scanf("%s",str1);
//   printf("Digite outra palavra\n");
//   scanf(" %s",str2);
//   //strcat
//   for(int i=0;str1[i]!='\0';i++){
//     fim=i+1;
//   }
//   for(int i=fim;str2[i-fim]!='\0';i++){
//     str1[i]=str2[i-fim];
//     if(str2[i-fim+1]== '\0'){
//       str1[i+1]='\0';

//     }
//   }
//   printf("\nSTRCAT STR 1/STR 2\n");
//   for(int i=0;str1[i]!='\0';i++){
    
//     printf("%c",str1[i]);
//   }
//   //strcpy
//   printf("\nSTRCPY STR 1/STR 2 \n");
//   for(int i=0;str2[i]!='\0';i++){
//     str1[i]=str2[i];
//     if(str2[i+1]=='\0'){
//       str1[i+1]='\0';
//     }
//   }
  
//   for(int i=0;str1[i]!='\0';i++){
//     printf("%c",str1[i]);
    
//   }

//   //strlen
//   int t=0;
//   for(int i=0;str1[i]!='\0';i++){
//     t++;
//   }
//   printf("\nSTRLEN STR 1 \n");
//   printf("%d",t);
//   system("pause");
//   return 0;
// }
// int main(){
//   char palavra[200];
//   int i,j,tamanho=0;
//   int palindromo=1;
//   printf("Digite uma palavra:\n");
//   scanf("%s",palavra);
//   for(j=0;palavra[j]!='\0';j++){
//     tamanho+=1;
//   }
//   j=tamanho-1;
//   for(i=0;i<tamanho && palindromo == 1;i++){
//     printf("\ni %d j %d",i,j);
//     if(palavra[j]!=palavra[i]){
//       palindromo=0;
//       printf("Mudei");

//     }
//     j--;

//   }
//   if(palindromo == 1){
//     printf("EH PALINDROMO");

//   }else{
//     printf("Nao eh palindromo");
//   }
//   system("pause");
//   return 0;
// }

  // int main(){
  //   char str1[5][60],str2[5][60],str3[10][60];
  //   for(int i=0;i<5;i++){
  //     printf("Digite um nome\n");
  //     scanf(" %s",str1[i]);
  //   }
  //   for(int i=0;i<5;i++){
  //     printf("Digite um nome\n");
  //     scanf(" %s",str2[i]);
  //   }
  //   for(int i=0;i<5;i++){
  //     for(int j=0;str1[i][j]!='\0';j++){
  //       str3[i][j]=str1[i][j];
  //       if(str1[i][j+1]=='\0'){
  //         str3[i][j+1]='\0';
  //       }
  //     }
  //   }
  //   for(int i=5;i<10;i++){
  //     for(int j=0;str2[i][j]!='\0';j++){
  //       str3[i][j]=str2[i-5][j];
  //       if(str2[i][j+1]=='\0'){
  //         str3[i][j+1]='\0';
  //       }
  //     }
  //   }
    
  //   printf("STR1\n");
  //   for(int i=0;i<5;i++){
  //     printf(" %s\n",str1[i]);
  //   }
  //   printf("STR2\n");
  //   for(int i=0;i<5;i++){
  //     printf(" %s\n",str2[i]);
  //   }
  //   printf("STR3\n");
  //   for(int i=0;i<10;i++){
  //     printf(" %s\n",str3[i]);
  //   }

  //   system("pause");
  //   return 0;
  // }
  
//     
// #include <stdio.h>
// int main(){
//   int v[10],primeiro=0,ultimo=0,entrada,opt,contador=0,pos;
//   do{
//     printf("\n-----------------------------------------------------\n");
//     printf("                 1-ADD 2-DEL 3-QUERY 4-OUT               ");
//     printf("\n-----------------------------------------------------\n");
//     scanf("%d",&opt);
//     if(opt == 1){
//       if(contador == 10){
//         printf("\n Fila cheia \n");
//       }else{
//         printf("Digite a entrada \n");
//         scanf("%d",&entrada);
//         v[ultimo]=entrada;
//         contador++;

//         if(ultimo+1>9){

//           ultimo=0;

//         }else{

//           ultimo++;

//         }
//       }
//     }
//     else if(opt == 2){

//       if(contador == 0){

//         printf("\n Fila Vazia \n");

//       }else{

//         printf("Excluindo...\n");
//         contador--;

//         if(primeiro+1>9){

//           primeiro=0;

//         }
//         else{

//           primeiro++;

//         }

//       }

//     }else if(opt == 3){
//         pos=primeiro;
//         for(int i=0;i<contador;i++){
//           printf("%d \n",v[(pos+i)%10]);
//         }

//     }
//   }while(opt !=0);
  
//   return 0;
// }

//                    gcc Revisao.c -o Revisao.exe;.\Revisao.exe
// #include <stdio.h>
// int main(){
//   int min[26],maiu[26];
//   char string[100];
//   int asciichar;
//   for(int i=0;i<26;i++){
//     min[i]=maiu[i]=0;
//   }
//   printf("Digite uma palavra\n");
//   fgets(string,100,stdin);
//   for(int c = 0;string[c]!='\0';c++){
//     asciichar=(int)string[c];
//     if(asciichar>=65 && asciichar<=90){
//       maiu[asciichar-65]+=1;
//     }else if(asciichar>=97 && asciichar <=122){
//       min[asciichar-97]+=1;
//     }
//   }
//   for(int i=0;i<26;i++){
//     if(min[i] !=0){
//       printf("%c %d \n",65+i,min[i]);
//     }
//   }
//   for(int i=0;i<26;i++){
//     if(maiu[i] !=0){
//       printf("%c %d \n",65+i,maiu[i]);
//     }
//   }
//   return 0;
// }
// #include <stdio.h>

// int main(){
//   int entrada,palindromo=0,reserva;
//   printf("Digite um numero\n");
//   scanf("%d",&entrada);
//   reserva=entrada;
//   for(int i=0;entrada!=0;i++){
//     palindromo*=10;
//     palindromo+=entrada%10;
//     entrada=entrada/10;
//   }
//   if(palindromo==reserva){
//     printf("Eh palindromo");
//   }else{
//     printf("Nn eh palindromo");
//   }

// }

// #include <stdio.h>
// int main(){
//   int fib1[15],fib2[15],fib3[15],fib4[15],fib5[15];
//   int atual=0,proximo=1,aux;
//   for(int i=1;i<=5;i++){
//     switch(i){
//       case 1:
//         for(int j=0;j<15;j++){
//           fib1[j]=atual;
//           aux=proximo;
//           proximo=proximo+atual;
//           atual=aux;

//         }
//         atual=0;
//         proximo=1;
//         break;
//       case 2:
//         for(int j=0;j<15;j++){
//           fib2[j]=atual;
//           aux=proximo;
//           proximo=proximo+atual;
//           atual=aux;

//         }
//         atual=0;
//         proximo=1;
//         break;
//       case 3:
//         for(int j=0;j<15;j++){
//           fib3[j]=atual;
//           aux=proximo;
//           proximo=proximo+atual;
//           atual=aux;

//         }
//         atual=0;
//         proximo=1;
//         break; 
//       case 4:
//         for(int j=0;j<15;j++){
//           fib4[j]=atual;
//           aux=proximo;
//           proximo=proximo+atual;
//           atual=aux;

//         }
//         atual=0;
//         proximo=1;
//         break;
//       case 5:
//         for(int j=0;j<15;j++){
//           fib5[j]=atual;
//           aux=proximo;
//           proximo=proximo+atual;
//           atual=aux;

//         }
//         atual=0;
//         proximo=1;
//         break;
//     }
//   }
//   printf("---------------------FIB1----------------\n");
//   for(int i=0;i<15;i++){
//     printf("%d \n",fib1[i]);
//   }
//   printf("---------------------FIB2----------------\n");
//   for(int i=0;i<15;i++){
//     printf("%d \n",fib2[i]);
//   }
//   printf("---------------------FIB3----------------\n");
//   for(int i=0;i<15;i++){
//     printf("%d \n",fib3[i]);
//   }
//   printf("---------------------FIB4----------------\n");
//   for(int i=0;i<15;i++){
//     printf("%d \n",fib4[i]);
//   }
//   printf("---------------------FIB5----------------\n");
//   for(int i=0;i<15;i++){
//     printf("%d \n",fib5[i]);
//   }
//   return 0;
// }
// #include <stdio.h>
// int main(){
//   int atual=0,depois=1,aux;
//   int fib[15],fibinv[15];
//   for(int i=0;i<15;i++){
//     fib[i]=atual;
//     aux=depois;
//     depois=depois+atual;
//     atual=aux;
//   }
//   depois=fib[14];
//   atual=fib[13];
  
//   for(int i=14;i>-1;i--){
//     fibinv[i]=depois;
//     aux=atual;
//     atual=depois-atual;
//     depois=aux;
    
//   }
//   for(int i=0;i<15;i++){
//     printf("%d \n",fib[i]);
//   }
//   printf("FIBINV");
//   for(int i=0;i<15;i++){
//     printf("%d \n",fibinv[i]);
//   }
//   return 0;
// }