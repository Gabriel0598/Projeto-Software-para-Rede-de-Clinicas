#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //Conversão de língua para português
    printf("\t\t\t\t\t\t\t\t\t\tTELA INICIAL");

    int Escolha_Tela_Desejada;

    Loop_Escolha_Tela:
    printf("\n\n\nTELAS DISPONÍVEIS: ");

    printf("\n\n\n1 - CADASTRO DE FUNCIONÁRIOS");
    printf("\n2 - CONSULTA DE FUNCIONÁRIOS");
    printf("\n3 - CADASTRO DE PACIENTES");
    printf("\n4 - CONSULTA DE PACIENTES");
    printf("\n5 - AGENDAMENTO DE EXAMES");
    printf("\n6 - CONSULTA DE EXAMES AGENDADOS");
    printf("\n7 - CADASTRAR PAGAMENTOS");
    printf("\n8 - CONSULTA DE PAGAMENTOS REGISTRADOS");
    printf("\n9 - LISTA DE CONVÊNIOS");
    printf("\n10 - ENCERRAR PROGRAMA");

    printf("\n\n\nDIGITE A OPÇÃO DESEJADA: ");
    scanf("%d", &Escolha_Tela_Desejada);

    switch(Escolha_Tela_Desejada)
    {
        case 1 :
        //Leva o programa para a tela do executável de cadastro de funcionários
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Cadastro_Funcionarios\\Main_1.exe\"");
            break;
        case 2 :
        //Leva o programa para a tela do executável de consulta de funcionários
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Tela_Inicial\\Main_1_R.exe\"");
            break;
        case 3 :
        //Leva o programa para a tela do executável de cadastro de pacientes
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Cadastro_Pacientes\\Main_2.exe\"");
            break;
        case 4 :
        //Leva o programa para a tela do executável de consulta de pacientes
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Tela_Inicial\\Main_3_R.exe\"");
        case 5 :
        //Leva o programa para a tela do executável de agendamento de exames
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Lista_Exames\\Main_3.exe\"");
            break;
        case 6 :
        //Leva o programa para a tela do executável de consulta de exames agendados
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Tela_Inicial\\Main_5_R.exe\"");
            break;
        case 7 :
        //Leva o programa para a tela do executável de cadastro de pagamentos
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Pagamentos\\Main_4.exe\"");
            break;
        case 8 :
        //Leva o programa para a tela do executável de consulta de pagamentos registrados
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Tela_Inicial\\Main_7_R.exe\"");
            break;
        case 9 :
        //Leva o programa para a tela do executável de lista de convênios
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Lista_Convenios\\Main_5.exe\"");
            break;
        case 10 :
        //Encerrar programa
        return 0;
            break;

        default :
        printf("\n\nVALOR INVÁLIDO");
            goto Loop_Escolha_Tela;
    }

    return (0);
}
