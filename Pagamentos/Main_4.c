#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(void)
{
    FILE *ponteiro_arquivo;

    ponteiro_arquivo = fopen("Lista_de_Pagamentos.txt", "a");

    if(ponteiro_arquivo == NULL)
    {
        printf("\n\nErro na abertura do arquivo!");
        return 1;
    }

    setlocale(LC_ALL,"Portuguese");

    fprintf(ponteiro_arquivo, "\t\t\t\t\t\t\t\t\t      PAGAMENTOS\n");
    printf("\t\t\t\t\t\t\t\tCONTROLE DE PAGAMENTOS - ESPECIALIDADES");

    //NOME PACIENTE
    char Nome_Paciente[50];

    printf ("\n\n\n\nNOME COMPLETO: ");
    scanf(" %[^\n]s", &Nome_Paciente);
    fprintf(ponteiro_arquivo, "\n\nNOME COMPLETO: %s", Nome_Paciente);

    //CPF CADASTRO DE PESSOAS FISICAS
    char CPF_Paciente [14];

    printf ("DIGITE O CPF (INCLUINDO PONTOS E TRA�OS):  ");
    scanf (" %[^\n]s", &CPF_Paciente);
    fprintf (ponteiro_arquivo, "\nCPF:  %s", CPF_Paciente);
    //printf ("\tCPF: %s", CPF_Paciente);

    int Escolha_Especialidades;
    float Valor_especialidade;

    printf("\n\nUTILIZE O NUMERO CORRESPONDENTE A ESPECIALIDADE DESEJADA: ");

    printf("\n\n1 - AUDIOMETRIA");
    printf("\n2 - COLONOSCOPIA");
    printf("\n3 - ECG - ELETROCARDIOGRAMA");
    printf("\n4 - EEC - ELETROENCEFALOGRAMA");
    printf("\n5 - ENDOSCOPIA DIGESTIVA");
    printf("\n6 - EXAMES LABORATORIAIS");
    printf("\n7 - EXAMES TOXIC�LOGICOS");
    printf("\n8 - HOLTER");
    printf("\n9 - MAMOGRAFIA DIGITAL");
    printf("\n10 - NASOFIBROLARINGOSCOPIA");
    printf("\n11 - RESSONANCIA MAGNETICA");
    printf("\n12 - RAIO X");
    printf("\n13 - TESTE ERGOM�TRICO");
    printf("\n14 - TOMOGRAFIA COMPUTADORIZADA");
    printf("\n15 - ULTRASSONOGRAFIA");

    loop_Escolha_Especialidades:

    printf("\n\nDIGITE O VALOR ENTRE 1 e 15: ");
    scanf("%d", &Escolha_Especialidades);
    //fprintf(ponteiro_arquivo,"DIGITE O VALOR ENTRE 1 e 15: %i", Escolha_Especialidades);

    switch (Escolha_Especialidades)
    {
    case 1:
        fprintf(ponteiro_arquivo,"\n1 - AUDIOMETRIA - R$ 100,00");
        printf("\n1 - AUDIOMETRIA - R$ 100,00");
        Valor_especialidade = 100.00;
        break;
    case 2:
        fprintf(ponteiro_arquivo,"\n2 - COLONOSCOPIA - R$ 500,00");
        printf("\n2 - COLONOSCOPIA - R$ 500,00");
        Valor_especialidade = 500.00;
        break;
    case 3:
        fprintf(ponteiro_arquivo,"\n3 - ECG - ELETROCARDIOGRAMA - R$ 120,00");
        printf("\n3 - ECG - ELETROCARDIOGRAMA - R$ 120,00");
        Valor_especialidade = 120.00;
        break;
    case 4:
        fprintf(ponteiro_arquivo,"\n4 - EEC - ELETROENCEFALOGRAMA - R$ 350,00");
        printf("\n4 - EEC - ELETROENCEFALOGRAMA - R$ 350,00");
        Valor_especialidade = 350.00;
        break;
    case 5:
        fprintf(ponteiro_arquivo,"\n5 - ENDOSCOPIA DIGESTIVA - R$ 500,00");
        printf("\n5 - ENDOSCOPIA DIGESTIVA - R$ 500,00");
        Valor_especialidade = 500.00;
        break;
    case 6:
        fprintf(ponteiro_arquivo,"\n6 - EXAMES LABORATORIAIS - R$ 60,00");
        printf("\n6 - EXAMES LABORATORIAIS - R$ 60,00");
        Valor_especialidade = 60.00;
        break;
    case 7:
        fprintf(ponteiro_arquivo,"\n7 - EXAMES TOXICOLOGICOS - R$ 180,00");
        printf("\n7 - EXAMES TOXICOLOGICOS - R$ 180,00");
        Valor_especialidade = 180.00;
        break;
    case 8:
        fprintf(ponteiro_arquivo,"\n8 - HOLTER - R$ 200,00");
        printf("\n8 - HOLTER - R$ 200,00");
        Valor_especialidade = 200.00;
        break;
    case 9:
        fprintf(ponteiro_arquivo,"\n9 - MAMOGRAFIA DIGITAL - R$ 150,00");
        printf("\n9 - MAMOGRAFIA DIGITAL - R$ 150,00");
        Valor_especialidade = 150.00;
        break;
    case 10:
        fprintf(ponteiro_arquivo,"\n10 - NASOFIBROLARINGOSCOPIA - R$ 250,00");
        printf("\n10 - NASOFIBROLARINGOSCOPIA - R$ 250,00");
        Valor_especialidade = 250.00;
        break;
    case 11:
        fprintf(ponteiro_arquivo,"\n11 - RESSONANCIA MAGNETICA - R$ 1200,00");
        printf("\n11 - RESSONANCIA MAGNETICA - R$ 1200,00");
        Valor_especialidade = 1200.00;
        break;
    case 12:
        fprintf(ponteiro_arquivo,"\n12 - RAIO X - R$ 60,00");
        printf("\n12 - RAIO X - R$ 60,00");
        Valor_especialidade = 60.00;
        break;
    case 13:
        fprintf(ponteiro_arquivo,"\n13 - TESTE ERGOMETRICO - R$ 250,00");
        printf("\n13 - TESTE ERGOMETRICO - R$ 250,00");
        Valor_especialidade = 250.00;
        break;
    case 14:
        fprintf(ponteiro_arquivo,"\n14 - TOMOGRAFIA COMPUTADORIZADA - R$ 500,00");
        printf("\n14 - TOMOGRAFIA COMPUTADORIZADA - R$ 500,00");
        Valor_especialidade = 500.00;
        break;
    case 15:
        fprintf(ponteiro_arquivo,"\n15 - ULTRASSONOGRAFIA - R$ 350,00");
        printf("\n15 - ULTRASSONOGRAFIA - R$ 350,00");
        Valor_especialidade = 350.00;
        break;

    default:
        printf("\nVALOR INVALIDO");
        goto loop_Escolha_Especialidades;
    }

    int Condicao_Pagamento;

    fprintf(ponteiro_arquivo,"\n\n\t\t\t\t\t\t\t\t\tCONDI��O DE PAGAMENTO\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\tCONDI��O DE PAGAMENTO\n\n");

    printf("\n\nUTILIZE O NUMERO CORRESPONDENTE AO PAGAMENTO DESEJADO: ");

    printf("\n\n1 - CART�O DE DEBITO");
    printf("\n2 - PARCELAMENTO EM DUAS VEZES");
    printf("\n3 - BOLETO BANC�RIO");

    float metade_valor_especialidade = Valor_especialidade / 2;

    loop_escolha_cond_pagamento:

    printf("\n\nDIGITE O VALOR ENTRE 1 e 3: ");
    scanf("%d", &Condicao_Pagamento);
    //fprintf(ponteiro_arquivo,"DIGITE O VALOR ENTRE 1 e 3: %i", Condicao_Pagamento);

    switch (Condicao_Pagamento)
    {
    case 1:
        fprintf(ponteiro_arquivo,"\nVALOR CARTAO DEBITO = %.2f %f", Valor_especialidade);
        printf("\nVALOR CARTAO DEBITO = %.2f", Valor_especialidade);
        break;
    case 2:
        fprintf(ponteiro_arquivo,"\nVALOR PARCELADO EM DUAS VEZES = 2 X %.2f %f", metade_valor_especialidade);
        printf("\nVALOR PARCELADO EM DUAS VEZES = 2 X %.2f", metade_valor_especialidade);
        break;
    case 3:
        fprintf(ponteiro_arquivo,"\nVALOR BOLETO BANCARIO = %.2f %f", Valor_especialidade);
        printf("\nVALOR BOLETO BANCARIO = %.2f ", Valor_especialidade);
        break;

    default:
        printf("\nCONDICAO DE PAGAMENTO INEXISTENTE");
        goto loop_escolha_cond_pagamento;
    }

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLU�DO***\n\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLU�DO***\n");

    fclose(ponteiro_arquivo);

    printf("\n\t\t\t\t\t\t\t\t***DIGITE ENTER PARA RETORNAR AO MENU***\n\n\n\n");
    getch();
    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\C�digo Fonte PIM\\Tela_Inicial\\Main_0.exe\"");

    return(0);
}
