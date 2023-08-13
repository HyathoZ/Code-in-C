#include <stdio.h>
#include <stdlib.h>
void main();
void option();
void sum_operation();
void subtract_operation();
void multiple_operation();
void division_operation();

    float first_number = 0; 
    float second_number = 0;
    float result = 0;

void main(){
    
    int option = 0;
    
    printf("\tDigite uma das opções abaixo:\n");
    printf("1-Soma\n2-Subtração\n3-Multiplicação\n4-Divisão\n\n");
    scanf("%d", &option);

    switch(option){
        case 1:
        sum_operation();
        break;
        case 2:
        subtract_operation();
        break;
        case 3:
        multiple_operation();
        break;
        case 4:
        division_operation();
        break;
        default:
        printf("Opção invalida!\n");
        main();
        break;
    }
}
void sum_operation(){
    
    printf("Digite o primeiro numero da sua operação: ");
    scanf("%f", &first_number);
    printf("Digite o segundo numero da sua operação: ");
    scanf("%f", &second_number);
        
    result = first_number + second_number;
    
    printf("\nRESULTADO: %.2f \n\n", result);
    option();
}

void subtract_operation(){
    
    printf("Digite o primeiro numero da sua operação: ");
    scanf("%f", &first_number);
    printf("Digite o segundo numero da sua operação: ");
    scanf("%f", &second_number);
        
    result = first_number - second_number;
    
    printf("\nRESULTADO: %.2f \n\n", result);
    option();
}

void multiple_operation(){
    
    printf("Digite o primeiro numero da sua operação: ");
    scanf("%f", &first_number);
    printf("Digite o segundo numero da sua operação: ");
    scanf("%f", &second_number);
        
    result = first_number * second_number;
    
    printf("\nRESULTADO: %.2f \n\n", result);
    option();
}

void division_operation(){
    
    printf("Digite o primeiro numero da sua operação: ");
    scanf("%f", &first_number);
    printf("Digite o segundo numero da sua operação: ");
    scanf("%f", &second_number);
        
    result = first_number / second_number;
    
    printf("\nRESULTADO: %.2f \n\n", result);
    option();
}

void option(){
    
    int continue_or_exit = 0;
    
    first_number = 0; 
    second_number = 0;
    result = 0;
    
    printf("\tDigite uma das duas opções abaixo:\n\n");
    printf("1-Continuar na calculadora\t2-Sair da calculadora: ");
    scanf("%d", &continue_or_exit);
    
    switch(continue_or_exit){
        case 1:
        system("clear"); //in windows instead of 'clear' is 'cls'
        main();
        break;
        case 2:
        exit(0);
        break;
        default:
        printf("Digite uma opção valida!\n");
        option();
        break;
    }
}