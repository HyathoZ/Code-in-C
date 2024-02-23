#include <stdio.h>
#include <time.h>
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

    char option = ' ';

    printf("\tDigite uma das opcoes abaixo:\n");
    printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n0-Sair do programa\n\n");
    scanf("%c", &option);
    system("cls"); //in windows instead of 'clear' is 'cls'

    switch(option){
        case '1':
        sum_operation();
        break;
        case '2':
        subtract_operation();
        break;
        case '3':
        multiple_operation();
        break;
        case '4':
        division_operation();
        break;
        case '0':
           return option = 0;
        break;
        default:
        printf("Opcao invalida!\n");
        system("sleep 1");
        system("cls"); //in windows instead of 'clear' is 'cls'
        main();
        break;
    }
}
void sum_operation(){

    printf("Digite o primeiro numero da sua operacao: ");
    scanf("%f", &first_number);
    printf("Digite o segundo numero da sua operacao: ");
    scanf("%f", &second_number);

    result = first_number + second_number;

    printf("\nRESULTADO: %.2f \n\n", result);
    option();
}

void subtract_operation(){

    printf("Digite o primeiro numero da sua operacao: ");
    scanf("%f", &first_number);
    printf("Digite o segundo numero da sua operacao: ");
    scanf("%f", &second_number);

    result = first_number - second_number;

    printf("\nRESULTADO: %.2f \n\n", result);
    option();
}

void multiple_operation(){

    printf("Digite o primeiro numero da sua operacao: ");
    scanf("%f", &first_number);
    printf("Digite o segundo numero da sua operacao: ");
    scanf("%f", &second_number);

    result = first_number * second_number;

    printf("\nRESULTADO: %.2f \n\n", result);
    option();
}

void division_operation(){

    printf("Digite o primeiro numero da sua operacao: ");
    scanf("%f", &first_number);
    printf("Digite o segundo numero da sua operacao: ");
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

    printf("\tDigite uma das duas opcoes abaixo:\n\n");
    printf("1-Continuar na calculadora\t2-Sair da calculadora: ");
    scanf("%d", &continue_or_exit);

    switch(continue_or_exit){
        case 1:
        system("cls"); //in windows instead of 'clear' is 'cls'
        main();
        break;
        case 2:
        exit(0);
        break;
        default:
        printf("Digite uma opcao valida!\n");
        option();
        break;
    }
}
