//          1
// #include <stdio.h>
// int main(){
//     struct aluno{
//         float notaprova;
//         float notatrabalho;
//         float media;
//         char nome[50];
//     };
//     struct aluno var_aluno;
//     printf("Digite o nome do aluno:\n");
//     fgets(var_aluno.nome,50,stdin);
//     printf("Digite a nota de prova do aluno:\n");
//     scanf("%f",&var_aluno.notaprova);
//      printf("Digite a nota de trabalho do aluno:\n");
//     scanf("%f",&var_aluno.notatrabalho);
//     var_aluno.media=(var_aluno.notaprova+var_aluno.notatrabalho)/2;
//     printf("Nome:%s",var_aluno.nome);
//     printf("Nota prova:%.2f",var_aluno.notaprova);
//     printf("Nota trabalho:%.2f",var_aluno.notatrabalho);
//     printf("Media:%.2f",var_aluno.media);
// }
//                  2
// #include <stdio.h>
// int main(){
//     struct aluno{
//         float notaprova;
//         float notatrabalho;
//         float media;
//         char nome[50];
//     };
//     struct aluno var_aluno[2];
//     int i;
//     for(i=0;i<2;i++){
//         fflush(stdin);
//         printf("Digite o nome do aluno:\n");
//         fgets(var_aluno[i].nome,50,stdin);
//         printf("Digite a nota de prova do aluno:\n");
//         scanf("%f",&var_aluno[i].notaprova);
//         printf("Digite a nota de trabalho do aluno:\n");
//         scanf("%f",&var_aluno[i].notatrabalho);
//         var_aluno[i].media=(var_aluno[i].notaprova+var_aluno[i].notatrabalho)/2;

//     }
//     for(i=0;i<2;i++){
//         printf("Aluno %d",i+1);
//         printf("Nome:%s",var_aluno[i].nome);
//         printf("Nota prova:%.2f",var_aluno[i].notaprova);
//         printf("Nota trabalho:%.2f",var_aluno[i].notatrabalho);
//         printf("Media:%.2f",var_aluno[i].media);
//     }
    
//     return 0;
// }
//              4
// #include <stdio.h>
// int main(){
//     typedef struct{
//         int ano;
//         int mes;
//         int dia;
//     }Data;
//     typedef struct{
//         char logradouro[100];
//         char cidade[100];
//         char uf[20];
//     }Endereco;
//     struct Cadastro{
//         char Nome[50];
//         Endereco Ender;
//         Data Dnasc;
//         char Telefone[20];
//     };
//     struct Cadastro Contato[10];
//     int i;
//     for(i=0;i<2;i++){
//         printf("\nDigite o nome: ");
//         fgets(Contato[i].Nome,50,stdin);
//         printf("\nDigite seu logradouro,depois cidade e uf:\n");
//            fflush(stdin);
//         fgets(Contato[i].Ender.logradouro,100,stdin);
//            fflush(stdin);
//         fgets(Contato[i].Ender.cidade,100,stdin);
//            fflush(stdin);
//         fgets(Contato[i].Ender.uf,2,stdin);
//         fflush(stdin);
//         printf("\nDigite o ano que nasceu,depois o mes e depois o dia\n");
//         scanf("%d",&Contato[i].Dnasc.ano);
//         fflush(stdin);
//         scanf("%d",&Contato[i].Dnasc.mes);
//          fflush(stdin);
//         scanf("%d",&Contato[i].Dnasc.dia);
//         printf("\nDigite seu numero de telefone:\n");
//         fflush(stdin);
//         fgets(Contato[i].Telefone,20,stdin);
//            fflush(stdin);
//     }
//     for(i=0;i<2;i++){
//         printf("Nome: %s\n",Contato[i].Nome);
//         printf("Endereço: %s,%s-%s  \n",Contato[i].Ender.logradouro,Contato[i].Ender.cidade,Contato[i].Ender.uf);
//         printf("Data de nascimento: %d/%d/%d\n",Contato[i].Dnasc.dia,Contato[i].Dnasc.mes,Contato[i].Dnasc.ano);
//         printf("Telefone: %s",Contato[i].Telefone);
       
//     }
  
// }
//              5
// #include <stdio.h>
// #define N 2
// #define ANO_ATUAL 2026
// #define MES_ATUAL 5
// #define DIA_ATUAL 18
// int main(){
//     typedef struct{
//         int ano;
//         int mes;
//         int dia;
//     }data_nasc;
//     typedef struct{
//         char nome[50];
//         data_nasc dt;
//     }pessoa;
//     pessoa pessoas[N];
//     int i;
//     for(i=0;i<N;i++){
//         printf("Digite seu nome: ");
//         scanf("%s",pessoas[i].nome);
//         printf("Digite seu ano de nascimento,mes e dia: ");
//         scanf("%d %d %d",&pessoas[i].dt.ano,&pessoas[i].dt.mes,&pessoas[i].dt.dia);
//     }
//     int indice_maior_idade=0;
//     int maior_dia=pessoas[0].dt.dia;
//     int maior_mes=pessoas[0].dt.mes;
//     int maior_ano=pessoas[0].dt.ano;
//     int maior_idade_em_dias=(ANO_ATUAL-maior_ano)*365 + (MES_ATUAL-maior_mes)*30+(DIA_ATUAL-maior_dia);
//     for(i=0;i<N;i++){
//         if(maior_idade_em_dias<(ANO_ATUAL-pessoas[i].dt.ano)*365 + (MES_ATUAL-pessoas[i].dt.mes)*30+(DIA_ATUAL-pessoas[i].dt.dia)){
//             maior_dia=pessoas[i].dt.dia;
//             maior_mes=pessoas[i].dt.mes;
//             maior_ano=pessoas[i].dt.ano;
//             maior_idade_em_dias=(ANO_ATUAL-pessoas[i].dt.ano)*365 + (MES_ATUAL-pessoas[i].dt.mes)*30+(DIA_ATUAL-pessoas[i].dt.dia);
//             indice_maior_idade=i;
//         }
//     }
//     int idade_em_anos=ANO_ATUAL-pessoas[indice_maior_idade].dt.ano;
//     if(MES_ATUAL<pessoas[indice_maior_idade].dt.mes){
//         idade_em_anos--;
//     }
//     printf("%s tem a maior idade,sendo ela:%d",pessoas[indice_maior_idade].nome,idade_em_anos);
//     return 0;
// }
//              6 e 7
// #include <stdio.h>
// #include <stdlib.h>
// #define N 20
// int main(){
//     typedef struct{
//         char nome[50];
//         int codigo;
//         float preco;
//         int baixas[6];
//     }produto;
//     produto produtos[N];
//     int registros[N]={0};
//     int index=0,empty_space=0;
//     int opt,i;
//     system("cls");
//     do{
//         printf("Digite um codigo:\n0-Cadastrar Produto\n1-Consultar produto\n2-Mostrar todos os produtos\n3-Encerrar programa\n");
//         scanf("%d",&opt);
//         if(opt == 0){
//             for(i=0;i<N;i++){
//                 if(registros[i]==0){
//                     index=i;
//                     empty_space=1;
//                     break;
//                 }
//             }
//             if(empty_space==1){
//                 registros[index]=1;
//                 printf("Digite o nome do produto: ");
//                 scanf("%s",produtos[index].nome);
//                 fflush(stdin);
//                 printf("Digite o codigo do produto: ");
//                 scanf("%d",&produtos[index].codigo);
//                 printf("Digite o preco do produto: ");
//                 scanf("%f",&produtos[index].preco);
//                 for(i=0;i<6;i++){
//                     printf("Digite a baixa do dia %d (dia 0 eh a segunda)",i);
//                     scanf("%d",&produtos[index].baixas[i]);
//                 }
//             }else{
//                 printf("Registro cheio!\n");
//             }
            
//         }else if(opt == 1){
//             int codigo_query;
//             printf("Digite o codigo do produto que quer procurar: ");
//             scanf("%d",&codigo_query);
//             for(i=0;i<N;i++){
//                 if(produtos[i].codigo==codigo_query){
//                     printf("Nome: %s\n",produtos[i].nome);
//                     printf("Codigo: %d \t\t Preco: %.2f\n",produtos[i].codigo,produtos[i].preco);
//                     printf("\t1  2  3  4  5  6  \n");
//                     printf("Baixas: %d  %d  %d  %d  %d  %d\n",produtos[i].baixas[0],produtos[i].baixas[1],produtos[i].baixas[2],produtos[i].baixas[3],produtos[i].baixas[4],produtos[i].baixas[5]);
//                 }
//             }
//         }else if(opt ==2){
//             for(i=0;i<N;i++){
//                  if(registros[i]==1){
//                     printf("Nome: %s\n",produtos[i].nome);
//                     printf("Codigo: %d \t\t Preco: %.2f\n",produtos[i].codigo,produtos[i].preco);
//                     printf("\t1  2  3  4  5  6  \n");
//                     printf("Baixas: %d  %d  %d  %d  %d  %d\n",produtos[i].baixas[0],produtos[i].baixas[1],produtos[i].baixas[2],produtos[i].baixas[3],produtos[i].baixas[4],produtos[i].baixas[5]);
            //         }
//             }
//         }else if(opt == 3){
//             printf("Encerrando...\n");
//         }
//     }while(opt!=3);
//     return 0;
// }
//                      8
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #define N 20
// #define ANO_ATUAL 2026
// #define MES_ATUAL 05
// #define DIA_ATUAL 19
// int main(){
//     typedef struct{
//         int ano;
//         int mes;
//         int dia;
//     }data;
//     typedef struct{
//         char nome[50];
//         char sobrenome[50];
//         char sexo;
//         char cidade_natal[50];
//         char cpf[50];

//     }cliente;
//     typedef struct{
//         int nconta;
//         data data_abertura;
//         float saldo;
//         char cpf[50];
//         float limite_especial;
//     }conta;
    
//     int opt,registroscli[N]={0},registroscont[N]={0},i,index,j;
//     cliente clientes[N];
//     conta contas[N];
//     system("cls");
//     do{
//         printf("Digite uma opcao: \n 0-Cadastrar cliente \n 1-Cadastrar conta \n 2-Mostrar Clientes \n 3-Mostrar Contas"
//         " \n 4-Imprimir o saldo medio das mulheres \n 5-Imprimir o saldo medio dos homens \n 6-Imprimir o maior saldo"
//         " \n 7-Imprimir o menor saldo \n 8-Imprimir o cliente mais antigo \n 9-Imprimir o cliente com maior limite especial \n "
//         "10-Imprimir clientes com saldo negativo\n 12-Sair \n");
//         scanf("%d",&opt);
//         if(opt==0){
//             int empty_space=0;
//             for(i=0;i<N;i++){
//                 if(registroscli[i]==0){
//                     empty_space=1;
//                     registroscli[i]=1;
//                     index=i;
//                     break;
//                 }
//             }
//             if(empty_space==1){
//                 printf("Digite um nome: ");
//                 scanf(" %s",clientes[index].nome);
//                 fflush(stdin);
//                 printf("\nDigite o sobrenome: ");
//                 scanf(" %s",clientes[index].sobrenome);
//                 fflush(stdin);
//                 printf("\nSexo(M OU F): ");
//                 scanf(" %c",&clientes[index].sexo);
//                 fflush(stdin);
//                 printf("\nCidade natal: ");
//                 scanf(" %s",clientes[index].cidade_natal);
//                 fflush(stdin);
//                 printf("\nCPF: ");
//                 scanf(" %s",clientes[index].cpf);
//                 fflush(stdin);
//             }else{
//                 printf("\nRegistros cheios!!!\n");
//             }
            
//         }else if(opt ==1){
//             int empty_space=0;
//             int auth_cpf=0;
//             char cpf_query[50];
//             for(i=0;i<N;i++){
//                 if(registroscont[i]==0){
//                     empty_space=1;
//                     registroscont[i]=1;
//                     index=i;
//                     break;
//                 }
                
//             }
//             if(empty_space==1){
//                 printf("\nDigite o numero da conta: ");
//                 scanf("%d",&contas[index].nconta);
//                 printf("\nDigite o cpf: ");
//                 scanf(" %s",&cpf_query);
//                 for(i=0;i<N;i++){
//                     if(!strcmp(clientes[index].cpf,cpf_query)){
//                         auth_cpf=1;
//                     }
//                 }
//                 if(auth_cpf==1){
//                     strcpy(clientes[index].cpf,cpf_query);
//                     fflush(stdin);
//                     printf("\nAno,mes e dia de abertura: ");
//                     scanf("%d %d %d",&contas[index].data_abertura.ano,&contas[index].data_abertura.mes,&contas[index].data_abertura.dia);
//                     fflush(stdin);
//                     contas[index].saldo=0;
//                     contas[index].limite_especial=0;
//                 }else{
//                     printf("\n CPF nao encontrado em clientes \n");
//                 }
                
//             }else{
//                 printf("\nRegistros cheios!!!\n");
//             }



//         }else if(opt == 2){
//             for(i=0;i<N;i++){
//                 if(registroscli[i]==1){
//                     printf("Nome: %s\n",clientes[i].nome);
//                     printf("Sobrenome: %s\n",clientes[i].sobrenome);
//                     printf("Sexo: %c\n",clientes[i].sexo);
//                     printf("Cidade Natal: %s\n",clientes[i].cidade_natal);
//                     printf("CPF: %s\n",clientes[i].cpf);



//                 }
//             }
//         }else if(opt == 3){
//         for(i=0;i<N;i++){
//                 if(registroscont[i]==1){
//                     printf("Numero da conta: %d\n",contas[i].nconta);
//                     printf("Data de abertura: %d %d %d \n",contas[i].data_abertura.dia,contas[i].data_abertura.mes,contas[i].data_abertura.ano);
//                     printf("Saldo: %.2f\n",contas[i].saldo);
//                     printf("CPF: %s\n",contas[i].cpf);
//                     printf("Limite especial: %.2f\n",contas[i].limite_especial);

//                 }
//             }  
//         }
//         else if(opt == 4){
//             // a fazer
//             float salario_medio=0;
//             int contador;
//             for(i=0;i<N;i++){
//                 if(registroscli[i]==1){
//                     for(j=0;j<N;j++){
//                         if(registroscont[j]==1){
//                             if(!strcmp(contas[j].cpf,clientes[i].cpf) && clientes[i].sexo=='F'){
//                                 salario_medio+=contas[j].saldo;
//                                  contador++;
//                             }
//                         }
//                     }
//                 }
//             }
//             printf("O saldo medio das mulheres eh igual a %.2f \n",salario_medio/contador);
//         }else if(opt==5){
//             float salario_medio=0;
//             int contador;
//             for(i=0;i<N;i++){
//                 if(registroscli[i]==1){
//                     for(j=0;j<N;j++){
//                         if(registroscont[j]==1){
//                             if(!strcmp(contas[j].cpf,clientes[i].cpf) && clientes[i].sexo=='M'){
//                                 salario_medio+=contas[j].saldo;
//                                  contador++;
//                             }
//                         }
//                     }
//                 }
//             }
//             printf("O saldo medio dos homens eh igual a %.2f \n",salario_medio/contador);
//         }else if(opt == 6){
//             float maior_saldo;
//             for(i=0;i<N;i++){
//                 if(registroscont[i]==1){
//                    maior_saldo=contas[i].saldo;
//                     break;
//                 }
//             }
//             for(i=0;i<N;i++){
//                 if(registroscont[i]==1 && maior_saldo<contas[i].saldo){
//                     maior_saldo=contas[i].saldo;
//                 }
//             }
//             printf("O maior saldo eh de %.2f",maior_saldo);
//         }else if(opt == 7){
//             float menor_saldo;
//             for(i=0;i<N;i++){
//                 if(registroscont[i]==1){
//                    menor_saldo=contas[i].saldo;
//                     break;
//                 }
//             }
//             for(i=0;i<N;i++){
//                 if(registroscont[i]==1 && menor_saldo>contas[i].saldo){
//                     menor_saldo=contas[i].saldo;
//                 }
//             }
//             printf("O menor saldo eh de %.2f",menor_saldo);
//         }else if(opt == 8){
//             int data_em_dias;
//             int maior_data_em_dias;
//             for(i=0;i<N;i++){
//                 if(registroscont[i]==1){
//                     maior_data_em_dias=contas[i].data_abertura.ano*365+contas[i].data_abertura.mes*30+contas[i].data_abertura.dia-
//                     (ANO_ATUAL*365 + MES_ATUAL*30 + DIA_ATUAL);
//                     break;
//                 }
//             }
//             for(i=0;i<N;i++){
//                 if(registroscont[i]==1 && maior_data_em_dias<contas[i].data_abertura.ano*365+contas[i].data_abertura.mes*30+contas[i].data_abertura.dia-
//                     (ANO_ATUAL*365 + MES_ATUAL*30 + DIA_ATUAL)){
//                         for(j=0;j<N;j++){
//                             if(registroscli[j]==1 && !strcmp(contas[i].cpf ,clientes[j].cpf)){
//                                 index=j;
//                             }
//                         }
//                     }
//             }
//             printf("O cliente mais antigo eh o(a) %s %s\n",clientes[index].nome,clientes[index].sobrenome);
//         }else if(opt == 9){
//             float maior_limite_especial;
//             for(i=0;i<N;i++){
//                 if(registroscli[i]==1){
//                     for(j=0;j<N;j++){
//                         if(!strcmp(clientes[i].cpf,contas[j].cpf) && registroscont[j]==1){
//                              maior_limite_especial=contas[j].limite_especial;
//                         }
                        
//                     }
                   
//                 }
//             }
//             for(i=0;i<N;i++){
//                 if(registroscli[i]==1){
//                     for(j=0;j<N;j++){
//                         if(!strcmp(clientes[i].cpf,contas[j].cpf) && registroscont[j]==1 && contas[j].limite_especial>maior_limite_especial){
//                              maior_limite_especial=contas[j].limite_especial;
//                              index=i;
//                         }
                        
//                     }
                   
//                 }
//             }
//             printf("O cliente com o maior limite especial eh o(a) %s %s",clientes[index].nome,clientes[index].sobrenome);
            


//         }else if(opt == 10){
//             for(i=0;i<N;i++){
//                 if(registroscont[i]==1 && contas[i].saldo<0){
//                     for(j=0;j<N;j++){
//                         if(!strcmp(contas[i].cpf,clientes[j].cpf)){
//                             printf("Nome: %s\n",clientes[j].nome);
//                             printf("Sobrenome: %s\n",clientes[j].sobrenome);
//                             printf("Cidade natal: %s\n",clientes[j].cidade_natal);
//                         }
//                     }
//                 }
                
//             }
//         }else if(opt == 12){
//             printf("\nSaindo...");
            
//         }else{
//             printf("Opcao invalida!\n");
//         }

//     }while(opt != 12);
// }
//                      10
// #include <stdio.h>
// #include <stdlib.h>
// #define N 20
// int main(){
//     system("cls");
//     typedef struct{
//         int cod;
//         char email[50];
//         float nhoras;
//         char pagina;
//     }cliente;
//     int opt;
//     int index=0,i;
//     float valor_horas,valor_horas_total=0;
//     cliente clientes[N];
//     do{
//         printf("Digite uma opcao:\n 0-Sair \n 1-Cadastrar \n 2-Exibir \n 3-Calcular valor----> ");
//         scanf("%d",&opt);
//         if(opt == 0){
//             printf("Saindo...");

//         }else if(opt == 1){
//             if(index==N){
//                 printf("Registros cheios!\n");
//             }
//             else{
//                 printf("\nDigite o codigo do cliente: ");
//                 scanf("%d",&clientes[index].cod);
//                 printf("\nDigite o email do cliente: ");
//                 scanf(" %s",clientes[index].email);
//                 printf("\nDigite o numero de horas utilizadas do cliente: ");
//                 scanf("%f",&clientes[index].nhoras);
//                 do{
//                     printf("\nDigite se o cliente tem uma pagina (S) ou (N): ");
//                     scanf(" %c",&clientes[index].pagina);
//                 }while(clientes[index].pagina!='S' && clientes[index].pagina!='N');
//                 printf("\nCadastrado\n");
//                 index++;
//             }
            
            
//         }else if(opt == 2){
//             for(i=0;i<index;i++){
//                 printf("\nCodigo %d",clientes[i].cod);
//                 printf("\nEmail %s",clientes[i].email);
//                 printf("\nNumero de horas utilizada %.2f",clientes[i].nhoras);
//                 printf("\nPagina %c",clientes[i].pagina);
//                 printf("\n-----------------------------\n");
//             }
//         }else if(opt == 3){
//             for(i=0;i<index;i++){
//                 if(clientes[i].nhoras>20){
//                     valor_horas=35+(2.5*(clientes[i].nhoras-20));
                   
//                 }else {
//                     valor_horas=35;
//                 }
//                 if(clientes[i].pagina=='S'){
//                         valor_horas+=40;
//                     }
//                 valor_horas_total+=valor_horas;
//                 printf("\nCliente %d deve %.2f",clientes[i].cod,valor_horas);
//             }
//             printf("\n O valor total eh de %.2f\n",valor_horas_total);
           
//         }else{
//             printf("\nOpcao invalida!");
//         }
        
//     }while(opt!=0);
//     return 0;
// }
//                  11
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// #define N 5
// int main(){
//     float vetores[N][2];
//     int i,xref,yref,index=0;
//     float dif;
//     float menordif;
    
//     for(i=0;i<N;i++){
//         printf("Defina a coordenada X do vetor %d\n",i+1);
//         scanf("%f",&vetores[i][0]);
//         printf("Defina a coordenada Y do vetor %d\n",i+1);
//         scanf("%f",&vetores[i][1]);
//     }
//     xref=0;
//     yref=0;
//     menordif=(float)sqrt(pow(xref-vetores[1][0],2)+(pow(yref-vetores[1][1],2)));
    
//     for(i=1;i<N;i++){
//         dif=(float)sqrt(pow(xref-vetores[i][0],2)+(pow(yref-vetores[i][1],2)));
//         if(menordif>dif){
//             menordif=dif;
//             index=i;
//         }
//     }
//     if(menordif==0){
//         printf("O ponto %d eh o mesmo que o de referencia,entao a menor distancia entre o ponto de referencia e os demais eh 0",index);
//     }else{
//         printf("O ponto %d esta a %f do ponto de referencia: ",index,menordif);
//     }
//     return 0;
// }
//                          12
// #include <stdio.h>
// int main(){
//     typedef struct{
//         float base;
//         float altura;
//     }retangulo;
//     retangulo retinput;
//     printf("Escreva uma base para o retangulo: ");
//     scanf("%f",&retinput.base);
//     printf("Escreva uma altura para o retangulo: ");
//     scanf("%f",&retinput.altura);
//     printf("\nA area eh de %f e o comprimento das arestas sao,partindo da esquerda(altura) e em sentido horario:\n"
//          "%f \n%f \n%f \n%f",retinput.altura*retinput.base,retinput.altura,retinput.base,retinput.altura,retinput.base);
//     return 0;
// }
//                      13
// #include <stdio.h>
// int main(){
//         struct Vetor
//     {
//     float x; float y; float z;
//     };
//     struct Vetor v1,v2,vetor_soma;
//     printf("Digite as coordenadas do vetor 1 no padrao abaixo:\n X Y Z\n");
//     scanf("%f %f %f",&v1.x,&v1.y,&v1.z);
//     printf("\nDigite as coordenadas do vetor 2 no padrao abaixo:\n X Y Z\n");
//     scanf("%f %f %f",&v2.x,&v2.y,&v2.z);
//     vetor_soma.x=v1.x+v2.x;
//     vetor_soma.y=v1.y+v2.y;
//     vetor_soma.z=v1.z+v2.z;
//     printf("O vetor soma dos vetores dado tem as, partindo da origem, coordenadas : %f %f %f",vetor_soma.x,vetor_soma.y,vetor_soma.z);
//     return 0;
// }
//                  14
#include <stdio.h>
int main(){
    typedef struct{
        int horas;
        int minutos;
    }horas;
    horas inicio,fim;
    printf("Digite a hora do comeco do jogo: ");
    scanf("%d",&inicio.horas);
    printf("\nDigite os minutos do comeco do jogo: ");
    scanf("%d",&inicio.minutos);
    printf("\nDigite a hora do fim do jogo: ");
    scanf("%d",&fim.horas);
    printf("\nDigite os minutos do fim do jogo: ");
    scanf("%d",&fim.minutos);
     
    int diferenca_horas=fim.horas-inicio.horas;
    int diferenca_minutos=fim.minutos-inicio.minutos;
    if(diferenca_horas<0){
        diferenca_horas=diferenca_horas+24;
    }
    if(diferenca_minutos<0){
        diferenca_minutos=diferenca_minutos+60;
        diferenca_horas--;
    }
    if(diferenca_horas>24){
        printf("Partida so pode ter no maximo 24 horas,ela tem atualmente %d %d",diferenca_horas,diferenca_minutos);
    }else{
        printf(" %d %d",diferenca_horas,diferenca_minutos);
    }
    

    return 0;
}
