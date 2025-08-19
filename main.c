/****************************************************************************** 

BEE 1134
https://judge.beecrowd.com/pt/problems/view/1134

*******************************************************************************/


#include <stdio.h>

int main()
{
    int opcao;
    int alcool = 0, diesel = 0, gasoline = 0;
    
    do {    
        printf("\n Escolha o tipo de combustível de sua preferência conforme o número: 1. Alcohol 2. Gasoline 3. Diesel 4. End\n");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1:
                alcool++;
                break;
            case 2:
                gasoline++;
                break; 
            case 3:
                diesel++;
                break;
            case 4:
                printf("\nMUITO OBRIGADO!\n");
                printf("Álcool: %d\n", alcool);
                printf("Gasolina: %d\n", gasoline);
                printf("Diesel: %d\n", diesel);
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }   
        
    } while(1);
    
    return 0;
}

