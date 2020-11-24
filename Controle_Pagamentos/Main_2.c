#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(void)
{

    FILE *pagamento_arquivo;

    pagamento_arquivo = fopen("Lista_De_Pagamentos.txt", "a");

    if(pagamento_arquivo == NULL)
    {
        printf("\n\nErro na abertura do arquivo!");
    }

    setlocale(LC_ALL,"Portuguese");

    fprintf(pagamento_arquivo, "\t\t\t\t\t\t\t\t ESPECIALIDADES\n\n");
    printf("\t\t\t\t\t\t\t\tCONTROLE DE PAGAMENTOS - ESPECIALIDADES");


    int Escolha_Especialidades;
    float Valor_especialidade;

    printf("\n\n\nUTILIZE O NUMERO CORRESPONDENTE A ESPECIALIDADE DESEJADA: ");

    printf("\n\n1 - AUDIOMETRIA");
    printf("\n2 - COLONOSCOPIA");
    printf("\n3 - ECG - ELETROCARDIOGRAMA");
    printf("\n4 - EEC - ELETROENCEFALOGRAMA");
    printf("\n5 - ENDOSCOPIA DIGESTIVA");
    printf("\n6 - EXAMES LABORATORIAIS");
    printf("\n7 - EXAMES TOXICÓLOGICOS");
    printf("\n8 - HOLTER");
    printf("\n9 - MAMOGRAFIA DIGITAL");
    printf("\n10 - NASOFIBROLARINGOSCOPIA");
    printf("\n11 - RESSONANCIA MAGNETICA");
    printf("\n12 - RAIO X");
    printf("\n13 - TESTE ERGOMÉTRICO");
    printf("\n14 - TOMOGRAFIA COMPUTADORIZADA");
    printf("\n15 - ULTRASSONOGRAFIA");

    loop_Escolha_Especialidades:

    printf("\n\nDIGITE O VALOR ENTRE 1 e 15: ");
    scanf("%d", &Escolha_Especialidades);
    fprintf(pagamento_arquivo,"DIGITE O VALOR ENTRE 1 e 15: %s", &Escolha_Especialidades);

    switch (Escolha_Especialidades)
    {
    case 1:
        fprintf(pagamento_arquivo,"\n1 - AUDIOMETRIA - R$ 100,00");
        printf("\n1 - AUDIOMETRIA - R$ 100,00");
        Valor_especialidade = 100.00;
        break;
    case 2:
        fprintf(pagamento_arquivo,"\n2 - COLONOSCOPIA - R$ 500,00");
        printf("\n2 - COLONOSCOPIA - R$ 500,00");
        Valor_especialidade = 500.00;
        break;
    case 3:
        fprintf(pagamento_arquivo,"\n3 - ECG - ELETROCARDIOGRAMA - R$ 120,00");
        printf("\n3 - ECG - ELETROCARDIOGRAMA - R$ 120,00");
        Valor_especialidade = 120.00;
        break;
    case 4:
        fprintf(pagamento_arquivo,"\n4 - EEC - ELETROENCEFALOGRAMA - R$ 350,00");
        printf("\n4 - EEC - ELETROENCEFALOGRAMA - R$ 350,00");
        Valor_especialidade = 350.00;
        break;
    case 5:
        fprintf(pagamento_arquivo,"\n5 - ENDOSCOPIA DIGESTIVA - R$ 500,00");
        printf("\n5 - ENDOSCOPIA DIGESTIVA - R$ 500,00");
        Valor_especialidade = 500.00;
        break;
    case 6:
        fprintf(pagamento_arquivo,"\n6 - EXAMES LABORATORIAIS - R$ 60,00");
        printf("\n6 - EXAMES LABORATORIAIS - R$ 60,00");
        Valor_especialidade = 60.00;
        break;
    case 7:
        fprintf(pagamento_arquivo,"\n7 - EXAMES TOXICOLOGICOS - R$ 180,00");
        printf("\n7 - EXAMES TOXICOLOGICOS - R$ 180,00");
        Valor_especialidade = 180.00;
        break;
    case 8:
        fprintf(pagamento_arquivo,"\n8 - HOLTER - R$ 200,00");
        printf("\n8 - HOLTER - R$ 200,00");
        Valor_especialidade = 200.00;
        break;
    case 9:
        fprintf(pagamento_arquivo,"\n9 - MAMOGRAFIA DIGITAL - R$ 150,00");
        printf("\n9 - MAMOGRAFIA DIGITAL - R$ 150,00");
        Valor_especialidade = 150.00;
        break;
    case 10:
        fprintf(pagamento_arquivo,"\n10 - NASOFIBROLARINGOSCOPIA - R$ 250,00");
        printf("\n10 - NASOFIBROLARINGOSCOPIA - R$ 250,00");
        Valor_especialidade = 250.00;
        break;
    case 11:
        fprintf(pagamento_arquivo,"\n11 - RESSONANCIA MAGNETICA - R$ 1200,00");
        printf("\n11 - RESSONANCIA MAGNETICA - R$ 1200,00");
        Valor_especialidade = 1200.00;
        break;
    case 12:
        fprintf(pagamento_arquivo,"\n12 - RAIO X - R$ 60,00");
        printf("\n12 - RAIO X - R$ 60,00");
        Valor_especialidade = 60.00;
        break;
    case 13:
        fprintf(pagamento_arquivo,"\n13 - TESTE ERGOMETRICO - R$ 250,00");
        printf("\n13 - TESTE ERGOMETRICO - R$ 250,00");
        Valor_especialidade = 250.00;
        break;
    case 14:
        fprintf(pagamento_arquivo,"\n14 - TOMOGRAFIA COMPUTADORIZADA - R$ 500,00");
        printf("\n14 - TOMOGRAFIA COMPUTADORIZADA - R$ 500,00");
        Valor_especialidade = 500.00;
        break;
    case 15:
        fprintf(pagamento_arquivo,"\n15 - ULTRASSONOGRAFIA - R$ 350,00");
        printf("\n15 - ULTRASSONOGRAFIA - R$ 350,00");
        Valor_especialidade = 350.00;
        break;

    default:
        printf("\nVALOR INVALIDO");
        goto loop_Escolha_Especialidades;
    }


    int Condicao_Pagamento;

    fprintf(pagamento_arquivo,"\n\n\t\t\t\t\t\t\t\t\tCONDIÇÃO DE PAGAMENTO\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\tCONDIÇÃO DE PAGAMENTO\n\n");

    printf("\n\nUTILIZE O NUMERO CORRESPONDENTE AO PAGAMENTO DESEJADO: ");

    printf("\n\n1 - CARTÃO DE DEBITO");
    printf("\n2 - PARCELAMENTO EM DUAS VEZES");
    printf("\n3 - BOLETO BANCÁRIO");

    float metade_valor_especialidade = Valor_especialidade / 2;

    loop_escolha_cond_pagamento:

    printf("\n\nDIGITE O VALOR ENTRE 1 e 3: ");
    scanf("%d", &Condicao_Pagamento);
    fprintf(pagamento_arquivo,"DIGITE O VALOR ENTRE 1 e 3: %s", &Condicao_Pagamento);

    switch (Condicao_Pagamento)
    {
    case 1:
        fprintf(pagamento_arquivo,"\nVALOR CARTAO DEBITO = %.2f %s", Valor_especialidade);
        printf("\nVALOR CARTAO DEBITO = %.2f", Valor_especialidade);
        break;

    case 2:
        fprintf(pagamento_arquivo,"\nVALOR PARCELADO EM DUAS VEZES = 2 X %.2f %s", metade_valor_especialidade);
        printf("\nVALOR PARCELADO EM DUAS VEZES = 2 X %.2f", metade_valor_especialidade);
        break;

    case 3:
        fprintf(pagamento_arquivo,"\nVALOR BOLETO BANCARIO = %.2f %s", Valor_especialidade);
        printf("\nVALOR BOLETO BANCARIO = %.2f ", Valor_especialidade);
        break;

    default:
        printf("\nCONDICAO DE PAGAMENTO INEXISTENTE");
        goto loop_escolha_cond_pagamento;
    }

    fclose(pagamento_arquivo);

    fprintf(pagamento_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLUÍDO***\n\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLUÍDO***\n");

    return(0);
}

