#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese"); //Convers�o de l�ngua para portugu�s
    printf("\t\t\t\t\t\t\t\t\t\tTELA INICIAL");

    int Escolha_Tela_Desejada;

    Loop_Escolha_Tela:
    printf("\n\n\nTELAS DISPON�VEIS: ");

    printf("\n\n\n1 - CADASTRO DE FUNCION�RIOS");
    printf("\n2 - AGENDAMENTO DE EXAMES");
    printf("\n3 - CONTROLE DE PAGAMENTOS");

    printf("\n\n\nDIGITE A OP��O DESEJADA: ");
    scanf("%d", &Escolha_Tela_Desejada);

    switch(Escolha_Tela_Desejada)
    {
        case 1 :
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\C�digo Fonte PIM\\Cadastro_Funcionarios\\Main.exe\"");
            break;
        case 2 :
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\C�digo Fonte PIM\\Lista_Exames\\Main_3.exe\"");
            break;
        case 3 :
        system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\C�digo Fonte PIM\\Controle_Pagamentos\\Main_2.exe\"");
            break;
        default :
        printf("\n\nVALOR INV�LIDO");
            goto Loop_Escolha_Tela;
    }

    return (0);
}

