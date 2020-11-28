#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //Consulta de funcionários
    setlocale(LC_ALL, "Portuguese"); //Conversão de língua para português

    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Tela_Inicial\\Ficha_Funcionario.txt\"");
    printf("\n\t\t\t\t\t\t\t\t\tCONSULTA DE FUNCIONÁRIOS\n\n");
    printf("\t\t\t\t\t\t\t\t***DIGITE ENTER PARA RETORNAR AO MENU***\n\n\n\n");
    getch();
    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\UNIP\\2° Semestre\\PIM 2 Sem\\Código Fonte PIM\\Tela_Inicial\\Main_0.exe\"");
    return(0);
}
