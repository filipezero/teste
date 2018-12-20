/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>


//BASE DADOS:  ----------------------------------------------------------
struct num_serv_sec
{
    int num_serie;
};

struct info_pessoal
{
    char nome[100];
    char dia_nasc[100];
    char altura[100];
    char olhos[100];
    char cabelo[100];
};

struct info_numer
{
    int bi;
    int contribuinte;
    int seg_social;
    int carta_cond;
};

 struct morada
{
    char rua[100];
    int cod_postal1;
    int cod_postal2;
    char cod_postal3[100];
};

 struct confid
{
    char partido[100];
    char clube[100];
};

typedef struct baseDados
{
    struct num_serv_sec SECRETO;
    struct info_pessoal I_PESSOAL;
    struct info_numer I_NUMERICA;
    struct morada MORADA;
    struct confid CONFID;
     
}DADOS;


//Funções Genericas:  ----------------------------------------------------------
int le_int()
{
    int num = 0;
    fflush(stdin);
    scanf(" %d", &num);


    return num;
}

void le_vet(char *vector)
{
    int j = 0;
    for (j = 0; j < 100; j++)
    {
       
        vector[j] = 0;
    }
}


//Funções de Escrita do programa:  ----------------------------------------------------------

void le_nss(DADOS *ptr, int pos)
{
    int a = 0;
    printf("\nInforme o numero para os serviços secretos: ");
    
    ptr[pos].SECRETO.num_serie = le_int();;
    
}

void le_info_pessoal(DADOS *ptr, int pos)
{
    fflush(stdin);
   
    printf("\nInforme o nome da pessoa: "); 
    le_vet(ptr[pos].I_PESSOAL.nome);
    //mostraChar(ptr[pos].I_PESSOAL.nome);
    scanf("%s", ptr[pos].I_PESSOAL.nome); fflush(stdin);
    //mostraChar(ptr[pos].I_PESSOAL.nome);


            
    printf("\nInforme a data de nascimento: ");
    le_vet(ptr[pos].I_PESSOAL.dia_nasc);
    scanf(" %s", ptr[pos].I_PESSOAL.dia_nasc); fflush(stdin);
    
    printf("\nInforme a altura: ");
    le_vet(ptr[pos].I_PESSOAL.altura);
    scanf(" %s", ptr[pos].I_PESSOAL.altura); fflush(stdin);
    
    printf("\nInforme a cor dos olhos: ");
    le_vet(ptr[pos].I_PESSOAL.olhos);
    scanf(" %s", ptr[pos].I_PESSOAL.olhos); fflush(stdin);
    
    printf("\nInforme a cor do cabelo: ");
    le_vet(ptr[pos].I_PESSOAL.cabelo);
    scanf(" %s", ptr[pos].I_PESSOAL.cabelo); fflush(stdin);
    
}

void le_info_numer(DADOS *ptr, int pos)
{
    printf("\nInforme o bilhete de identidade: ");
    ptr[pos].I_NUMERICA.bi = le_int();
    
    
    printf("\nInforme o contribuinte: ");
  
    ptr[pos].I_NUMERICA.contribuinte = le_int();
    
    printf("\nInforme o numero da segurança social: ");
    
    ptr[pos].I_NUMERICA.seg_social = le_int();
    
    printf("\nInforme o numero da carta de conduçao: ");
    
    ptr[pos].I_NUMERICA.carta_cond = le_int();
}

void le_moradda(DADOS *ptr, int pos)
{

    printf("\nInforme a rua: ");
    le_vet(ptr[pos].MORADA.rua);
    scanf(" %s", ptr[pos].MORADA.rua); fflush(stdin);
    
    printf("\nInforme o codigo postal: ");

    ptr[pos].MORADA.cod_postal1 = le_int();
    fflush(stdin);
    
    
}

void le_confidencial(DADOS *ptr, int pos)
{

    fflush(stdin);
    printf("\nInforme o partido politico: ");
    le_vet(ptr[pos].CONFID.partido);
    scanf(" %s", ptr[pos].CONFID.partido); fflush(stdin);
    
    printf("\nInforme o clube de futebol: ");
    le_vet(ptr[pos].CONFID.clube);
    scanf(" %s", ptr[pos].CONFID.clube); fflush(stdin);
    
}


//Funções genéricas para mostrar na tela

void mostraInt(int x)
{
    printf(" %d", x);
}

void mostraChar(char vector[])
{
    int i = 0;
    
    for (i = 0; i < 100; i++ && vector[i] != 0)
    {
        printf("%c", vector[i]);
    }
    printf("\n");
    
}

//Funções para MOSTRAR NA TELA:  ----------------------------------------------------------

void mostra_nss(DADOS *ptr, int pos)
{
    printf("\nNumero para os serviços secretos: ");
    mostraInt(ptr[pos].SECRETO.num_serie);

}

void mostra_info_pessoal(DADOS *ptr, int pos)
{
    
    printf("\nNome da pessoa: ");
    mostraChar(ptr[pos].I_PESSOAL.nome);
            
    printf("\nData de nascimento: ");
    mostraChar(ptr[pos].I_PESSOAL.dia_nasc);
    
    printf("\nAltura: ");
    mostraChar(ptr[pos].I_PESSOAL.altura);
    
    printf("\nCor dos olhos: ");
    mostraChar(ptr[pos].I_PESSOAL.olhos);
    
    printf("\nCor do cabelo: ");
    mostraChar(ptr[pos].I_PESSOAL.cabelo);
    
}

void mostra_info_numer(DADOS *ptr, int pos)
{
    printf("\nBilhete de identidade: ");
    mostraInt(ptr[pos].I_NUMERICA.bi);
    
    printf("\nContribuinte: ");
    mostraInt(ptr[pos].I_NUMERICA.contribuinte);
    
    printf("\nNumero da segurança social: ");
    mostraInt(ptr[pos].I_NUMERICA.seg_social);
    
    printf("\nNumero da carta de conduçao: ");
    mostraInt(ptr[pos].I_NUMERICA.carta_cond);
}

void mostra_moradda(DADOS *ptr, int pos)
{

    
    printf("\nRua: ");
    mostraChar(ptr[pos].MORADA.rua);
    
    printf("\nCodigo postal: ");
    mostraInt(ptr[pos].MORADA.cod_postal1);
    
    
}

void mostra_confidencial(DADOS *ptr, int pos)
{

    
    printf("\nPartido politico: ");
    mostraChar(ptr[pos].CONFID.partido);

            
    printf("\nClube de futebol: ");
    mostraChar(ptr[pos].CONFID.clube);
    
}

//Fim das Funções

int main() 
{
    char c = ' ';
    char c2 = ' ';
    DADOS pessoa[50];
    int i = 0;
    int pos = 0;
    
    for (i = 0; i < 50; i++)
    {
        pessoa[i].I_PESSOAL.nome[0] = 0;
    }
    
    printf("/*********** PROGRAMA SIRP – Registo dos cidadaos **********/\n\n");
    
    while(c != 's')
    {
        printf("\n\n\na - Mostrar os numeros de serie de todos os elementos da base de dados \nb - Mostrar toda a informacao do cidadao com um certo numero \nc - Modificar a informacao do cidadao com um certo numero \nd - Criar um novo registro para um novo cidadao \ne - Apagar o registro com um certo numero \n\n s - SAIR");
        scanf(" %c", &c);
        printf("\n%c", c);
        fflush(stdin);
        switch(c)
        {
            case 'a': 
                i = 0;
                for(i = 0; i < 50; i++)
                {
                    printf("\nElemento na posição %d: %d", i, pessoa[i].SECRETO.num_serie);
                }
                
                break;
            case 'b': 
                printf("\nQual indice esta a pessoa (entre 0 e 49)\n");
                scanf(" %d", &pos);
                while (pos < 0 || pos > 50)
                {
                    printf("\nNumero invalido! Tente novamente\n");
                    scanf(" %d", &pos);
                    fflush(stdin);
                }
                if (pessoa[pos].I_PESSOAL.nome[0] == 0)
                {
                    printf("\nNao existe dados neste indice\n");
                    
                }
                else
                {
                    mostra_nss(pessoa, pos);
                    mostra_info_pessoal(pessoa, pos);
                    mostra_info_numer(pessoa, pos);
                    mostra_moradda(pessoa, pos);
                    mostra_confidencial(pessoa, pos);
                }
                break;
            case 'c':
                printf("\nQual indice esta a pessoa (entre 1 e 50)\n");
                scanf(" %d", &pos);
                fflush(stdin);
                
                while (pos < 0 || pos > 49)
                {
                    printf("\nNumero invalido! Tente novamente\n");
                    scanf(" %d", &pos);
                    fflush(stdin);
                }
                if (pessoa[pos].I_PESSOAL.nome[0] == 0)
                {
                    printf("\nNao existe dados neste indice\n");
                    
                }
                else
                {
                    printf("\nQual informacao quer alterar?\n");
                    printf("\na - NSS \nb - Info Pessoal \nc - Info Numeral \nd - Morada \ne - Confidencial \n\ns - voltar \n");
                    scanf(" %c", &c2);
                    fflush(stdin);
                    
                    switch (c2)
                    {
                        case 'a': le_nss(pessoa, pos); break;
                        case 'b': le_info_pessoal(pessoa, pos); break;
                        case 'c': le_info_numer(pessoa, pos); break;
                        case 'd': le_moradda(pessoa, pos); break;
                        case 'e': le_confidencial(pessoa, pos); break;
                        case 's': break;
                        default: break;
                    }
                }
                break;
                
            case 'd':
                i = 0;
                
                while (pessoa[i].I_PESSOAL.nome[0] != 0 && i < 50)
                {
                    i++;                    
                }
                printf("INDICE: %d", i);
                pos = i;
                i = 0;
                le_nss(pessoa, pos);
                le_info_pessoal(pessoa, pos);
                le_info_numer(pessoa, pos);
                le_moradda(pessoa, pos);
                le_confidencial(pessoa, pos);
                break;
                
            case 'e': 
                printf("\nQual indice esta a pessoa (entre 0 e 49)");
                scanf(" %d", &pos);
                fflush(stdin);
                while (pos < 0 || pos > 49)
                {
                    printf("\nNumero invalido! Tente novamente\n");
                    scanf(" %d", &pos);
                    fflush(stdin);
                }
                pessoa[pos].I_PESSOAL.nome[0] = 0;
                pessoa[pos].SECRETO.num_serie = 0;
                break;
            
            
            case 's': ; break;
            default: break;
            pos = 0;
        }
        
    }
    
    printf("ADEUS!");
}

