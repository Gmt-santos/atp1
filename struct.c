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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20
int main(){
    typedef struct{
        int ano;
        int mes;
        int dia;
    }data;
    typedef struct{
        char nome[50];
        char sobrenome[50];
        char sexo;
        char cidade_natal[50];
        char cpf[50];

    }cliente;
    typedef struct{
        int nconta;
        data data_abertura;
        float saldo;
        int cpf[50];
        float limite_especial;
    }conta;
    
    int opt,registroscli[N]={0},registroscont[N]={0},i,index;
    cliente clientes[N];
    conta contas[N];
    system("cls");
    do{
        printf("Digite uma opcao: \n 0-Cadastrar cliente \n 1-Cadastrar conta \n 2-Mostrar Clientes \n 3-Mostrar Contas"
        " \n 4-Imprimir o salario medio das mulheres \n 5-Imprimir o salario medio dos homens \n 6-Imprimir o maior saldo"
        " \n 7-Imprimir o menor saldo \n 8-Imprimir o cliente mais antigo \n 9-Imprimir o cliente com maior limite especial \n "
        "10-Imprimir clientes com saldo negativo\n 12-Sair \n");
        scanf("%d",&opt);
        if(opt==0){
            int empty_space=0;
            for(i=0;i<N;i++){
                if(registros[i]==0){
                    empty_space=1;
                    registroscli[i]=1;
                    index=i;
                    break;
                }
            }
            if(empty_space==1){
                printf("Digite um nome: ");
                scanf(" %s",clientes[index].nome);
                fflush(stdin);
                printf("\nDigite o sobrenome: ");
                scanf(" %s",clientes[index].sobrenome);
                fflush(stdin);
                printf("\nSexo(M OU F): ");
                scanf(" %c",&clientes[index].sexo);
                fflush(stdin);
                printf("\nCidade natal: ");
                scanf(" %s",clientes[index].cidade_natal);
                fflush(stdin);
                printf("\nCPF: ");
                scanf(" %s",clientes[index].cpf);
                fflush(stdin);
            }else{
                printf("\nRegistros cheios!!!\n");
            }
            
        }else if(opt ==1){
            int empty_space=0;
            int cpf_query,auth_cpf=0;
            for(i=0;i<N;i++){
                if(registros[i]==0){
                    empty_space=1;
                    registroscont[i]=1;
                    index=i;
                    break;
                }
                
            }
            if(empty_space==1){
                printf("\nDigite o numero da conta: ");
                scanf("%d",&contas[index].nconta);
                printf("\nDigite o cpf: ");
                scanf("%d",&cpf_query);
                for(i=0;i<N;i++){
                    if(!strcmp(contas[index].cpf,cpf_query)){
                        auth_cpf=1;
                    }
                }
                if(auth_cpf==1){
                    scanf(" %s",clientes[index].cpf);
                    fflush(stdin);
                    printf("\nAno,mes e dia de abertura: ");
                    scanf("%d %d %d",&contas[index].data_abertura.ano,&contas[index].data_abertura.mes,&contas[index].data_abertura.dia);
                    fflush(stdin);
                    contas[index].saldo=0;
                    contas[index].limite_especial=0;
                }else{
                    printf("\n CPF nao encontrado em clientes \n");
                }
                
            }else{
                printf("\nRegistros cheios!!!\n");
            }



        }else if(opt == 2){
            for(i=0;i<N;i++){
                if(registroscli[i]==1){
                    printf("")
                }
            }
        }

    }while(opt != 12);
}