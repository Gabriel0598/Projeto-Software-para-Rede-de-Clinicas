#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //Consulta de pagamentos realizados
    setlocale(LC_ALL, "Portuguese"); //Convers�o de l�ngua para portugu�s

    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\C�digo Fonte PIM\\Tela_Inicial\\Lista_de_Pagamentos.txt\"");
    printf("\n\t\t\t\t\t\t\t\t\tCONSULTA DE PAGAMENTOS REALIZADOS\n\n");
    printf("\t\t\t\t\t\t\t\t   ***DIGITE ENTER PARA RETORNAR AO MENU***\n\n\n\n");
    getch();
    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\UNIP\\2� Semestre\\Pim 2 Sem\\C�digo Fonte PIM\\Tela_Inicial\\Main_0.exe\"");
    return(0);
}
