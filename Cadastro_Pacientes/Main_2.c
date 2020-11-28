#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <locale.h>

int main(void)
{
    //ABERTURA DE PONTEIRO PARA SALVAR DADOS NO NOTEPAD
    FILE *ponteiro_arquivo;

    ponteiro_arquivo = fopen("Ficha_Paciente.txt", "a"); //ponteiro vai receber o resultado da abertura do arquivo "Ficha_Paciente" para gravação "A";

    if (ponteiro_arquivo == NULL)
    {
        printf("\n\nErro na abertura do arquivo!");
        return 1;
    }
    //FECHAMENTO DE PONTEIRO

    setlocale (LC_ALL, "Portuguese");

    fprintf(ponteiro_arquivo, "\t\t\t\t\t\t\t\t\tCADASTRO DE PACIENTES");// CADASTRO DE PACIENTES
    printf("\t\t\t\t\t\t\t\t\tCADASTRO DE PACIENTES");

    //NOME PACIENTE
    char Nome_Paciente[50];

    printf ("\n\n\n\nNOME COMPLETO: ");
    scanf(" %[^\n]s", &Nome_Paciente);
    fprintf(ponteiro_arquivo, "\n\nNOME COMPLETO: %s", Nome_Paciente);

    // DATA DE NASCIMENTO
    char Dt_nasc[10];

    printf ("DATA DE NASCIMENTO: ");
    scanf(" %[^\n]s", &Dt_nasc);
    fprintf (ponteiro_arquivo, "\nDATA DE NASCIMENTO: %s", Dt_nasc);

    // REGISTRO GERAL RG
    char RG_Paciente [11];

    printf ("DIGITE O RG (INCLUINDO TRAÇOS, NÚMEROS E LETRAS): ");
    scanf(" %[^\n]s", &RG_Paciente);
    fprintf (ponteiro_arquivo, "\nNÚMERO RG: %s", RG_Paciente);
    //printf (RG_Paciente);

    //CPF CADASTRO DE PESSOAS FISICAS
    char CPF_Paciente [14];

    printf ("DIGITE O CPF (INCLUINDO PONTOS E TRAÇOS):  ");
    scanf (" %[^\n]s", &CPF_Paciente);
    fprintf (ponteiro_arquivo, "\nCPF:  %s", CPF_Paciente);
    //printf ("\tCPF: %s", CPF_Paciente);

    //CIDADE
    char Cidade_Paciente[100];
    printf("\nCIDADE: ");
    scanf(" %[^\n]s", &Cidade_Paciente);
    fprintf(ponteiro_arquivo, "\nCIDADE: %s", Cidade_Paciente);

    //SWITCH CASE NATURALIDADE!
    int Naturalidade;
    fprintf(ponteiro_arquivo, "\nESTADO: ");
    printf("\nNATURALIDADE");
    printf("\n\nUTILIZE O NÚMERO CORRESPONDENTE A UMA DAS SEGUINTES OPÇÕES: ");

    printf("\n\n1 - ACRE");
    printf("\n2 - ALAGOAS");
    printf("\n3 - AMAPA");
    printf("\n4 - AMAZONAS");
    printf("\n5 - BAHIA");
    printf("\n6 - CEARÁ");
    printf("\n7 - DISTRITO FEDERAL");
    printf("\n8 - ESPÍRITO SANTO");
    printf("\n9 - GOIÁS");
    printf("\n10 - MARANHÃO");
    printf("\n11 - MATO GROSSO");
    printf("\n12 - MATO GROSSO DO SUL");
    printf("\n13 - MINAS GERAIS");
    printf("\n14 - PARÁ");
    printf("\n15 - PARAÍBA");
    printf("\n16 - PARANÁ");
    printf("\n17 - PERNAMBUCO");
    printf("\n18 - PIAUÍ");
    printf("\n19 - RIO DE JANEIRO");
    printf("\n20 - RIO GRANDE DO NORTE");
    printf("\n21 - RIO GRANDE DO SUL");
    printf("\n22 - RONDÔNIA");
    printf("\n23 - RORAIMA");
    printf("\n24 - SANTA CATARINA");
    printf("\n25- SÃO PAULO");
    printf("\n26 - SERGIPE");
    printf("\n27 - TOCANTINS");

    loop_uf_Naturalidade:
    printf("\n\nDIGITE O VALOR ENTRE 1 e 27: ");
    scanf("%d", &Naturalidade);

    switch (Naturalidade)
    {
        case 1 :
            fprintf(ponteiro_arquivo, "AC");
            printf("\n1 - AC");
            break;
        case 2 :
            fprintf(ponteiro_arquivo, "AL");
            printf("\n2 - AL");
            break;
        case 3 :
            fprintf(ponteiro_arquivo, "AP");
            printf("\n3 - AP");
            break;
        case 4 :
            fprintf(ponteiro_arquivo, "AM");
            printf("\n4 - AM");
            break;
        case 5 :
            fprintf(ponteiro_arquivo, "BA");
            printf("\n5 - BA");
            break;
        case 6 :
            fprintf(ponteiro_arquivo, "CE");
            printf("\n6 - CE");
            break;
        case 7 :
            fprintf(ponteiro_arquivo, "DF");
            printf("\n7 - DF");
            break;
        case 8 :
            fprintf(ponteiro_arquivo, "ES");
            printf("\n8 - ES");
            break;
        case 9 :
            fprintf(ponteiro_arquivo, "GO");
            printf("\n9 - GO");
            break;
        case 10 :
            fprintf(ponteiro_arquivo, "MA");
            printf("\n10 - MA");
            break;
        case 11 :
            fprintf(ponteiro_arquivo, "MT");
            printf("\n11 - MT");
            break;
        case 12 :
            fprintf(ponteiro_arquivo, "MS");
            printf("\n12 - MS");
            break;
        case 13 :
            fprintf(ponteiro_arquivo, "MG");
            printf("\n13 - MG");
            break;
        case 14 :
            fprintf(ponteiro_arquivo, "PA");
            printf("\n14 - PA");
            break;
        case 15 :
            fprintf(ponteiro_arquivo, "PB");
            printf("\n15 - PB");
            break;
        case 16 :
            fprintf(ponteiro_arquivo, "PR");
            printf("\n16 - PR");
            break;
        case 17 :
            fprintf(ponteiro_arquivo, "PE");
            printf("\n17 - PE");
            break;
        case 18 :
            fprintf(ponteiro_arquivo, "PI");
            printf("\n18 - PI");
            break;
        case 19 :
            fprintf(ponteiro_arquivo, "RJ");
            printf("\n19 - RJ");
            break;
        case 20 :
            fprintf(ponteiro_arquivo, "RN");
            printf("\n20 - RN");
            break;
        case 21 :
            fprintf(ponteiro_arquivo, "RS");
            printf("\n21 - RS");
            break;
        case 22 :
            fprintf(ponteiro_arquivo, "RO");
            printf("\n22 - RO");
            break;
        case 23 :
            fprintf(ponteiro_arquivo, "RR");
            printf("\n23 - RR");
            break;
        case 24 :
            fprintf(ponteiro_arquivo, "SC");
            printf("\n24 - SC");
            break;
        case 25 :
            fprintf(ponteiro_arquivo, "SP");
            printf("\n25 - SP");
            break;
        case 26 :
            fprintf(ponteiro_arquivo, "SE");
            printf("\n26 - SE");
            break;
        case 27 :
            fprintf(ponteiro_arquivo, "TO");
            printf("\n27 - TO");
            break;
        default :
            printf("\nVALOR INVÁLIDO");
            goto loop_uf_Naturalidade;
    }

    // FILIAÇÃO --- MENSAGEM NO INICIO DO PROGRAMA ORIENTANDO A NAO EXISTENCIA DO REGISTRO PATERNO

    char Nome_Mae[100];
    char Nome_Pai[100];

    printf ("\n\nFILIAÇÃO");   // FILIAÇÃO

    // NOME MÃE
    printf("\n\nNOME COMPLETO DA MÃE: ");
    scanf(" %[^\n]s", &Nome_Mae);
    fprintf(ponteiro_arquivo, "\nNOME DA MÃE: %s", Nome_Mae);
    //printf("Nome da Mae: %s", Nome_Mae);

    // NOME PAI
    printf("NOME COMPLETO DO PAI: ");
    scanf(" %[^\n]s", &Nome_Pai);
    fprintf(ponteiro_arquivo, "\nNOME DO PAI: %s", Nome_Pai);
    //printf("Nome do Pai: %s", Nome_Pai);

    //DADOS DE CONTRATO
    int DDD_Fixo;
    int Tel_Fixo;
    int DDD_Celular;
    int Tel_Celular;
    int DDD_Recado;
    int Tel_Recado;
    char Email_Pessoal[100];
    char Email_Corporativo[100];

    // CONTATO - TELEFONE - EMAIL
    printf("\n\n\t\t\t\t\t\t\t\t\t\tCONTATO\n");
    fprintf(ponteiro_arquivo, "\n\n\t\t\t\t\t\t\t\t\t     CONTATO");
    printf("\n\n\t\t\t\t\t\t***NOS CAMPOS DE TELEFONES DIGITE APENAS NÚMEROS, NÃO UTILIZE SINAIS!***");
    printf("\n\t\t\t\t\t\t\t\t***DIGITE 0 (ZERO) SE NÃO HOUVER!***");

    printf("\n\n\nTELEFONE FIXO");
    printf("\nDDD: ");
    scanf("%i", &DDD_Fixo);
    printf("NÚMERO: ");
    scanf("%i", &Tel_Fixo);
    printf("\n\tTELEFONE FIXO: (%i) %i", DDD_Fixo, Tel_Fixo);
    fprintf(ponteiro_arquivo, "\n\nTELEFONE FIXO: (%i) %i", DDD_Fixo, Tel_Fixo);

    // CELUALR
    printf("\n\nTELEFONE CELULAR");
    printf("\nDDD: ");
    scanf("%i", &DDD_Celular);
    printf("NUMERO: ");
    scanf("%i", &Tel_Celular);
    printf("\n\tTELEFONE CELULAR: (%i) %i", DDD_Celular, Tel_Celular);
    fprintf(ponteiro_arquivo, "\nTELEFONE CELULAR: (%i) %i", DDD_Celular, Tel_Celular);

    // RECADO
    printf("\n\nTELEFONE DE RECADO");
    printf("\nDDD: ");
    scanf("%i", &DDD_Recado);
    printf("NÚMERO: ");
    scanf("%i", &Tel_Recado);
    printf("\n\tTELEFONE RECADO: (%i) %i", DDD_Recado, Tel_Recado);
    fprintf(ponteiro_arquivo, "\nTELEFONE RECADO: (%i) %i", DDD_Recado, Tel_Recado);

    // EMAIL
    char Email_paciente [100];

    printf ("\n\nEMAIL: ");
    scanf (" %[^\n]s", &Email_paciente);
    fprintf (ponteiro_arquivo, "\nEMAIL: %s", Email_paciente);
    //printf (Email_paciente);

    // INICIO SWITCH CASE CONVENIO
    int convenio_m;
    char num_carteira_convenio[50];

    fprintf(ponteiro_arquivo, "\n\n\t\t\t\t\t\t\t\t\t    CONVÊNIO");
    printf("\n\nPOSSUI CONVÊNIO MÉDICO?");

    loop_convenio:
    printf("\n\nDIGITE SIM (1) . NÃO (2): ");
    scanf("%d", &convenio_m);

    switch (convenio_m)
    {
        case 1 :
        fprintf (ponteiro_arquivo, "\n\nCONVÊNIO MÉDICO: ");
        break;

        case 2 :
        fprintf(ponteiro_arquivo, "\n\nNÃO POSSUI CONVÊNIO!");
        break;

        default :
        printf("\nVALOR INVÁLIDO");
        goto loop_convenio;
    }
    // FIM SWITCH CASE CONVENIO

    // INICIO IF CONVENIO
        if (convenio_m == 1)
        {
                    printf("\n\nSELECIONE O CONVÊNIO");

                    printf("\n\n1 - ALLIANZ SAÚDE");
                    printf("\n2 - AMEPLAN SAÚDE");
                    printf("\n3 - AMIL");
                    printf("\n4 - BIOVIDA SAÚDE");
                    printf("\n5 - BRADESCO SAÚDE");
                    printf("\n6 - CRUZ AZUL SAÚDE");
                    printf("\n7 - GS SAÚDE");
                    printf("\n8 - GOLDEN CROSS");
                    printf("\n9 - NOTRE DAME INTERMÉDICA");
                    printf("\n10 - PLENA SAÚDE");
                    printf("\n11 - PORTO SEGURO SAÚDE");
                    printf("\n12 - SANTA HELENA");
                    printf("\n13 - SÃO CRISTOVÃO");
                    printf("\n14 - SOMPO SAÚDE");
                    printf("\n15 - SUL AMÉRICA SAÚDE");
                    printf("\n16 - TRASMONTANO SAÚDE");
                    printf("\n17 - UNIHOSP SAÚDE");
                    printf("\n18 - UNIMED");

                    loop_convenio_m:
                    printf("\n\nDIGITE O VALOR ENTRE 1 e 18: ");
                    scanf("%d", &convenio_m);

                    switch (convenio_m)
                    {
                    case 1 :
                    fprintf(ponteiro_arquivo, "ALLIANZ SAÚDE");
                    printf ("\n1 - ALLIANZ SAÚDE");
                        break;
                    case 2 :
                    fprintf(ponteiro_arquivo, "AMEPLAN SAÚDE");
                    printf ("\n2 - AMEPLAN SAÚDE");
                        break;
                    case 3 :
                    fprintf(ponteiro_arquivo, "AMIL");
                    printf ("\n3 - AMIL");
                        break;
                    case 4 :
                    fprintf(ponteiro_arquivo, "BIOVIDA SAÚDE");
                    printf ("\n4 - BIOVIDA SAÚDE");
                        break;
                    case 5 :
                    fprintf(ponteiro_arquivo, "BRADESCO SAÚDE");
                    printf ("\n5 - BRADESCO SAÚDE");
                        break;
                    case 6 :
                    fprintf(ponteiro_arquivo, "CRUZ AZUL SAÚDE");
                    printf ("\n6 - CRUZ AZUL SAÚDE");
                        break;
                    case 7 :
                    fprintf(ponteiro_arquivo, "GS SAÚDE");
                    printf ("\n7 - GS SAÚDE");
                        break;
                    case 8 :
                    fprintf(ponteiro_arquivo, "GOLDEN CROSS");
                    printf ("\n8 - GOLDEN CROSS");
                        break;
                    case 9 :
                    fprintf(ponteiro_arquivo, "NOTRE DAME INTERMÉDICA");
                    printf ("\n9 - NOTRE DAME INTERMÉDICA");
                        break;
                    case 10 :
                    fprintf(ponteiro_arquivo, "PLENA SAÚDE");
                    printf ("\n10 - PLENA SAÚDE");
                        break;
                    case 11 :
                    fprintf(ponteiro_arquivo, "PORTO SEGURO SAÚDE");
                    printf ("\n10 - PORTO SEGURO SAÚDE");
                        break;
                    case 12 :
                    fprintf(ponteiro_arquivo, "SANTA HELENA");
                    printf ("\n11 - SANTA HELENA");
                        break;
                    case 13 :
                    fprintf(ponteiro_arquivo, "SAO CRISTOVÃO");
                    printf ("\n12 - SAO CRISTOVÃO");
                        break;
                    case 14 :
                    fprintf(ponteiro_arquivo, "SOMPO SAÚDE");
                    printf ("\n13 - SOMPO SAÚDE");
                        break;
                    case 15 :
                    fprintf(ponteiro_arquivo, "SOMPO SAÚDE");
                    printf ("\n14 - SUL AMERICA SAÚDE");
                        break;
                    case 16 :
                    fprintf(ponteiro_arquivo, "TRASMONTANO SAÚDE\n");
                    printf ("\n15 - TRASMONTANO SAÚDE\n");
                        break;
                    case 17 :
                    fprintf(ponteiro_arquivo, "UNIHOSP SAÚDE");
                    printf ("\n16 - UNIHOSP SAÚDE");
                        break;
                    case 18 :
                    fprintf(ponteiro_arquivo, "UNIMED\n");
                    printf ("\n17 - UNIMED\n");
                        break;
                    default :
                    printf("\nVALOR INVÁLIDO");
                        goto loop_convenio_m;
            }

        printf ("\n\nNÚMERO CARTEIRA DE CONVÊNIO: ");
        scanf (" %[^\n]s", &num_carteira_convenio);
        fprintf (ponteiro_arquivo, "\nNÚMERO CARTEIRA CONVÊNIO: %s", num_carteira_convenio);
        //printf (num_carteira_convenio);

    }
    // FIM IF CONVENIO


    //ENDEREÇO
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tENDEREÇO");
    fprintf(ponteiro_arquivo, "\n\n\t\t\t\t\t\t\t\t\t    ENDEREÇO");

    char Logradouro [100]; //Rua, Av, Praça, etc;
    char Num_Endereco[10];
    char Complemento [100]; //Complemento como Apto/ Casa/ Bloco/ Etc;
    char Bairro[100];
    char CEP[9];
    char Referencia[100]; //Referência para localizar imóvel
    char Municipio_Endereco[100];

    // RUA
    printf("\n\n\nNOME DO LOGRADOURO (RUA, AV, PRAÇA, ETC): ");
    scanf (" %[^\n]s", &Logradouro);
    fprintf(ponteiro_arquivo, "\n\nLOGRADOURO: %s", Logradouro);
    //printf("Logradouro: %s", Logradouro);

    // NUMERO
    printf("NUMERO (DIGITE S/N SE NÃO HOUVER NUMERAÇÃO DO IMÓVEL): ");
    scanf (" %[^\n]s", &Num_Endereco);
    fprintf(ponteiro_arquivo, "\nNÚMERO: %s", Num_Endereco);
    //printf("Numero: %s", Num_Endereco);

    // COMPLEMENTO
    printf("COMPLEMENTO (DIGITE S/N SE NÃO HOUVER): ");
    scanf (" %[^\n]s", &Complemento);
    fprintf(ponteiro_arquivo, "\nCOMPLEMENTO: %s", Complemento);
    //printf("ComplementO: %s", Complemento);

    //CEP
    printf("CEP (INCLUINDO TRAÇOS): ");
    scanf (" %[^\n]s", &CEP);
    fprintf(ponteiro_arquivo, "\nCEP: %s", CEP);
    //printf("\tCEP: %s", CEP);

    // BAIRRO
    printf("BAIRRO: ");
    scanf (" %[^\n]s", &Bairro);
    fprintf(ponteiro_arquivo, "\nBAIRRO: %s", Bairro);
    //printf("Bairro: %s", Bairro);

    //REFERENCIA
    printf("REFERÊNCIA (DIGITE 'NÃO POSSUI' CASO NÃO FOR INFORMADA): ");
    scanf (" %[^\n]s", &Referencia);
    fprintf(ponteiro_arquivo, "\nREFERÊNCIA: %s", Referencia);
    //printf("Referencia: %s", Referencia);

    // MUNICIPIO
    printf("\nMUNICÍPIO: ");
    scanf (" %[^\n]s", &Municipio_Endereco);
    fprintf(ponteiro_arquivo, "\nMUNICÍPIO: %s", Municipio_Endereco);
    //printf("Municipio: %s", Municipio_Endereco);

    //SWITH CASE ENDEREÇO
    int Escolha_UF_Endereco;
    printf("\nESTADO");
    fprintf(ponteiro_arquivo, "\nESTADO: ");
    printf("\n\nUTILIZE O NÚMERO CORRESPONDENTE A UMA DAS SEGUINTES OPÇÕES: ");

    printf("\n\n1 - ACRE");
    printf("\n2 - ALAGOAS");
    printf("\n3 - AMAPA");
    printf("\n4 - AMAZONAS");
    printf("\n5 - BAHIA");
    printf("\n6 - CEARÁ");
    printf("\n7 - DISTRITO FEDERAL");
    printf("\n8 - ESPIRÍTO SANTO");
    printf("\n9 - GOIÁS");
    printf("\n10 - MARANHÃO");
    printf("\n11 - MATO GROSSO");
    printf("\n12 - MATO GROSSO DO SUL");
    printf("\n13 - MINAS GERAIS");
    printf("\n14 - PARÁ");
    printf("\n15 - PARAÁBA");
    printf("\n16 - PARANÁ");
    printf("\n17 - PERNAMBUCO");
    printf("\n18 - PIAUÍ");
    printf("\n19 - RIO DE JANEIRO");
    printf("\n20 - RIO GRANDE DO NORTE");
    printf("\n21 - RIO GRANDE DO SUL");
    printf("\n22 - RONDÔNIA");
    printf("\n23 - RORAIMA");
    printf("\n24 - SANTA CATARINA");
    printf("\n25- SÃO PAULO");
    printf("\n26 - SERGIPE");
    printf("\n27 - TOCANTINS");

    loop_uf_endereco:
    printf("\n\nDIGITE O VALOR ENTRE 1 e 27: ");
    scanf("%d", &Escolha_UF_Endereco);

    switch (Escolha_UF_Endereco)
    {
        case 1 :
            fprintf(ponteiro_arquivo, "AC");
            printf("\n1 - AC");
            break;
        case 2 :
            fprintf(ponteiro_arquivo, "AL");
            printf("\n2 - AL");
            break;
        case 3 :
            fprintf(ponteiro_arquivo, "AP");
            printf("\n3 - AP");
            break;
        case 4 :
            fprintf(ponteiro_arquivo, "AM");
            printf("\n4 - AM");
            break;
        case 5 :
            fprintf(ponteiro_arquivo, "BA");
            printf("\n5 - BA");
            break;
        case 6 :
            fprintf(ponteiro_arquivo, "CE");
            printf("\n6 - CE");
            break;
        case 7 :
            fprintf(ponteiro_arquivo, "DF");
            printf("\n7 - DF");
            break;
        case 8 :
            fprintf(ponteiro_arquivo, "ES");
            printf("\n8 - ES");
            break;
        case 9 :
            fprintf(ponteiro_arquivo, "GO");
            printf("\n9 - GO");
            break;
        case 10 :
            fprintf(ponteiro_arquivo, "MA");
            printf("\n10 - MA");
            break;
        case 11 :
            fprintf(ponteiro_arquivo, "MT");
            printf("\n11 - MT");
            break;
        case 12 :
            fprintf(ponteiro_arquivo, "MS");
            printf("\n12 - MS");
            break;
        case 13 :
            fprintf(ponteiro_arquivo, "MG");
            printf("\n13 - MG");
            break;
        case 14 :
            fprintf(ponteiro_arquivo, "PA");
            printf("\n14 - PA");
            break;
        case 15 :
            fprintf(ponteiro_arquivo, "PB");
            printf("\n15 - PB");
            break;
        case 16 :
            fprintf(ponteiro_arquivo, "PR");
            printf("\n16 - PR");
            break;
        case 17 :
            fprintf(ponteiro_arquivo, "PE");
            printf("\n17 - PE");
            break;
        case 18 :
            fprintf(ponteiro_arquivo, "PI");
            printf("\n18 - PI");
            break;
        case 19 :
            fprintf(ponteiro_arquivo, "RJ");
            printf("\n19 - RJ");
            break;
        case 20 :
            fprintf(ponteiro_arquivo, "RN");
            printf("\n20 - RN");
            break;
        case 21 :
            fprintf(ponteiro_arquivo, "RS");
            printf("\n21 - RS");
            break;
        case 22 :
            fprintf(ponteiro_arquivo, "RO");
            printf("\n22 - RO");
            break;
        case 23 :
            fprintf(ponteiro_arquivo, "RR");
            printf("\n23 - RR");
            break;
        case 24 :
            fprintf(ponteiro_arquivo, "SC");
            printf("\n24 - SC");
            break;
        case 25 :
            fprintf(ponteiro_arquivo, "SP");
            printf("\n25 - SP");
            break;
        case 26 :
            fprintf(ponteiro_arquivo, "SE");
            printf("\n26 - SE");
            break;
        case 27 :
            fprintf(ponteiro_arquivo, "TO");
            printf("\n27 - TO");
            break;
        default :
            printf("\nVALOR INVÁLIDO");
            goto loop_uf_endereco;
    }
    //FIM SWITCH CASE

    printf ("\n\n");

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLUÍDO***\n\n\n\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLUÍDO***\n");

    fclose (ponteiro_arquivo); //FIM DO PONTEIRO

    printf("\n\t\t\t\t\t\t\t\t***DIGITE ENTER PARA RETORNAR AO MENU***\n\n\n\n");
    getch();
    system("\"C:\\Users\\Gabri\\OneDrive\\Documentos\\UNIP\\2° Semestre\\PIM 2 Sem\\Código Fonte PIM\\Tela_Inicial\\Main_0.exe\"");

    return (0);
}
