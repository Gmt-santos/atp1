
//              1
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     int qtde=0;
//     int matriz[4][4];
//     srand(time(NULL));
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             matriz[i][j]=rand()%100;
//             printf("%d",matriz[i][j]);
//             if(matriz[i][j]>10){
//                 qtde++;
//             }
//         }
//         printf("\n");
//     }
//     printf("\n A quantidade de numeros maiores que zero eh de\n %d",qtde);
 
// }

//                          2
// #include <stdio.h>
// int main(){
//     int matriz[5][5];
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             if(j==i){
//                 matriz[i][j]=1;
//             }else{
//                 matriz[i][j]=0;
//             }
//             printf(" %d ",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//                  3
// #include <stdio.h>
// int main(){
//     int matriz[4][4];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             matriz[i][j]=(i+1)*(j+1);
//             printf(" %d ",matriz[i][j]);

//         }
//         printf("\n");
//     }
// }

//              4
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     srand(time(NULL));
//     int xmaior=0,ymaior=0,maior;
//     int matriz[4][4];
//     matriz[0][0]=maior=rand()%100;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){   
//             matriz[i][j]=rand()%100;
//             if(matriz[i][j]>maior){
//                 maior=matriz[i][j];
//                 xmaior=i;
//                 ymaior=j;
//             }
//             printf(" %d ",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("O maior numero eh %d e esta na linha %d e coluna %d",maior,xmaior+1,ymaior+1);
//     return 0;
// }

//                  5
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     srand(time(NULL));
//     int valorX,posx,posy;
//     int matriz[5][5];
//     int achado=0;
//     printf("Digite um valor a ser procurado\n");
//     scanf("%d",&valorX);
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             scanf("%d",&matriz[i][j]);
//             printf("  %d  ",matriz[i][j]);
//         }
//         printf("\n");

//     }
//     for(int i=0;i<5 && achado == 0;i++){
//         for(int j=0;j<5;j++){
//             if(matriz[i][j]==valorX){
//                 achado=1;
//                 posx=i;
//                 posy=j;
//             }
//         }
//     }
//     if(achado == 1){
//         printf("Numero encontrado na %d linha e %d coluna",posx+1,posy+1);
//     }else{
//         printf("numero nao encontrado");
//     }
//     return 0;
// }

//              6
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     srand(time(NULL));
//     int A[4][4],B[4][4],C[4][4];
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             A[i][j]=rand()%100;
//             B[i][j]=rand()%100;
//             if(A[i][j]>=B[i][j]){
//                 C[i][j]=A[i][j];

//             }else if(B[i][j]>A[i][j]){
//                 C[i][j]=B[i][j];

//             }
//         }
//     }
//     printf("---------Matriz A---------\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf(" %d ",A[i][j]);
//         }
//         printf("\n");
//     }
//     printf("---------Matriz B---------\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf(" %d ",B[i][j]);
//         }
//         printf("\n");
//     }
//     printf("---------Matriz C---------\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf(" %d ",C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//      7
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
//     srand(time(NULL));
//     int matriz[4][4];
//     printf("Normal\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             matriz[i][j]=(rand()%20)+1;
//             printf(" %d ",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Triangulo inferior\n");
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(j>i){
//                 matriz[i][j]=0;
//             }
//             printf("\t%d\t",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;

// }

//              8
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     int vetornum[100]={0};
//     int bingo[5][5],jasort=0,nsort;
    
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             do{
//                 nsort=rand()%100;
//                 jasort=0;
//                 for(int k=0;k<100;k++){
//                     if(nsort == k && vetornum[k]==0){
//                         vetornum[k]=1;
//                         bingo[i][j]=nsort;
//                     }else if(nsort == k && vetornum[k] == 1 ){
//                         jasort=1;
//                     }
//                 }
//             }while(jasort==1);
//         }
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             printf(" %d ",bingo[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//                  9
// #include <stdio.h>
// #define N 11
// int main(){
//     char notas[5][N];
//     char gabarito[N];
//     int desempenho[5]={0};
//     for(int i=0;i<5;i++){
//         for(int j=0;j<N-1;j++){
//             printf("Digite a nota %d do aluno %d \n",j+1,i+1);
//             scanf(" %c",&notas[i][j]);
//         }
//     }
//     for(int i=0;i<N-1;i++){
//         printf("Digite o gabarito da questao %d\n",i+1);
//         scanf(" %c",&gabarito[i]);
//     }
//     for(int i=0;i<5;i++){
//         for(int j=0;j<N-1;j++){
//             if(notas[i][j]==gabarito[j]){
//                 desempenho[i]++;
//             }
//         }
//     }
//     for(int i=0;i<5;i++){
//         printf("A nota do aluno %d foi de %d",i+1,desempenho[i]);
//     }
//     system("pause");
//     return 0;
// }
//                   10
// #include <stdio.h>
// int main(){
//      int qtdeapro=0;
//     char gabarito[10];
//     int qtdeacertos=0;
//     typedef struct{
//         int matricula;
//         char respostas[10];
//     }aluno;
//     aluno alunos[6];
//     for(int i=0;i<10;i++){
//         printf("Preencha o gabarito da questao %d \n",i+1);
//         scanf(" %c",&gabarito[i]);
//     }
//     for(int i=0;i<6;i++){
//         printf("Digite a matrícula do aluno:\n");
//         scanf("%d",&alunos[i].matricula);
//         for(int j=0;j<10;j++){
//             printf("Digite a nota %d\n");
//             scanf(" %c",&alunos[i].respostas[j]);
//         }
//     }
//     for(int i=0;i<6;i++){
        
//         printf("Matricula:\n%d",alunos[i].matricula);
//         printf("Respostas\n");
//         for(int j=0;j<10;j++){
//             if(alunos[i].respostas[j] == gabarito[j]){
//                 qtdeacertos++;
//             }
//              printf(" %c ",alunos[i].respostas[j]);
//         }
//         printf("\n O aluno acertou %d por cento da prova",(100*qtdeacertos)/10);
        //    if (qtdeacertos>=7){
        //     qtdeapro++;
        //    }

       
//     }
//          printf("A quantidade de aprovados foi de %d",(100*qtdeapro)/10);
    
//}
//                  11
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
//     srand(time(NULL));
//     int A[4][4];
//     int B[4][4];
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             A[i][j]=rand()%20;
//             B[i][j]=rand()%20;
//         }
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf(" %d ",A[i][j]+B[i][j]);

//         }
//         printf("\n");
//     }

// }
//                  13' CÓDIGO MATRIZ!!!!!
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #define N 3
// int main(){
//         srand(time(NULL));
//         int A[N][N],B[N][N];
//         int R[N][N]={0};
        
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++){
//                 A[i][j]=rand()%10;
//             }
//         }
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++){
//                 B[i][j]=rand()%10;
//             }
//         }
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++){
//                 for(int k=N-1;k>-1;k--){
//                     R[j][i]+=A[j][k]*B[k][i];
//                 }
//             }
//         }
//         printf("Matriz A\n");
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++){
//                 printf(" %d ",A[i][j]);
//             }
//             printf("\n");
//         }
//         printf("Matriz B\n");
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++){
//                 printf(" %d ",B[i][j]);
//             }
//             printf("\n");
//         }
//         printf("Matriz R\n");
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++){
//                 printf(" %d ",R[i][j]);
//             }
//             printf("\n");
//         }
// }

//                  14.1
// #include <stdio.h>
// int main(){
//     int cidades[7][7]={
//         {0,2,11,6,15,11,1},
//         {2,0,7,12,4,2,15},
//         {11,7,0,11,8,3,13},
//         {6,12,11,0,10,2,1},
//         {15,4,8,10,0,5,13},
//         {11,2,3,2,5,0,14},
//         {1,15,13,1,13,14,0}
//     };
//     int origem,destino;
//     do{
//         printf("Digite a cidade de origem(0 a 7) para a destino (0 a 7),ou digite o mesmo numero duas vezes para encerrar\n");
//         printf("Origem:\n");
//         scanf("%d",&origem);
//         printf("Destino:\n");
//         scanf("%d",&destino);
//         if(origem == destino){
//             printf("Encerrando...");
//         }else{
//              printf("A distância eh de %d\n",cidades[origem][destino]);
//         }
       
//     }while(origem!=destino);
// }
//              14.2
// #include <stdio.h>
// int main(){
//     int cidades[7][7]={
//         {0,2,11,6,15,11,1},
//         {2,0,7,12,4,2,15},
//         {11,7,0,11,8,3,13},
//         {6,12,11,0,10,2,1},
//         {15,4,8,10,0,5,13},
//         {11,2,3,2,5,0,14},
//         {1,15,13,1,13,14,0}
//     };
    
//     for(int i=0;i<7;i++){
//         for(int j=0;j<7;j++){
//             if(i>j || i<j){
//                 printf("\t%d",cidades[i][j]);
//             }
//             else{
//                 printf("\t ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
//      14.3
// #include <stdio.h>
// int main(){
//         int cidades[7][7]={
//         {0,2,11,6,15,11,1},
//         {2,0,7,12,4,2,15},
//         {11,7,0,11,8,3,13},
//         {6,12,11,0,10,2,1},
//         {15,4,8,10,0,5,13},
//         {11,2,3,2,5,0,14},
//         {1,15,13,1,13,14,0}
//     };
//     int qtdehoras=0,origeminicial,destino,origem;
//         printf("Digite a cidade de origem(0 a 7) para a destino (0 a 7),ou digite o mesmo numero duas vezes para encerrar\n");
//         printf("Horas parciais %d \n",qtdehoras);
//         printf("Origem:\n");
//         scanf("%d",&origeminicial);
//         printf("Destino:\n");
//         scanf("%d",&destino);
//         if(origeminicial==destino){
//             printf("Encerrando...");
//             printf("A quantidade de horas totais %d",qtdehoras);
//         }else{
//             qtdehoras+=cidades[origeminicial][destino];
//         }
//        origem=destino;
//         do{
//         origem=destino;
//         printf("Digite a cidade de origem(0 a 7) para a destino (0 a 7),ou digite o mesmo numero duas vezes para encerrar\n");
//         printf("Horas parciais %d\n",qtdehoras);
        
//         printf("Destino:\n");
//         scanf("%d",&destino);
//         if(origeminicial==destino){
//             qtdehoras+=cidades[origem][destino];
//             printf("Encerrando...");
//             printf("A quantidade de horas totais %d",qtdehoras);
//         }else{
//             qtdehoras+=cidades[origem][destino];
//         }

//         }while(origeminicial!=destino);
        
   
// }
//              14.4
// #include <stdio.h>
// int main(){
//     int cidades[7][7]={
//         {0,2,11,6,15,11,1},
//         {2,0,7,12,4,2,15},
//         {11,7,0,11,8,3,13},
//         {6,12,11,0,10,2,1},
//         {15,4,8,10,0,5,13},
//         {11,2,3,2,5,0,14},
//         {1,15,13,1,13,14,0}
//     };
//     int roteiro[4],distanciaordesc,distanciadescdest,indicemeio;
//     printf("Digite a cidade de origem \n");
//     scanf("%d",&roteiro[0]);
//     printf("Digite a cidade de descanso 1 \n");
//     scanf("%d",&roteiro[1]);
//     printf("Digite a cidade de descanso 2\n");
//     scanf("%d",&roteiro[2]);
//     printf("Digite a cidade de destino \n");
//     scanf("%d",&roteiro[3]);
//    if(cidades[roteiro[0]][roteiro[1]]+cidades[roteiro[1]][roteiro[3]]>cidades[roteiro[0]][roteiro[2]]+cidades[roteiro[2]][roteiro[3]]){
//     printf("\nVá para a cidade de descanso 2 e depois para o destino");
//    }else if(cidades[roteiro[0]][roteiro[1]]+cidades[roteiro[1]][roteiro[3]]<cidades[roteiro[0]][roteiro[2]]+cidades[roteiro[2]][roteiro[3]]){
//     printf("\nVá para a cidade de descanso 1 e depois para o destino");
//    }else{
//     printf("\nVá para a cidade de descanso 2 ou cidade de descanso 1 e depois para o destino");
//    }
// }
//          15
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(){
//     int B[100][200];
//     int soma=0;
//     srand(time(NULL));
//     for(int i=0;i<100;i++){
//         for(int j=0;j<200;j++){
//             B[i][j]=rand()%10;
//             printf(" %d ",B[i][j]);

//         }
//         printf("\n");

//     }
//     for(int i=0;i<200;i++){
//         soma+=B[29][i];
//     }
//     for(int i=0;i<100;i++){
//         soma+=B[i][39];
//     }
//     printf("\n %d ",soma)
//     return 0;
// }
//          16
// #include <stdio.h>
// int main(){
//     int A[2][3]={
//         {9,16,34},{32,11,17}
//     };
//     for(int i=0;i<3;i++){
//         for(int j=0;j<2;j++){
//             printf(" %d ",A[j][i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//          17
// #include <stdio.h>
// #define N 2
// int main(){
//     typedef struct{
//         char nome[50];
//         int nmat;
//         int tipocurso;
//         int ncurso;
//         float media;
//     }aluno;
//     aluno alunos[N];
//     for(int i=0;i<N;i++){
//         printf("Digite o nome do aluno %d \n",i);
//         scanf(" %s",alunos[i].nome);
//         printf("Digite o numero de matricula do aluno:\n");
//         scanf("%d",&alunos[i].nmat);
//         printf("Digite o tipo do curso do aluno\n");
//         scanf("%d",&alunos[i].tipocurso);
//         printf("Digite o numero do curso\n");
//         scanf("%d",&alunos[i].ncurso);
//         printf("Digite a media geral\n");
//         scanf("%f",&alunos[i].media);

//     }
//     printf("Nome\t\t\tNumero da matricula \t\t\tTipo de curso\t\t\tNumero do curso\t\t\tMedia\t\t\t\n");
//     for(int i=0;i<N;i++){
//         printf("%s \t\t\t %d \t\t\t  %d \t\t\t  %d \t\t\t  %.2f \n",alunos[i].nome,alunos[i].nmat,alunos[i].tipocurso,alunos[i].ncurso,alunos[i].media);
//     }
//     printf("Alunos matriculados no curso 1(Nmatricula)\n");
//     for(int i=0;i<N;i++){
//         if(alunos[i].tipocurso==1){
//             printf("%d\n",alunos[i].nmat);
//         }

//     }
//     printf("Digite o numero do curso desejado\n");

//     printf("Melhor aluno do tipo 1 vinculado ao numero de curso %d\n");
//     int melhor=0;
//     int xmelhor=0;
//     for(int i=0;i<N;i++){
//         if(alunos[i].tipocurso==1 && alunos[i].media>melhor){
//             xmelhor=i;
//         }
//     }
//     printf("O melhor aluno eh o(a) %s de nmatricula %d",alunos[xmelhor].nome,alunos[xmelhor].nmat);
//     return 0;
// }
//              18
// #include <stdio.h>
// #define N 2
// int main(){
//     struct telefones{
//         char Nome[50];
//         char telefone[50];
//         int idade;

//     };
//     struct telefones lista[N];
//     for(int i=0;i<N;i++){
//         printf("Digite o nome do cliente %d\n",i);
//         scanf("%s",lista[i].Nome);
//         printf("Digite o seu telefone\n");
//         scanf("%s",lista[i].telefone);
//         printf("Digite a idade\n");
//         scanf("%d",&lista[i].idade);

//     }
//     printf("Nome\t\tTelefone\t\t Idade\n");
//     for(int i=0;i<N;i++){
//         printf("%s \t\t %s \t\t %d\n",lista[i].Nome,lista[i].telefone,lista[i].idade);
//     }
//     return 0;
// }
//                  19
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #define L 3
// #define C 6
// int main(){
//     srand(time(NULL));
//     int matriz[L][C];
//     for(int i=0;i<L;i++){
//         for(int j=0;j<C;j++){
//             matriz[i][j]=rand()%10;
//             printf(" %d ",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     int soma=0;
//     printf("Soma das colunas impares\n");
//     for(int i=0;i<L;i++){
//         for(int j=0;j<C;j++){
//             if(j%2!=0){
//                 soma+=matriz[i][j];
//             }
//         }
//     }
//     printf("%d\n",soma);

//     float media=0;
//     printf("Media aritmetica entre 2 e 4 colunas\n");
//     for(int i=0;i<L;i++){
//         for(int j=0;j<C;j++){
//             if(j==2 || j==4){
//                 media+=matriz[i][j];
//             }
//         }
//     }
//     printf("%.2f",media/(2*L));
//     soma=0;
//     printf("Matriz modificada\n");
//     for(int i=0;i<L;i++){
//         for(int j=0;j<C;j++){
//             if(j==5){
//                 matriz[i][j]=matriz[i][1]+matriz[i][2];
//             }
//         }
//     }
//     for(int i=0;i<L;i++){
//         for(int j=0;j<C;j++){
           
//             printf(" %d ",matriz[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//              20
// #include <stdio.h>
// int main(){
//     int A[2][2]={
//         {1,2},{3,4}
//     };
//     int B[2][2]={
//         {3,2},{1,2}
//     };
//     int opt;
//       int M[2][2];
//        int cte;
//         int S[2][2];
//     while(1){
//        printf("Digite uma opcao\n 1-Some as duas matrizes 2-Subtrair a primeira da segunda\n 3-Adicione uma CTE as matrizes 4-Mostrar as matrizes\n");
//        scanf("%d",&opt);
//        switch(opt){
//         case 1:
           
//             printf("Matriz nova\n");
//             for(int i=0;i<2;i++){
//                 for(int j=0;j<2;j++){
//                     S[i][j]=A[i][j]+B[i][j];
//                     printf(" %d ",S[i][j]);
//                 }
//                 printf("\n");
//             }
            
//             break;
//         case 2:
      
//             printf("Matriz nova\n");
//             for(int i=0;i<2;i++){
//                 for(int j=0;j<2;j++){
//                     M[i][j]=A[i][j]+B[i][j];
//                     printf(" %d ",M[i][j]);
//                 }
//                 printf("\n");
//             }
//             break;
//         case 3:
           
//             printf("Digite a CTE\n");
//             scanf("%d",&cte);
//             for(int i=0;i<2;i++){
//                 for(int j=0;j<2;j++){
//                     A[i][j]+=cte;
//                     B[i][j]+=cte;
//                 }
//             }
//             break;
//         case 4:
//             printf("Matriz A\n");
//             for(int i=0;i<2;i++){
//                 for(int j=0;j<2;j++){
//                     printf(" %d ",A[i][j]);
//                 }
//                 printf("\n");
//             }
//             printf("Matriz B\n");
//             for(int i=0;i<2;i++){
//                 for(int j=0;j<2;j++){
//                     printf(" %d ",B[i][j]);
//                 }
//                 printf("\n");
//             }
//             break;  
//         default:
//             printf("Opcao errada\n");
//        }    
//     }
//     return 0;
// }
//              22
// #include <stdio.h>
// int main(){
//     int tabuleiro[3][3]={0};
//     int coordx,coordy;
//     int vitoria=0;
//     int contadorvez=0;
//     while(vitoria==0 && contadorvez!=9){
//         printf("Digite as coordenadas(0 a 2)\n");
//         for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                 printf(" %d ",tabuleiro[i][j]);

//             }
//             printf("\n");
//         }
//         if(contadorvez%2==0){
//             printf("Jogador 1\n");
//             scanf("%d %d",&coordx,&coordy);
//         }
//         else{
//            printf("Jogador -1\n");
//             scanf("%d %d",&coordx,&coordy); 
//         }
        
//         if(coordx<0||coordx>2||coordy<0||coordy>2||tabuleiro[coordx][coordy]!=0){
//             printf("Coordenada inválida\n");
//         }
//         else{
            
//             if(contadorvez%2==0){
//                 tabuleiro[coordx][coordy]=1;
//             }else{
//                 tabuleiro[coordx][coordy]=-1;
//             }
//             contadorvez++;
//             if((tabuleiro[0][0]==1&&tabuleiro[0][1]==1&&tabuleiro[0][2]==1)||(tabuleiro[1][0]==1&&tabuleiro[1][1]==1&&tabuleiro[1][2]==1)||
//             (tabuleiro[2][0]==1&&tabuleiro[2][1]==1&&tabuleiro[2][2]==1)
//             ){
//                 vitoria=1;
//             }
//             if((tabuleiro[0][0]==1&&tabuleiro[1][0]==1&&tabuleiro[2][0]==1)||(tabuleiro[0][1]==1&&tabuleiro[1][1]==1&&tabuleiro[2][1]==1)||
//             (tabuleiro[0][2]==1&&tabuleiro[1][2]==1&&tabuleiro[2][2]==1)
//             ){
//                 vitoria=1;
//             }
//             if((tabuleiro[0][0]==1&&tabuleiro[1][1]==1&& tabuleiro[2][2]==1)||(tabuleiro[0][2]==1&&tabuleiro[1][1]==1&&tabuleiro[2][0]==1)){
//                 vitoria=1;
//             }

//             if((tabuleiro[0][0]==-1&&tabuleiro[0][1]==-1&&tabuleiro[0][2]==-1)||(tabuleiro[1][0]==-1&&tabuleiro[1][1]==-1&&tabuleiro[1][2]==-1)||
//             (tabuleiro[2][0]==-1&&tabuleiro[2][1]==-1&&tabuleiro[2][2]==-1)
//             ){
//                 vitoria=-1;
//             }
//             if((tabuleiro[0][0]==-1&&tabuleiro[1][0]==-1&&tabuleiro[2][0]==-1)||(tabuleiro[0][1]==-1&&tabuleiro[1][1]==-1&&tabuleiro[2][1]==-1)||
//             (tabuleiro[0][2]==-1&&tabuleiro[1][2]==-1&&tabuleiro[2][2]==-1)
//             ){
//                 vitoria=-1;
//             }
//             if((tabuleiro[0][0]==-1&&tabuleiro[1][1]==-1&& tabuleiro[2][2]==-1)||(tabuleiro[0][2]==-1&&tabuleiro[1][1]==-1&&tabuleiro[2][0]==-1)){
//                 vitoria=-1;
//             }








//         }
//     }   
//     if(vitoria==1){
//         printf("Vitoria do jogador 1");
//     }else if(vitoria == -1){
//         printf("Vitoria do jogador -1");
//     }else{
//         printf("Empate");
//     }
//     return 0;
// }
//          23
// #include <stdio.h>
// #define size 10
// int main(){
//     int i;
//     char c;
//     float f;
//     double d;
//     int veti[size];
//     char vetc[size];
//     float vetf[size];
//     double vetd[size];
//     int mi[size][size];
//     char mc[size][size];
//     float mf[size][size];
//     double md[size][size];
//     printf("Variaveis simples: i c f d\n");
//     printf("Int : %u bytes\n",sizeof(i));
//     printf("Char : %u bytes\n",sizeof(c));
//     printf("Float : %u bytes\n",sizeof(f));
//     printf("Double : %u bytes\n",sizeof(d));
//     printf("Variaveis homogenias unidimensionais:veti vetc vetf vetd\n");
//     printf("Int : %u bytes\n",sizeof(veti));
//     printf("Char : %u bytes\n",sizeof(vetc));
//     printf("Float : %u bytes\n",sizeof(vetf));
//     printf("Double : %u bytes\n",sizeof(vetd));
//     printf("Variaveis homogeneas bidimensionais: mi mc mf md\n");
//     printf("Int : %u bytes\n",sizeof(mi));
//     printf("Char : %u bytes\n",sizeof(mc));
//     printf("Float : %u bytes\n",sizeof(mf));
//     printf("Double : %u bytes\n",sizeof(md));
//     return 0;
// }
//              24
// #include <stdio.h>
// #define m 3
// int main(){
//     int i,j,k;
//     int A[m][m][m];
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             for(k=0;k<m;k++){
//                 scanf("%d",&A[i][j][k]);
//             }
//         }
//     }
//     for(i=0;i<m;i++){
//         for(j=0;j<m;j++){
//             for(k=0;k<m;k++){
//                 printf(" %d ",A[i][j][k]);
//             }
//              printf("\n");
//         }
//         printf("\n");
//     }
   
//     return 0;
// }
//          25
// #include <stdio.h>
// #define N 10
// int main(){
//     int A[N][N][N];
//     printf("A matriz A ocupa %u bytes",sizeof(A));
    
//     return 0;
// }
//              28
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main(){
//     srand(time(NULL));
//     int A[3][3][3],opt,x,y,z;
//     for(z=0;z<3;z++){
//         for(x=0;x<3;x++){
//             for(y=0;y<3;y++){
//                 A[z][y][x]=rand()%9;
//             }
//         }
//     }
//     printf("Digite qual eixo quer partir (0)X ou largura (1)y ou comprimento (2)z ou altura\n");
//     scanf("%d",&opt);
//     if(opt ==0){
//         printf("A partir de X\n");
//         for(x=0;x<3;x++){
//             printf("Camada %d do plano Zy\n",x);
//             for(z=0;z<3;z++){
//                 for(y=0;y<3;y++){
//                     printf(" %d ",A[z][y][x]);
//                 }
//                 printf("\n");
//             }
//         }
//     }
//     else if(opt ==1){

//         printf("A partir de Y\n");
//         for(y=0;y<3;y++){
//             printf("Camada %d do plano Zx\n",y);
//             for(z=0;z<3;z++){
//                 for(x=0;x<3;x++){
//                     printf(" %d ",A[z][y][x]);
//                 }
//                 printf("\n");
//             }
//         }


//     }
//     else if(opt == 2){
//         printf("A partir de Z\n");
//         for(z=0;z<3;z++){
//             printf("Camada %d do plano Xy\n",z);
//             for(x=0;x<3;x++){
//                 for(y=0;y<3;y++){
//                     printf(" %d ",A[z][y][x]);
//                 }
//                 printf("\n");
//             }
//         }
//     }
//     return 0;
// }
//                  30
// #include <stdio.h>
// int main(){
//     int A[2][2]={{0,1},{1,0}};
//     int i,j,somadiagprin=0,somadiagsec=0;
//     int mult=1;
//     for(i=0;i<2;i++){
//         for(j=0;j<2;j++){
//             if(i==j){
//                 mult*=A[i][j];
                
//             }
//         }
//     }
//     somadiagprin=mult;
//     mult=1;
//     j=1;
//     for(i=0;i<2;i++){
//         mult*=A[i][j];
//         j--;
//     }
//     somadiagsec=mult;
//     printf("A determinante eh de %d",somadiagprin-somadiagsec);
//     return 0;
// }