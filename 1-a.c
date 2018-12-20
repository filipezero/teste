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

struct carro
{
    char Nome[100];
    int Ano, Pessoas;
    char Combustivel;
    float Preco, Potencia;
    

} Opel, Renault;

void Ler(struct carro *ptr)
{
    printf("\nNome: "); fgets(ptr->Nome, sizeof(ptr),stdin); fflush(stdin);
    printf("\nAno: "); scanf(" %d", &ptr->Ano);
    printf("\nEspacos para pessoas: "); scanf(" %d", &ptr->Pessoas);
    printf("\nTipo de combustivel (g = gasolina / o = gasoleo / e = eletrico): "); scanf(" %c", &ptr->Combustivel);
    printf("\nPotencia (CV): "); scanf(" %f", &ptr->Preco);
    printf("\nPreco: "); scanf(" %f", &ptr->Potencia);
    
}

void Mostrar(struct carro x)
{
    printf("\nNome: %s\n", x.Nome);
    printf("\nAno: %d\n", x.Ano);
    printf("\nEspacos para: %d pessoas\n", x.Pessoas);
    printf("\nTipo de combustivel (g = gasolina / o = gasoleo / e = eletrico): %c\n", x.Combustivel);
    printf("\nPotencia (CV): %.2f CV\n", x.Potencia);
    printf("\nPreco: %.2f €\n", x.Preco);
    
}

int main() 
{
    struct carro Opel = {"Vectra", 2008, 5, 'g', 85.7, 13000.00};
    struct carro Renault = {"Duster", 2017, 4, 'o', 150.7, 54000.00};
    Mostrar(Opel);
    puts("\n");
    Ler(&Opel);
    puts("\n");
    Mostrar(Opel);
    puts("\n");
    Mostrar(Renault);
    
}

