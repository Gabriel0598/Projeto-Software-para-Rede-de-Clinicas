#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
int main(void)
{
    /*
    Lista de Especialidades - Banco de dados

    Criação de especialidades
    */

    //PONTEIRO PARA SALVAR DADOS NO NOTEPAD
    FILE *ponteiro_arquivo;

    ponteiro_arquivo = fopen("Lista_De_Exames.txt", "a"); //ponteiro vai receber o resultado da abertura do arquivo "Lista_De_Exames" para gravação "W";

    if (ponteiro_arquivo == NULL)
    {
        printf("\n\nErro na abertura do arquivo!");
        return 1;
    }
    //FECHAMENTO DE PONTEIRO

    setlocale(LC_ALL, "Portuguese"); //Conversão de língua para português

    fprintf (ponteiro_arquivo, "\t\t\t\t\t\t\t\t  AGENDAMENTO DE EXAMES"); //Para salvar no notepad, referenciado p/ ponteiro
    printf ("\t\t\t\t\t\t\t\t\tAGENDAMENTO DE EXAMES"); //Para exibir no programa

    char Nome_Paciente[100];
    printf("\n\n\n\nNome do Paciente: ");
    scanf(" %[^\n]s", &Nome_Paciente);
    fprintf(ponteiro_arquivo, "\n\n\nNome do Paciente: %s", Nome_Paciente);

    char CPF_Paciente[14];
    printf("NÚMERO CPF DO PACIENTE (INCLUINDO PONTOS E TRAÇOS): ");
    scanf("%s", &CPF_Paciente);
    fprintf(ponteiro_arquivo, "\nN CPF: %s", CPF_Paciente);

    int Escolha_Convenio;

    //Loop_Retorno_Escolha_Convenio: //*****
    printf("\n\nPOSSUI CONVÊNIO MÉDICO?");

    printf("\n1 - SIM");
    printf("\n2 - NAO");

    printf("\n\nDIGITE A OPÇÃO DESEJADA: ");
    scanf(" %d", &Escolha_Convenio);

    if (Escolha_Convenio == 1)
    {
        int Selecao_Convenio;

        fprintf(ponteiro_arquivo, "\nConvênio: ");
        printf("\n\nESCOLHA O CONVÊNIO CORRESPONDENTE: ");

        printf("\n1 - ALLIANZ SAÚDE") ;
        printf("\n2 - AMEPLAN SAÚDE") ;
        printf("\n3 - AMIL") ;
        printf("\n4 - BIOVIDA SAÚDE") ;
        printf("\n5 - BRADESCO SAÚDE") ;
        printf("\n6 - CRUZ AZUL SAÚDE") ;
        printf("\n7 - GS SAÚDE") ;
        printf("\n8 - GOLDEN CROSS") ;
        printf("\n9 - NOTRE DAME INTERMÉDICA") ;
        printf("\n10 - PLENA SAÚDE") ;
        printf("\n11 - PORTO SEGURO SAÚDE");
        printf("\n12 - SANTA HELENA") ;
        printf("\n13 - SAO CRISTOVÃO") ;
        printf("\n14 - SOMPO SAUDE") ;
        printf("\n15 - SUL AMÉRICA SAUDE") ;
        printf("\n16 - TRASMONTANO SAÚDE") ;
        printf("\n17 - UNIHOSP SAÚDE") ;
        printf("\n18 - UNIMED") ;

        Loop_Selecao_Convenio:
        printf("\n\nDIGITE O VALOR ENTRE 1 e 17: ");
        scanf(" %d", &Selecao_Convenio);

        switch(Selecao_Convenio)
        {
            case 1 :
                fprintf(ponteiro_arquivo, "ALLIANZ SAÚDE");
                printf("\n1 - ALLIANZ SAÚDE");
                break;
            case 2 :
                fprintf(ponteiro_arquivo, "AMEPLAN SAÚDE");
                printf("\n2 - AMEPLAN SAÚDE");
                break;
            case 3 :
                fprintf(ponteiro_arquivo, "AMIL");
                printf("\n3 - AMIL");
                break;
            case 4 :
                fprintf(ponteiro_arquivo, "BIOVIDA SAÚDE");
                printf("\n4 - BIOVIDA SAÚDE");
                break;
            case 5 :
                fprintf(ponteiro_arquivo, "BRADESCO SAÚDE");
                printf("\n5 - BRADESCO SAÚDE");
                break;
            case 6 :
                fprintf(ponteiro_arquivo, "CRUZ AZUL SAÚDE");
                printf("\n6 - CRUZ AZUL SAÚDE");
                break;
            case 7 :
                fprintf(ponteiro_arquivo, "GS SAÚDE");
                printf("\n1 - GS SAÚDE");
                break;
            case 8 :
                fprintf(ponteiro_arquivo, "GOLDEN CROSS");
                printf("\n1 - GOLDEN CROSS");
                break;
            case 9 :
                fprintf(ponteiro_arquivo, "NOTREDAME INTERMÉDICA");
                printf("\n1 - NOTREDAME INTERMÉDICA");
                break;
            case 10 :
                fprintf(ponteiro_arquivo, "PLENA SAÚDE");
                printf("\n1 - PLENA SAÚDE");
                break;
            case 11 :
                fprintf(ponteiro_arquivo, "PORTO SEGURO SAÚDE");
                printf("\n1 - PORTO SEGURO SAÚDE");
                break;
            case 12 :
                fprintf(ponteiro_arquivo, "SANTA HELENA");
                printf("\n1 - SANTA HELENA");
                break;
            case 13 :
                fprintf(ponteiro_arquivo, "SÃO CRISTÓVÃO");
                printf("\n1 - SÃO CRISTÓVÃO");
                break;
            case 14 :
                fprintf(ponteiro_arquivo, "SOMPO SAÚDE");
                printf("\n1 - SOMPO SAÚDE");
                break;
            case 15 :
                fprintf(ponteiro_arquivo, "SUL AMÉRICA SAÚDE");
                printf("\n1 - SUL AMÉRICA SAÚDE");
                break;
            case 16 :
                fprintf(ponteiro_arquivo, "TRANSMONTANO SAÚDE");
                printf("\n1 - TRANSMONTANO SAÚDE");
                break;
            case 17 :
                fprintf(ponteiro_arquivo, "UNIHOSP SAÚDE");
                printf("\n1 - UNIHOSP SAÚDE");
                break;
            case 18 :
                fprintf(ponteiro_arquivo, "UNIMED");
                printf("\n1 - UNIMED");
                break;
            default :
                printf("\n\nVALOR INVÁLIDO");
                goto Loop_Selecao_Convenio;
        }

        char Num_Carteira[50];
        printf("\n\nNÚMERO DA CARTEIRA DO CONVÊNIO (INCLUINDO PONTOS, TRAÇOS, ETC): ");
        scanf(" %[^\n]s", Num_Carteira);
        fprintf(ponteiro_arquivo, "\nNúmero da Carteira do Plano: %s", Num_Carteira);
    }

    if (Escolha_Convenio == 2)
    {
        printf("\n\nNÃO POSSUI!");
    }



    //Lista de Especialidades
    int Escolha_Especialidade_Exame;
    fprintf(ponteiro_arquivo, "Exame selecionado: ");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tESPECIALIDADE");
    printf("\n\n\nUTILIZE O NÚMERO CORRESPONDENTE A ESPECIALIDADE QUE DESEJA REALIZAR: ");

    printf("\n\n1 - AUDIOMETRIA: R$ 100,00");
    printf("\n2 - COLONOSCOPIA: R$ 500,00");
    printf("\n3 - (ECG) ELETROCARDIOGRAMA: R$ 120,00");
    printf("\n4 - (EEC) ELETROENCEFALOGRAMA: R$ 120,00");
    printf("\n5 - ENDOSCOPIA DIGESTIVA: R$ 500,00");
    printf("\n6 - EXAMES LABORATORIAIS (HEMOGRAMA COMPLETO): R$ 60,00");
    printf("\n7 - EXAMES TOXICOLÓGICOS: R$ 180,00");
    printf("\n8 - HOLTER: R$ 200,00");
    printf("\n9 - MAMOGRAFIA DIGITAL: R$ 150,00");
    printf("\n10 - NASOFIBROLARINGOSCOPIA: R$ 250,00");
    printf("\n11 - RESSONÂNCIA MAGNÉTICA: R$ 1.200,00");
    printf("\n12 - RADIOGRAFIA (RAIO X COMPLETO): R$ 60,00");
    printf("\n13 - TESTE ERGOMÉTRICO: R$ 250,00");
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
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: RECOMENDA-SE BOA NOITE DE DESCANSO/ EXAME REALIZADO POR FONOAUDIÓLIGO");
        printf("\nINSTRUÇÕES: RECOMENDA-SE BOA NOITE DE DESCANSO/ EXAME REALIZADO POR FONOAUDIÓLIGO");
            break;
        case 2 :
        fprintf(ponteiro_arquivo, "COLONOSCOPIA");
        printf("\n- SELECIONADO COLONOSCOPIA");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: NÃO COMER FIBRAS COMO FRUTAS, LEGUMES, VERDURES E CEREAIS/ BEBER MUITO LÍQUIDO (EM TORNO DE 8 COPOS DE ÁGUA POR DIA)");
        printf("\nINSTRUÇÕES: NÃO COMER FIBRAS COMO FRUTAS, LEGUMES, VERDURES E CEREAIS/ BEBER MUITO LÍQUIDO (EM TORNO DE 8 COPOS DE ÁGUA POR DIA)");
            break;
        case 3 :
        fprintf(ponteiro_arquivo, "ECG - ELETROCARDIOGRAMA");
        printf("\n- SELECIONADO ECG - ELETROCARDIOGRAMA");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: TRAZER PEDIDO MÉDICO/ MULHERES: USAR TOP ESPORTIVO OU SUTIÃ SEM ARAME");
        printf("\nINSTRUÇÕES: INSTRUÇÕES: TRAZER PEDIDO MÉDICO/ MULHERES: USAR TOP ESPORTIVO OU SUTIÃ SEM ARAME");
            break;
        case 4 :
        fprintf(ponteiro_arquivo, "EEC - ELETROENCEFALOGRAMA");
        printf("\n- SELECIONADO EEC - ELETROENCEFALOGRAMA");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: RECOMENDA-SE LAVAR BEM OS CABELOS NO DIA ANTERIOR/ NO MOMENTO DO EXAME CABELOS DEVEM ESTAR SECOS/ NÃO UTILIZAR COSMÉTICO NO CABELO (GEL, LAQUÊ, ETC)");
        printf("\nINSTRUÇÕES: RECOMENDA-SE LAVAR BEM OS CABELOS NO DIA ANTERIOR/ NO MOMENTO DO EXAME CABELOS DEVEM ESTAR SECOS/ NÃO UTILIZAR COSMÉTICO NO CABELO (GEL, LAQUÊ, ETC)");
            break;
        case 5 :
        fprintf(ponteiro_arquivo, "ENDOSCOPIA DIGESTIVA");
        printf("\n- SELECIONADO ENDOSCOPIA DIGESTIVA");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: JEJUM DE 12 HORAS/ NÃO COMER CARNE VERMELHA NO DIA ANTERIOR/ DIETA LEVE ANTERIORMENTE");
        printf("\nINSTRUÇÕES: JEJUM DE 12 HORAS/ NÃO COMER CARNE VERMELHA NO DIA ANTERIOR/ DIETA LEVE ANTERIORMENTE");
            break;
        case 6 :
        fprintf(ponteiro_arquivo, "EXAMES LABORATORIAIS");
        printf("\n- SELECIONADO EXAMES LABORATORIAIS");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: JEJUM DE 8 HORAS/ NÃO CONSUMIR BEBIDA ALCOÓLICA 48 HORAS ANTES/ NÃO CONSUMIR CAFÉ/ NÃO FUMAR/ EVITAR EXERCÍCIOS FÍSICOS INTENSOS");
        printf("\nINSTRUÇÕES: JEJUM DE 8 HORAS/ NÃO CONSUMIR BEBIDA ALCOÓLICA 48 HORAS ANTES/ NÃO CONSUMIR CAFÉ/ NÃO FUMAR/ EVITAR EXERCÍCIOS FÍSICOS INTENSOS");
            break;
        case 7 :
        fprintf(ponteiro_arquivo, "EXAMES TOXICOLÓGICOS");
        printf("\n- SELECIONADO EXAMES TOXICOLOGICOS");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: RECOMENDA-SE MANTER CABELOS SECOS");
        printf("\nINSTRUÇÕES: RECOMENDA-SE MANTER CABELOS SECOS");
            break;
        case 8 :
        fprintf(ponteiro_arquivo, "HOLTER");
        printf("\n- SELECIONADO HOLTER");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: TOMAR BANHO ANTERIORMENTE/ EVITAR ALIMENTOS E BEBIDAS ESTIMULANTES (CAFÉ, CHÁ, ETC)/ EVITAR APLICAR CREMES OU POMADAS NA REGIÃO DO PEITO");
        printf("\nINSTRUÇÕES: TOMAR BANHO ANTERIORMENTE/ EVITAR ALIMENTOS E BEBIDAS ESTIMULANTES (CAFÉ, CHÁ, ETC)/ EVITAR APLICAR CREMES OU POMADAS NA REGIÃO DO PEITO");
            break;
        case 9 :
        fprintf(ponteiro_arquivo, "MAMOGRAFIA DIGITAL");
        printf("\n- SELECIONADO MAMOGRAFIA DIGITAL");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: RECOMENDA-SE REALIZAR EXAME UMA SEMANA APÓS A MENSTRUAÇÃO/ EVITAR ALIMENTOS E BEBIDAS ESTIMULANTES (CAFÉ, CHÁ, ETC)");
        printf("\nINSTRUÇÕES: RECOMENDA-SE REALIZAR EXAME UMA SEMANA APÓS A MENSTRUAÇÃO/ EVITAR ALIMENTOS E BEBIDAS ESTIMULANTES (CAFÉ, CHÁ, ETC)");
            break;
        case 10 :
        fprintf(ponteiro_arquivo, "NASOFIBROLARINGOSCOPIA");
        printf("\n- SELECIONADO NASOFIBROLARINGOSCOPIA");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: RECOMENDA-SE JEJUM ABSOLUTO 2 HORAS ANTES DO EXAME");
        printf("\nINSTRUÇÕES: RECOMENDA-SE JEJUM ABSOLUTO 2 HORAS ANTES DO EXAME");
            break;
        case 11 :
        fprintf(ponteiro_arquivo, "RESSONÂNCIA MAGNÉTICA");
        printf("\n- SELECIONADO RESSONÂNCIA MAGNÉTICA");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: RECOMENDA-SE JEJUM ABSOLUTO 4 HORAS ANTES DO EXAME/ IR AO BANHEIRO ANTES DO INÍCIO DO PROCEDIMENTO");
        printf("\nINSTRUÇÕES: RECOMENDA-SE JEJUM ABSOLUTO 4 HORAS ANTES DO EXAME/ IR AO BANHEIRO ANTES DO INÍCIO DO PROCEDIMENTO");
            break;
        case 12 :
        fprintf(ponteiro_arquivo, "RAIO X");
        printf("\n- SELECIONADO RAIO X");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: CONTRAINDICADO PARA GESTANTES");
        printf("\nINSTRUÇÕES: CONTRAINDICADO PARA GESTANTES");
            break;
        case 13 :
        fprintf(ponteiro_arquivo, "TESTE ERGOMÉTRICO");
        printf("\n- SELECIONADO TESTE ERGOMÉTRICO");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: TRAJAR ROUPAS CONFORTÁVEIS/ NÃO FUMAR 2 HORAS ANTES E 2 HORAS APÓS O EXAME/ SUSPENSÃO DE MEDICAÇÃO A CRITÉRIO DO MÉDICO");
        printf("\nINSTRUÇÕES: TRAJAR ROUPAS CONFORTÁVEIS/ NÃO FUMAR 2 HORAS ANTES E 2 HORAS APÓS O EXAME/ SUSPENSÃO DE MEDICAÇÃO A CRITÉRIO DO MÉDICO");
            break;
        case 14 :
        fprintf(ponteiro_arquivo, "TOMOGRAFIA COMPUTADORIZADA");
        printf("\n- SELECIONADO TOMOGRAFIA COMPUTADORIZADA");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: RECOMENDA-SE JEJUM ABSOLUTO DE 6 HORAS ANTES DO EXAME");
        printf("\nINSTRUÇÕES: RECOMENDA-SE JEJUM ABSOLUTO DE 6 HORAS ANTES DO EXAME");
            break;
        case 15 :
        fprintf(ponteiro_arquivo, "ULTRASSONOGRAFIA");
        printf("\n- SELECIONADO ULTRASSONOGRAFIA");
        fprintf(ponteiro_arquivo, "\nINSTRUÇÕES: RECOMENDA-SE JEJUM ABSOLUTO DE 8 HORAS ANTES DO EXAME/ RETER URINA POR 2 HORAS ANTES/ INSERIR 60 GOTAS DE FLAGASS EM 2 HORAS ANTES DO PROCEDIMENTO");
        printf("\nINSTRUÇÕES: RECOMENDA-SE JEJUM ABSOLUTO DE 8 HORAS ANTES DO EXAME/ RETER URINA POR 2 HORAS ANTES/ INSERIR 60 GOTAS DE FLAGASS EM 2 HORAS ANTES DO PROCEDIMENTO");
            break;
        default :
        printf("\nVALOR INVÁLIDO");
            goto loop_tipo_de_especialidade; //Looping para levar o usuário de volta a seleção de número, caso digitar incorreto!
    }

    //Nome do funcionário
    char Nome_Profissional[100];
    printf("\n\nPROFISSIONAL A REALIZAR O EXAME (MÉDICO/ TÉCNICO/ ENFERMEIRO): ");
    scanf(" %[^\n]s", &Nome_Profissional);
    fprintf(ponteiro_arquivo, "\n\nPROFISSIONAL A REALIZAR O EXAME (MÉDICO/ TÉCNICO/ ENFERMEIRO): ", Nome_Profissional);

    //Matrícula
    int Matricula_Funcionario;
    printf("MATRÍCULA DO FUNCIONÁRIO: ");
    scanf("%d", &Matricula_Funcionario);
    fprintf(ponteiro_arquivo, "\nMATRÍCULA: %d", Matricula_Funcionario);

    //Data do Exame
    int Dia_Exame;
    int Mes_Exame;
    int Ano_Exame;

    printf("\n\n\t\t\t\t\t\t\t\t\tAGENDAMENTO DO EXAME");

    printf("\n\n\nDIA: ");
    scanf("%d", &Dia_Exame);

    printf("MÊS: ");
    scanf("%d", &Mes_Exame);

    printf("ANO: ");
    scanf("%d", &Ano_Exame);

    fprintf(ponteiro_arquivo, "\nDATA DE AGENDAMENTO: %02d/ %02d/ %d", Dia_Exame, Mes_Exame, Ano_Exame);
    printf("\nDATA DE AGENDAMENTO: %02d/ %02d/ %d", Dia_Exame, Mes_Exame, Ano_Exame);

    printf("\n\n\n***INFORME AO PACIENTE PARA TRAZER RG E CARTEIRA DO CONVÊNIO SE NECESSÁRIO/ COMPARECER COM 15 MINUTOS DE ANTECEDÊNCIA/ MENORES DEVEM ESTAR ACOMPANHADOS DO RESPONSÁVEL***");

    //FINALIZAÇÃO

    fprintf(ponteiro_arquivo, "\n\n\t\t\t\t\t\t\t\t***REGISTRO CONCLUÍDO***\n\n\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLUÍDO***\n");

    fclose(ponteiro_arquivo);

    printf("\n\t\t\t\t\t\t\t\t***DIGITE ENTER PARA RETORNAR AO MENU***\n\n\n\n");
    getch();
    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\Código Fonte PIM\\Tela_Inicial\\Main_0.exe\"");

    return (0);
}
