#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    //Consulta de funcion�rios
    setlocale(LC_ALL, "Portuguese"); //Convers�o de l�ngua para portugu�s

    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\C�digo Fonte PIM\\Tela_Inicial\\Ficha_Funcionario.txt\"");
    printf("\n\t\t\t\t\t\t\t\t\tCONSULTA DE FUNCION�RIOS\n\n");
    printf("\t\t\t\t\t\t\t\t***DIGITE ENTER PARA RETORNAR AO MENU***\n\n\n\n");
    getch();
    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\UNIP\\2� Semestre\\PIM 2 Sem\\C�digo Fonte PIM\\Tela_Inicial\\Main_0.exe\"");
    return(0);
}
