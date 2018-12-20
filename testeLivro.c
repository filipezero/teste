/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
typedef struct{int Dia, Mes, Ano;} DATA;

typedef struct pessoa
{
    char Nome[100];
    int Idade;
    float Salario;
    DATA Nasc;

} PESSOA;

void Ler(PESSOA *ptr)
{
    printf("Qual o Nome: "); fgets(ptr->Nome, sizeof(ptr),stdin); fflush(stdin);
    printf("Qual a Idade: "); scanf(" %d", &ptr->Idade);
    printf("Qual o Salario: "); scanf(" %f", &ptr->Salario);
    printf("Qual a data de nascimento: "); 
    scanf(" %d %d %d", &ptr->Nasc.Dia, &ptr->Nasc.Mes, &ptr->Nasc.Ano);
}

void Mostrar(struct pessoa x)
{
    printf("\nNome: %s\n", x.Nome);
    printf("\nIdade: %d\n", x.Idade);
    printf("\nSalario: %.2f\n", x.Salario);
    printf("\nDt. Nascimento: %d %d %d\n", x.Nasc.Dia, x.Nasc.Mes, x.Nasc.Ano);
}

int main() 
{
    struct pessoa p = {"Carlos", 23, 12345.67,{23,5,1954}};
    struct pessoa a = {"Maria", 35, 120.67,{25,6,1970}};
    Mostrar(p);
    puts("\n");
    Ler(&a);
    puts("\n");
    Mostrar(a);
    
}



