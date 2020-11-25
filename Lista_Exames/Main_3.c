#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main(void)
{
    /*
    Lista de Especialidades - Banco de dados

    Cria��o de especialidades
    */

    //PONTEIRO PARA SALVAR DADOS NO NOTEPAD
    FILE *ponteiro_arquivo;

    ponteiro_arquivo = fopen("Lista_De_Exames.txt", "a"); //ponteiro vai receber o resultado da abertura do arquivo "Lista_De_Exames" para grava��o "W";

    if (ponteiro_arquivo == NULL)
    {
        printf("\n\nErro na abertura do arquivo!");
        return 1;
    }
    //FECHAMENTO DE PONTEIRO

    setlocale(LC_ALL, "Portuguese"); //Convers�o de l�ngua para portugu�s

    fprintf (ponteiro_arquivo, "\t\t\t\t\t\t\t\t  AGENDAMENTO DE EXAMES"); //Para salvar no notepad, referenciado p/ ponteiro
    printf ("\t\t\t\t\t\t\t\t\tAGENDAMENTO DE EXAMES"); //Para exibir no programa

    char Nome_Paciente[100];
    printf("\n\n\n\nNome do Paciente: ");
    scanf(" %[^\n]s", &Nome_Paciente);
    fprintf(ponteiro_arquivo, "\n\n\nNome do Paciente: %s", Nome_Paciente);

    char CPF_Paciente[14];
    printf("N�MERO CPF DO PACIENTE (INCLUINDO PONTOS E TRA�OS): ");
    scanf("%s", &CPF_Paciente);
    fprintf(ponteiro_arquivo, "\nN CPF: %s", CPF_Paciente);

    int Escolha_Convenio;

    //Loop_Retorno_Escolha_Convenio: //*****
    printf("\n\nPOSSUI CONV�NIO M�DICO?");

    printf("\n1 - SIM");
    printf("\n2 - NAO");

    printf("\n\nDIGITE A OP��O DESEJADA: ");
    scanf(" %d", &Escolha_Convenio);

    if (Escolha_Convenio == 1)
    {
        int Selecao_Convenio;

        fprintf(ponteiro_arquivo, "\nConv�nio: ");
        printf("\n\nESCOLHA O CONV�NIO CORRESPONDENTE: ");

        printf("\n1 - ALLIANZ SA�DE") ;
        printf("\n2 - AMEPLAN SA�DE") ;
        printf("\n3 - AMIL") ;
        printf("\n4 - BIOVIDA SA�DE") ;
        printf("\n5 - BRADESCO SA�DE") ;
        printf("\n6 - CRUZ AZUL SA�DE") ;
        printf("\n7 - GS SA�DE") ;
        printf("\n8 - GOLDEN CROSS") ;
        printf("\n9 - NOTRE DAME INTERM�DICA") ;
        printf("\n10 - PLENA SA�DE") ;
        printf("\n11 - PORTO SEGURO SA�DE");
        printf("\n12 - SANTA HELENA") ;
        printf("\n13 - SAO CRISTOV�O") ;
        printf("\n14 - SOMPO SAUDE") ;
        printf("\n15 - SUL AM�RICA SAUDE") ;
        printf("\n16 - TRASMONTANO SA�DE") ;
        printf("\n17 - UNIHOSP SA�DE") ;
        printf("\n18 - UNIMED") ;

        Loop_Selecao_Convenio:
        printf("\n\nDIGITE O VALOR ENTRE 1 e 17: ");
        scanf(" %d", &Selecao_Convenio);

        switch(Selecao_Convenio)
        {
            case 1 :
                fprintf(ponteiro_arquivo, "ALLIANZ SA�DE");
                printf("\n1 - ALLIANZ SA�DE");
                break;
            case 2 :
                fprintf(ponteiro_arquivo, "AMEPLAN SA�DE");
                printf("\n2 - AMEPLAN SA�DE");
                break;
            case 3 :
                fprintf(ponteiro_arquivo, "AMIL");
                printf("\n3 - AMIL");
                break;
            case 4 :
                fprintf(ponteiro_arquivo, "BIOVIDA SA�DE");
                printf("\n4 - BIOVIDA SA�DE");
                break;
            case 5 :
                fprintf(ponteiro_arquivo, "BRADESCO SA�DE");
                printf("\n5 - BRADESCO SA�DE");
                break;
            case 6 :
                fprintf(ponteiro_arquivo, "CRUZ AZUL SA�DE");
                printf("\n6 - CRUZ AZUL SA�DE");
                break;
            case 7 :
                fprintf(ponteiro_arquivo, "GS SA�DE");
                printf("\n1 - GS SA�DE");
                break;
            case 8 :
                fprintf(ponteiro_arquivo, "GOLDEN CROSS");
                printf("\n1 - GOLDEN CROSS");
                break;
            case 9 :
                fprintf(ponteiro_arquivo, "NOTREDAME INTERM�DICA");
                printf("\n1 - NOTREDAME INTERM�DICA");
                break;
            case 10 :
                fprintf(ponteiro_arquivo, "PLENA SA�DE");
                printf("\n1 - PLENA SA�DE");
                break;
            case 11 :
                fprintf(ponteiro_arquivo, "PORTO SEGURO SA�DE");
                printf("\n1 - PORTO SEGURO SA�DE");
                break;
            case 12 :
                fprintf(ponteiro_arquivo, "SANTA HELENA");
                printf("\n1 - SANTA HELENA");
                break;
            case 13 :
                fprintf(ponteiro_arquivo, "S�O CRIST�V�O");
                printf("\n1 - S�O CRIST�V�O");
                break;
            case 14 :
                fprintf(ponteiro_arquivo, "SOMPO SA�DE");
                printf("\n1 - SOMPO SA�DE");
                break;
            case 15 :
                fprintf(ponteiro_arquivo, "SUL AM�RICA SA�DE");
                printf("\n1 - SUL AM�RICA SA�DE");
                break;
            case 16 :
                fprintf(ponteiro_arquivo, "TRANSMONTANO SA�DE");
                printf("\n1 - TRANSMONTANO SA�DE");
                break;
            case 17 :
                fprintf(ponteiro_arquivo, "UNIHOSP SA�DE");
                printf("\n1 - UNIHOSP SA�DE");
                break;
            case 18 :
                fprintf(ponteiro_arquivo, "UNIMED");
                printf("\n1 - UNIMED");
                break;
            default :
                printf("\n\nVALOR INV�LIDO");
                goto Loop_Selecao_Convenio;
        }

        char Num_Carteira[50];
        printf("\n\nN�MERO DA CARTEIRA DO CONV�NIO (INCLUINDO PONTOS, TRA�OS, ETC): ");
        scanf(" %[^\n]s", Num_Carteira);
        fprintf(ponteiro_arquivo, "\nN�mero da Carteira do Plano: %s", Num_Carteira);
    }

    if (Escolha_Convenio == 2)
    {
        printf("\n\nN�O POSSUI!");
    }



    //Lista de Especialidades
    int Escolha_Especialidade_Exame;
    fprintf(ponteiro_arquivo, "Exame selecionado: ");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tESPECIALIDADE");
    printf("\n\n\nUTILIZE O N�MERO CORRESPONDENTE A ESPECIALIDADE QUE DESEJA REALIZAR: ");

    printf("\n\n1 - AUDIOMETRIA: R$ 100,00");
    printf("\n2 - COLONOSCOPIA: R$ 500,00");
    printf("\n3 - (ECG) ELETROCARDIOGRAMA: R$ 120,00");
    printf("\n4 - (EEC) ELETROENCEFALOGRAMA: R$ 120,00");
    printf("\n5 - ENDOSCOPIA DIGESTIVA: R$ 500,00");
    printf("\n6 - EXAMES LABORATORIAIS (HEMOGRAMA COMPLETO): R$ 60,00");
    printf("\n7 - EXAMES TOXICOL�GICOS: R$ 180,00");
    printf("\n8 - HOLTER: R$ 200,00");
    printf("\n9 - MAMOGRAFIA DIGITAL: R$ 150,00");
    printf("\n10 - NASOFIBROLARINGOSCOPIA: R$ 250,00");
    printf("\n11 - RESSON�NCIA MAGN�TICA: R$ 1.200,00");
    printf("\n12 - RADIOGRAFIA (RAIO X COMPLETO): R$ 60,00");
    printf("\n13 - TESTE ERGOM�TRICO: R$ 250,00");
    printf("\n14 - TOMOGRAFIA COMPUTADORIZADA: R$ 500,00");
    printf("\n15 - ULTRASSONOGRAFIA: R$ 350,00");

    loop_tipo_de_especialidade:
    printf("\n\nDIGITE O VALOR ENTRE 1 E 15: ");
    scanf(" %d", &Escolha_Especialidade_Exame);

    switch(Escolha_Especialidade_Exame)
    {
        case 1 :
        fprintf(ponteiro_arquivo, "AUDIOMETRIA");
        printf("\n- SELECIONADO AUDIOMETRIA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: RECOMENDA-SE BOA NOITE DE DESCANSO/ EXAME REALIZADO POR FONOAUDI�LIGO");
        printf("\nINSTRU��ES: RECOMENDA-SE BOA NOITE DE DESCANSO/ EXAME REALIZADO POR FONOAUDI�LIGO");
            break;
        case 2 :
        fprintf(ponteiro_arquivo, "COLONOSCOPIA");
        printf("\n- SELECIONADO COLONOSCOPIA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: N�O COMER FIBRAS COMO FRUTAS, LEGUMES, VERDURES E CEREAIS/ BEBER MUITO L�QUIDO (EM TORNO DE 8 COPOS DE �GUA POR DIA)");
        printf("\nINSTRU��ES: N�O COMER FIBRAS COMO FRUTAS, LEGUMES, VERDURES E CEREAIS/ BEBER MUITO L�QUIDO (EM TORNO DE 8 COPOS DE �GUA POR DIA)");
            break;
        case 3 :
        fprintf(ponteiro_arquivo, "ECG - ELETROCARDIOGRAMA");
        printf("\n- SELECIONADO ECG - ELETROCARDIOGRAMA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: TRAZER PEDIDO M�DICO/ MULHERES: USAR TOP ESPORTIVO OU SUTI� SEM ARAME");
        printf("\nINSTRU��ES: INSTRU��ES: TRAZER PEDIDO M�DICO/ MULHERES: USAR TOP ESPORTIVO OU SUTI� SEM ARAME");
            break;
        case 4 :
        fprintf(ponteiro_arquivo, "EEC - ELETROENCEFALOGRAMA");
        printf("\n- SELECIONADO EEC - ELETROENCEFALOGRAMA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: RECOMENDA-SE LAVAR BEM OS CABELOS NO DIA ANTERIOR/ NO MOMENTO DO EXAME CABELOS DEVEM ESTAR SECOS/ N�O UTILIZAR COSM�TICO NO CABELO (GEL, LAQU�, ETC)");
        printf("\nINSTRU��ES: RECOMENDA-SE LAVAR BEM OS CABELOS NO DIA ANTERIOR/ NO MOMENTO DO EXAME CABELOS DEVEM ESTAR SECOS/ N�O UTILIZAR COSM�TICO NO CABELO (GEL, LAQU�, ETC)");
            break;
        case 5 :
        fprintf(ponteiro_arquivo, "ENDOSCOPIA DIGESTIVA");
        printf("\n- SELECIONADO ENDOSCOPIA DIGESTIVA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: JEJUM DE 12 HORAS/ N�O COMER CARNE VERMELHA NO DIA ANTERIOR/ DIETA LEVE ANTERIORMENTE");
        printf("\nINSTRU��ES: JEJUM DE 12 HORAS/ N�O COMER CARNE VERMELHA NO DIA ANTERIOR/ DIETA LEVE ANTERIORMENTE");
            break;
        case 6 :
        fprintf(ponteiro_arquivo, "EXAMES LABORATORIAIS");
        printf("\n- SELECIONADO EXAMES LABORATORIAIS");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: JEJUM DE 8 HORAS/ N�O CONSUMIR BEBIDA ALCO�LICA 48 HORAS ANTES/ N�O CONSUMIR CAF�/ N�O FUMAR/ EVITAR EXERC�CIOS F�SICOS INTENSOS");
        printf("\nINSTRU��ES: JEJUM DE 8 HORAS/ N�O CONSUMIR BEBIDA ALCO�LICA 48 HORAS ANTES/ N�O CONSUMIR CAF�/ N�O FUMAR/ EVITAR EXERC�CIOS F�SICOS INTENSOS");
            break;
        case 7 :
        fprintf(ponteiro_arquivo, "EXAMES TOXICOL�GICOS");
        printf("\n- SELECIONADO EXAMES TOXICOLOGICOS");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: RECOMENDA-SE MANTER CABELOS SECOS");
        printf("\nINSTRU��ES: RECOMENDA-SE MANTER CABELOS SECOS");
            break;
        case 8 :
        fprintf(ponteiro_arquivo, "HOLTER");
        printf("\n- SELECIONADO HOLTER");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: TOMAR BANHO ANTERIORMENTE/ EVITAR ALIMENTOS E BEBIDAS ESTIMULANTES (CAF�, CH�, ETC)/ EVITAR APLICAR CREMES OU POMADAS NA REGI�O DO PEITO");
        printf("\nINSTRU��ES: TOMAR BANHO ANTERIORMENTE/ EVITAR ALIMENTOS E BEBIDAS ESTIMULANTES (CAF�, CH�, ETC)/ EVITAR APLICAR CREMES OU POMADAS NA REGI�O DO PEITO");
            break;
        case 9 :
        fprintf(ponteiro_arquivo, "MAMOGRAFIA DIGITAL");
        printf("\n- SELECIONADO MAMOGRAFIA DIGITAL");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: RECOMENDA-SE REALIZAR EXAME UMA SEMANA AP�S A MENSTRUA��O/ EVITAR ALIMENTOS E BEBIDAS ESTIMULANTES (CAF�, CH�, ETC)");
        printf("\nINSTRU��ES: RECOMENDA-SE REALIZAR EXAME UMA SEMANA AP�S A MENSTRUA��O/ EVITAR ALIMENTOS E BEBIDAS ESTIMULANTES (CAF�, CH�, ETC)");
            break;
        case 10 :
        fprintf(ponteiro_arquivo, "NASOFIBROLARINGOSCOPIA");
        printf("\n- SELECIONADO NASOFIBROLARINGOSCOPIA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: RECOMENDA-SE JEJUM ABSOLUTO 2 HORAS ANTES DO EXAME");
        printf("\nINSTRU��ES: RECOMENDA-SE JEJUM ABSOLUTO 2 HORAS ANTES DO EXAME");
            break;
        case 11 :
        fprintf(ponteiro_arquivo, "RESSON�NCIA MAGN�TICA");
        printf("\n- SELECIONADO RESSON�NCIA MAGN�TICA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: RECOMENDA-SE JEJUM ABSOLUTO 4 HORAS ANTES DO EXAME/ IR AO BANHEIRO ANTES DO IN�CIO DO PROCEDIMENTO");
        printf("\nINSTRU��ES: RECOMENDA-SE JEJUM ABSOLUTO 4 HORAS ANTES DO EXAME/ IR AO BANHEIRO ANTES DO IN�CIO DO PROCEDIMENTO");
            break;
        case 12 :
        fprintf(ponteiro_arquivo, "RAIO X");
        printf("\n- SELECIONADO RAIO X");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: CONTRAINDICADO PARA GESTANTES");
        printf("\nINSTRU��ES: CONTRAINDICADO PARA GESTANTES");
            break;
        case 13 :
        fprintf(ponteiro_arquivo, "TESTE ERGOM�TRICO");
        printf("\n- SELECIONADO TESTE ERGOM�TRICO");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: TRAJAR ROUPAS CONFORT�VEIS/ N�O FUMAR 2 HORAS ANTES E 2 HORAS AP�S O EXAME/ SUSPENS�O DE MEDICA��O A CRIT�RIO DO M�DICO");
        printf("\nINSTRU��ES: TRAJAR ROUPAS CONFORT�VEIS/ N�O FUMAR 2 HORAS ANTES E 2 HORAS AP�S O EXAME/ SUSPENS�O DE MEDICA��O A CRIT�RIO DO M�DICO");
            break;
        case 14 :
        fprintf(ponteiro_arquivo, "TOMOGRAFIA COMPUTADORIZADA");
        printf("\n- SELECIONADO TOMOGRAFIA COMPUTADORIZADA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: RECOMENDA-SE JEJUM ABSOLUTO DE 6 HORAS ANTES DO EXAME");
        printf("\nINSTRU��ES: RECOMENDA-SE JEJUM ABSOLUTO DE 6 HORAS ANTES DO EXAME");
            break;
        case 15 :
        fprintf(ponteiro_arquivo, "ULTRASSONOGRAFIA");
        printf("\n- SELECIONADO ULTRASSONOGRAFIA");
        fprintf(ponteiro_arquivo, "\nINSTRU��ES: RECOMENDA-SE JEJUM ABSOLUTO DE 8 HORAS ANTES DO EXAME/ RETER URINA POR 2 HORAS ANTES/ INSERIR 60 GOTAS DE FLAGASS EM 2 HORAS ANTES DO PROCEDIMENTO");
        printf("\nINSTRU��ES: RECOMENDA-SE JEJUM ABSOLUTO DE 8 HORAS ANTES DO EXAME/ RETER URINA POR 2 HORAS ANTES/ INSERIR 60 GOTAS DE FLAGASS EM 2 HORAS ANTES DO PROCEDIMENTO");
            break;
        default :
        printf("\nVALOR INV�LIDO");
            goto loop_tipo_de_especialidade; //Looping para levar o usu�rio de volta a sele��o de n�mero, caso digitar incorreto!
    }

    //Nome do funcion�rio
    char Nome_Profissional[100];
    printf("\n\nPROFISSIONAL A REALIZAR O EXAME (M�DICO/ T�CNICO/ ENFERMEIRO): ");
    scanf(" %[^\n]s", &Nome_Profissional);
    fprintf(ponteiro_arquivo, "\n\nPROFISSIONAL A REALIZAR O EXAME (M�DICO/ T�CNICO/ ENFERMEIRO): ", Nome_Profissional);

    //Matr�cula
    int Matricula_Funcionario;
    printf("MATR�CULA DO FUNCION�RIO: ");
    scanf("%d", &Matricula_Funcionario);
    fprintf(ponteiro_arquivo, "\nMATR�CULA: %d", Matricula_Funcionario);

    //Data do Exame
    int Dia_Exame;
    int Mes_Exame;
    int Ano_Exame;

    printf("\n\n\t\t\t\t\t\t\t\t\tAGENDAMENTO DO EXAME");

    printf("\n\n\nDIA: ");
    scanf("%d", &Dia_Exame);

    printf("M�S: ");
    scanf("%d", &Mes_Exame);

    printf("ANO: ");
    scanf("%d", &Ano_Exame);

    fprintf(ponteiro_arquivo, "\nDATA DE AGENDAMENTO: %02d/ %02d/ %d", Dia_Exame, Mes_Exame, Ano_Exame);
    printf("\nDATA DE AGENDAMENTO: %02d/ %02d/ %d", Dia_Exame, Mes_Exame, Ano_Exame);

    printf("\n\n\n***INFORME AO PACIENTE PARA TRAZER RG E CARTEIRA DO CONV�NIO SE NECESS�RIO/ COMPARECER COM 15 MINUTOS DE ANTECED�NCIA/ MENORES DEVEM ESTAR ACOMPANHADOS DO RESPONS�VEL***");

    //FINALIZA��O

    fprintf(ponteiro_arquivo, "\n\n\t\t\t\t\t\t\t\t***REGISTRO CONCLU�DO***\n\n\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLU�DO***\n");

    fclose(ponteiro_arquivo);

    printf("\n\t\t\t\t\t\t\t\t***DIGITE ENTER PARA RETORNAR AO MENU***\n\n\n\n");
    getch();
    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\C�digo Fonte PIM\\Tela_Inicial\\Main_0.exe\"");

    return (0);
}
