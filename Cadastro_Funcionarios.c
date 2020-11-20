#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main(void)
{
    //PONTEIRO PARA SALVAR DADOS NO NOTEPAD
    FILE *ponteiro_arquivo;

    ponteiro_arquivo = fopen("Ficha_Funcionario.txt", "w"); //ponteiro vai receber o resultado da abertura do arquivo "Ficha_Funcionario" para gravação "W";

    if (ponteiro_arquivo == NULL)
    {
        printf("\n\nErro na abertura do arquivo!");
        return 1;
    }

    //FECHAMENTO DE PONTEIRO

    fprintf (ponteiro_arquivo, "\t\t\t\t\t\t\t\t    CADASTRO DE FUNCIONARIOS"); //Para salvar no notepad, referenciado p/ ponteiro
    printf ("\t\t\t\t\t\t\t\t\tCADASTRO DE FUNCIONARIOS"); //Para exibir no programa

    //Matrícula
    int Matricula_Funcionario;
    printf("\n\n\n\nMATRICULA");
    printf("\n\nDIGITE O NUMERO DA MATRICULA DO FUNCIONARIO: ");
    scanf("%d", &Matricula_Funcionario);
    fprintf(ponteiro_arquivo, "\n\n\nMatricula: %d", Matricula_Funcionario); //Para salvar no notepad
    printf("Matricula: %d", Matricula_Funcionario); //Para exibir no programa o que foi digitado

    //Categoria do Funcionário
    int Escolha_Categoria_Funcionario;
    fprintf(ponteiro_arquivo, "\n\nCATEGORIA DO FUNCIONARIO: ");
    printf("\n\nCATEGORIA DO FUNCIONARIO");
    printf("\n\nUTILIZE O NUMERO CORRESPONDENTE A UMA DAS SEGUINTES OPCOES: ");

    printf("\n\n1 - FUNCIONARIO GERAL");
    printf("\n2 - MEDICO");
    printf("\n3 - ENFERMEIRO");

    loop_categoria_funcionario:
    printf("\n\nDIGITE O VALOR ENTRE 1 E 3: ");
    scanf("%d", &Escolha_Categoria_Funcionario);

    switch(Escolha_Categoria_Funcionario)
    {
        case 1 :
        fprintf(ponteiro_arquivo, "FUNCIONARIO(A) GERAL");
        printf("- SELECIONADO FUNCIONARIO(A) GERAL");
            break;
        case 2 :
        fprintf(ponteiro_arquivo, "MEDICO(A)");
        printf("- SELECIONADO MEDICO(A)");
            break;
        case 3 :
        fprintf(ponteiro_arquivo, "ENFERMEIRO(A)");
        printf("- SELECIONADO ENFERMEIRO(A)");
            break;
        default :
        printf("\nVALOR INVALIDO");
            goto loop_categoria_funcionario; //Looping para levar o usuário de volta a seleção de número, caso digitar incorreto!
    }

    if(Escolha_Categoria_Funcionario == 2)
    {
        char Num_CRM[13];
        char especialidade_medico[40];

        printf("\n\nCADASTRO CRM");
        printf("\n\nCRM (NUM/UF): ");
        scanf(" %s", &Num_CRM);
        fprintf(ponteiro_arquivo, "\nCADASTRO CRM: %s", Num_CRM);
        printf("Numero de Registro: %s", Num_CRM);

        printf("\n\nESPECIALIDADE: ");
        scanf(" %s", &especialidade_medico);
        fprintf(ponteiro_arquivo, "\nESPECIALIDADE: %s", especialidade_medico);
        printf("Especialidade: %s", especialidade_medico);

    }

    if(Escolha_Categoria_Funcionario == 3)
    {
        char Num_COREN[13];
        char especialidade_enfermeiro[40];

        printf("\n\nCADASTRO COREN");
        printf("\n\nCOREN (NUM/UF): ");
        scanf(" %s", &Num_COREN);
        fprintf(ponteiro_arquivo, "\nCADASTRO COREN: %s", Num_COREN);
        printf("Numero de Registro: %s", Num_COREN);

        int Escolha_Nivel_Enfermeiro;

        fprintf(ponteiro_arquivo, "\nNIVEL: ");
        printf("\n\nNIVEL DA FUNCAO");
        printf("\n\nUTILIZE O NUMERO CORRESPONDENTE A UMA DAS SEGUINTES OPCOES: ");

        printf("\n\n1 - AUXILIAR");
        printf("\n2 - TECNICO");
        printf("\n3 - ENFERMEIRO");

        loop_nivel_enfermeiro:
        printf("\n\nDIGITE O NIVEL ENTRE 1 E 3: ");
        scanf("%d", &Escolha_Nivel_Enfermeiro);

        switch(Escolha_Nivel_Enfermeiro)
        {
            case 1 :
            fprintf(ponteiro_arquivo, "AUXILIAR");
            printf("- SELECIONADO AUXILIAR");
                break;
            case 2 :
            fprintf(ponteiro_arquivo, "TECNICO");
            printf("- SELECIONADO TECNICO");
                break;
            case 3 :
            fprintf(ponteiro_arquivo, "ENFERMEIRO(A)");
            printf("- SELECIONADO ENFERMEIRO(A)");
                break;
            default :
            printf("\nVALOR INVALIDO");
                goto loop_nivel_enfermeiro; //Looping para levar o usuário de volta a seleção de número, caso digitar incorreto!
        }
    }

    //Tipo de Contrato
    int Escolha_Tipo_Contrato;

    fprintf(ponteiro_arquivo, "\n\nTIPO DE CONTRATO: ");
    printf("\n\nTIPO DE CONTRATO");
    printf("\n\nUTILIZE O NUMERO CORRESPONDENTE A UMA DAS SEGUINTES OPCOES: ");

    printf("\n\n1 - CLT (CONSOLIDACAO DAS LEIS TRABALHISTAS)");
    printf("\n2 - PJ (PRESTADOR DE SERVICOS)");
    printf("\n3 - ESTAGIO");
    printf("\n4 - JOVEM APRENDIZ");

    loop_tipo_contrato: //Início do looping
    printf("\n\nDIGITE O VALOR ENTRE 1 E 4: ");
    scanf("%d", &Escolha_Tipo_Contrato);

    switch (Escolha_Tipo_Contrato)
    {
        case 1 :
        fprintf(ponteiro_arquivo, "CONSOLIDACAO DAS LEIS TRABALHISTAS");
        printf("CONTRATO REF. CLT SELECIONADO!");
            break;
        case 2 :
        fprintf(ponteiro_arquivo, "PJ - PRESTADOR DE SERVICOS");
        printf("CONTRATO REF. PJ(PRESTADOR DE SERVICOS) SELECIONADO!");
            break;
        case 3 :
        fprintf(ponteiro_arquivo, "ESTAGIO");
        printf("CONTRATO REF. ESTAGIO SELECIONADO!");
            break;
        case 4 :
        fprintf(ponteiro_arquivo, "JOVEM APRENDIZ");
        printf("CONTRATO REF. JOVEM APRENDIZ SELECIONADO!");
            break;
        default :
        printf("\nVALOR INVALIDO");
            goto loop_tipo_contrato; //Looping para levar o usuário de volta a seleção de número, caso digitar incorreto!
    }

    fprintf(ponteiro_arquivo, "\n\n\n\n\t\t\t\t\t\t\t\t\t   DADOS GERAIS");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t      DADOS GERAIS");

    //Dados de Nome
    char Nome_Completo[100];
    printf("\n\n\n\nNOME COMPLETO: ");
    scanf(" %[^\n]s", &Nome_Completo); //***Espaço antes do %s limpa o Buffer!!!
    fprintf (ponteiro_arquivo, "\n\nNome Completo: %s", Nome_Completo);
    printf ("Nome Completo: %s", Nome_Completo);

    //Data de Nascimento com um campo para cada
    int Dia_Nasc;
    int Mes_Nasc;
    int Ano_Nasc;
    printf("\n\n\n\t\t\t\t\t\t\t\t\tDATA DE NASCIMENTO");

    printf("\n\n\nDIA: ");
    scanf("%d", &Dia_Nasc);
    printf("MES: ");
    scanf("%d", &Mes_Nasc);
    printf("ANO COM QUATRO DIGITOS: ");
    scanf("%d", &Ano_Nasc);

    fprintf(ponteiro_arquivo, "\nData de Nascimento: %02d/ %02d/ %d", Dia_Nasc, Mes_Nasc, Ano_Nasc);
    printf("\nData de Nascimento: %02d/ %02d/ %d", Dia_Nasc, Mes_Nasc, Ano_Nasc);
    //Fechando campo de data


    //Dados de Contato
    int DDD_Fixo;
    int Tel_Fixo;
    int DDD_Celular;
    int Tel_Celular;
    int DDD_Recado;
    int Tel_Recado;
    char Email_Pessoal[100];
    char Email_Corporativo[100];

    //Registro de Informações de Telefones:
    fprintf (ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t    CONTATO");
    printf ("\n\n\n\t\t\t\t\t\t\t\t\t\tCONTATO");
    printf("\n\n\n\t\t\t\t\t\t***NOS CAMPOS DE TELEFONES DIGITE APENAS NUMEROS, NAO UTILIZE SINAIS!***");

    printf("\n\n\nTELEFONE FIXO");
    printf("\nDDD: ");
    scanf("%i", &DDD_Fixo);
    printf("NUMERO: ");
    scanf("%i", &Tel_Fixo);

    fprintf(ponteiro_arquivo, "\n\nTelefone Fixo: (%i) %i", DDD_Fixo, Tel_Fixo);
    printf("\nTelefone Fixo: (%i) %i", DDD_Fixo, Tel_Fixo);

    //Todos usam o mesmo princípio:
    printf("\n\nTELEFONE CELULAR");
    printf("\nDDD: ");
    scanf("%i", &DDD_Celular);
    printf("NUMERO: ");
    scanf("%i", &Tel_Celular);

    fprintf(ponteiro_arquivo, "\nTelefone Celular: (%i) %i", DDD_Fixo, Tel_Fixo);
    printf("\nTelefone Celular: (%i) %i", DDD_Fixo, Tel_Fixo);


    printf("\n\nTELEFONE DE RECADO");
    printf("\nDDD: ");
    scanf("%i", &DDD_Recado);
    printf("NUMERO: ");
    scanf("%i", &Tel_Recado);

    fprintf(ponteiro_arquivo, "\nTelefone de Recado: (%i) %i", DDD_Recado, Tel_Recado);
    printf("\nTelefone de Recado: (%i) %i", DDD_Recado, Tel_Recado);

    //Cadastro de dados de email:
    printf("\n\nEMAIL PESSOAL: ");
    scanf("%s", &Email_Pessoal);
    fprintf(ponteiro_arquivo, "\nEmail Pessoal: %s", Email_Pessoal);
    printf("Email Pessoal: %s", Email_Pessoal);

    printf("\n\nEMAIL CORPORATIVO: ");
    scanf("%s", &Email_Corporativo);
    fprintf(ponteiro_arquivo, "\nEmail Corporativo: %s", Email_Corporativo);
    printf("Email Corporativo: %s", Email_Corporativo);

    //-------------------------------------------------

    //Estado Civil
    int Escolha_EstadoCivil;
    fprintf(ponteiro_arquivo, "\n\n\t\t\t\t\t\t\t\t\t  ESTADO CIVIL\n\n");
    printf("\n\n\t\t\t\t\t\t\t\t\t   ESTADO CIVIL");
    printf("\n\n\nUTILIZE O NUMERO CORRESPONDENTE A UMA DAS SEGUINTES OPCOES: ");

    printf("\n\n1 - SOLTEIRO");
    printf("\n2 - CASADO");
    printf("\n3 - SEPARADO");
    printf("\n4 - DIVORCIADO");
    printf("\n5 - VIUVO");

    loop_estado_civil:
    printf("\n\nDIGITE O VALOR ENTRE 1 E 5: ");
    scanf("%d", &Escolha_EstadoCivil);

    switch (Escolha_EstadoCivil)
    {
        case 1 :
        fprintf(ponteiro_arquivo, "ESTADO CIVIL SOLTEIRO SELECIONADO!");
        printf("ESTADO CIVIL SOLTEIRO SELECIONADO!");
            break;
        case 2 :
        fprintf(ponteiro_arquivo, "ESTADO CIVIL CASADO SELECIONADO!");
        printf("ESTADO CIVIL CASADO SELECIONADO!");
            break;
        case 3 :
        fprintf(ponteiro_arquivo, "ESTADO CIVIL SEPARADO SELECIONADO!");
        printf("ESTADO CIVIL SEPARADO SELECIONADO!");
            break;
        case 4 :
        fprintf(ponteiro_arquivo, "ESTADO CIVIL DIVORCIADO SELECIONADO!");
        printf("ESTADO CIVIL DIVORCIADO SELECIONADO!");
            break;
        case 5 :
        fprintf(ponteiro_arquivo, "ESTADO CIVIL VIUVO SELECIONADO!");
        printf("ESTADO CIVIL VIUVO SELECIONADO!");
            break;
        default :
        printf("\nVALOR INVALIDO");
            goto loop_estado_civil;
    }

    //Filiação

    char Nome_Mae[100];
    char Nome_Pai[100];

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t  NOME DOS PAIS");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t  NOME DOS PAIS");

    //PROBLEMAS DE NOME COM ESPAÇO ACONTECENDO
    printf("\n\n\nNOME DA MAE: ");
    scanf(" %[^\n]s", &Nome_Mae);
    fprintf(ponteiro_arquivo, "\n\nNome da Mae: %s", Nome_Mae);
    printf("Nome da Mae: %s", Nome_Mae);

    //PROBLEMAS DE NOME COM ESPAÇO ACONTECENDO
    printf("\n\nNOME DO PAI: ");
    scanf(" %[^\n]s", &Nome_Pai);
    fprintf(ponteiro_arquivo, "\nNome do Pai: %s", Nome_Pai);
    printf("Nome do Pai: %s", Nome_Pai);

    //DOCUMENTOS GERAIS
    fprintf(ponteiro_arquivo, "\n\n\n\n\t\t\t\t\t\t\t\t\t   DOCUMENTOS");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t  DOCUMENTOS");
    fprintf(ponteiro_arquivo, "\n\n\n\n\t\t\t\t\t\t\t\t\t  REGISTRO GERAL");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\tREGISTRO GERAL");

    //REGISTRO GERAL
    char Num_RG [11];
    int Dia_Exped_RG;
    int Mes_Exped_RG;
    int Ano_Exped_RG;

    printf("\n\n\nRG (INCLUINDO TRACOS, NUMEROS OU LETRAS): ");
    scanf("%s", &Num_RG);
    fprintf(ponteiro_arquivo, "\n\nN RG: %s", Num_RG);
    printf("N RG: %s", Num_RG);

    printf("\n\nDATA DA EXPEDICAO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Exped_RG);

    printf("MES: ");
    scanf("%d", &Mes_Exped_RG);

    printf("ANO: ");
    scanf("%d", &Ano_Exped_RG);

    fprintf(ponteiro_arquivo, "\nData de Expedicao: %02d/ %02d/ %d", Dia_Exped_RG, Mes_Exped_RG, Ano_Exped_RG);
    printf("\nData de Expedicao: %02d/ %02d/ %d", Dia_Exped_RG, Mes_Exped_RG, Ano_Exped_RG);

    char Orgao_Expedidor_RG[15];

    //PROBLEMAS DE NOME COM ESPAÇO ACONTECENDO
    printf("\n\nORGAO EXPEDIDOR: ");
    scanf(" %[^\n]s", &Orgao_Expedidor_RG);
    fprintf(ponteiro_arquivo, "\nOrgao Expedidor: %s", Orgao_Expedidor_RG);
    printf("Orgao Expedidor: %s", Orgao_Expedidor_RG);

    char Naturalidade_RG[50];

    printf("\n\nNATURALIDADE: ");
    scanf(" %[^\n]s", &Naturalidade_RG);
    fprintf(ponteiro_arquivo, "\nNaturalidade: %s", Naturalidade_RG);
    printf("Naturalidade: %s", Naturalidade_RG);

    //INICIO UF do RG
    //Switch Case para UF do RG!
    int Escolha_UF_RG;
    fprintf(ponteiro_arquivo, "\nEstado: ");
    printf("\n\nUNIDADE FEDERATIVA");
    printf("\n\nUTILIZE O NUMERO CORRESPONDENTE A UMA DAS SEGUINTES OPCOES: ");

    printf("\n\n1 - ACRE");
    printf("\n2 - ALAGOAS");
    printf("\n3 - AMAPA");
    printf("\n4 - AMAZONAS");
    printf("\n5 - BAHIA");
    printf("\n6 - CEARA");
    printf("\n7 - DISTRITO FEDERAL");
    printf("\n8 - ESPIRITO SANTO");
    printf("\n9 - GOAIAS");
    printf("\n10 - MARANHAO");
    printf("\n11 - MATO GROSSO");
    printf("\n12 - MATO GROSSO DO SUL");
    printf("\n13 - MINAS GERAIS");
    printf("\n14 - PARA");
    printf("\n15 - PARAIBA");
    printf("\n16 - PARANA");
    printf("\n17 - PERNAMBUCO");
    printf("\n18 - PIAUI");
    printf("\n19 - RIO DE JANEIRO");
    printf("\n20 - RIO GRANDE DO NORTE");
    printf("\n21 - RIO GRANDE DO SUL");
    printf("\n22 - RONDONIA");
    printf("\n23 - RORAIMA");
    printf("\n24 - SANTA CATARINA");
    printf("\n25- SAO PAULO");
    printf("\n26 - SERGIPE");
    printf("\n27 - TOCANTINS");

    loop_uf_rg:
    printf("\n\nDIGITE O VALOR ENTRE 1 e 27: ");
    scanf("%d", &Escolha_UF_RG);

    switch (Escolha_UF_RG)
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
            printf("\nVALOR INVALIDO");
            goto loop_uf_rg;
    }
    //Fim do Switch Case para UF do RG
    //ENCERRA RG

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t    CADASTRO DE PESSOAS FISICAS");
    printf("\n\n\n\t\t\t\t\t\t\t\t\tCADASTRO DE PESSOAS FISICAS");

    //CADASTRO DE PESSOAS FÍSICAS
    char Num_CPF[14];
    int Dia_Exped_CPF;
    int Mes_Exped_CPF;
    int Ano_Exped_CPF;

    printf("\n\n\nNUMERO CPF (INCLUINDO PONTOS E TRACOS): ");
    scanf("%s", &Num_CPF);
    fprintf(ponteiro_arquivo, "\n\nN CPF: %s", Num_CPF);
    printf("N CPF: %s", Num_CPF);

    printf("\n\nDATA DA EXPEDICAO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Exped_CPF);

    printf("MES: ");
    scanf("%d", &Mes_Exped_CPF);

    printf("ANO: ");
    scanf("%d", &Ano_Exped_CPF);

    fprintf(ponteiro_arquivo, "\nData de Expedicao: %02d/ %02d/ %d", Dia_Exped_CPF, Mes_Exped_CPF, Ano_Exped_CPF);
    printf("\nData de Expedicao: %02d/ %02d/ %d", Dia_Exped_CPF, Mes_Exped_CPF, Ano_Exped_CPF);
    //ENCERRA CPF

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t   CARTEIRA DE TRABALHO E PREVIDENCIA SOCIAL");
    printf("\n\n\n\t\t\t\t\t\t\t\tCARTEIRA DE TRABALHO E PREVIDENCIA SOCIAL");

    //CTPS
    char Num_CTPS[16];
    int Dia_Exped_CTPS;
    int Mes_Exped_CTPS;
    int Ano_Exped_CTPS;
    char Num_PIS[15];

    printf("\n\n\nN CTPS (NUMERO/ SERIE - UF): ");
    scanf(" %[^\n]s", &Num_CTPS);
    fprintf(ponteiro_arquivo, "\n\nN CTPS: %s", Num_CTPS); //CTPS
    printf("N CTPS: %s", Num_CTPS); //CTPS

    printf("\n\nDATA DA EXPEDICAO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Exped_CTPS);

    printf("MES: ");
    scanf("%d", &Mes_Exped_CTPS);

    printf("ANO: ");
    scanf("%d", &Ano_Exped_CTPS);

    fprintf(ponteiro_arquivo, "\nData de Expedicao: %02d/ %02d/ %d", Dia_Exped_CTPS, Mes_Exped_CTPS, Ano_Exped_CTPS);
    printf("\nData de Expedicao: %02d/ %02d/ %d", Dia_Exped_CTPS, Mes_Exped_CTPS, Ano_Exped_CTPS);

    printf("\n\nPIS (INCLUINDO PONTOS E TRACOS): ");
    scanf("%s", &Num_PIS);
    fprintf(ponteiro_arquivo, "\nPIS: %s", Num_PIS);
    printf("PIS: %s", Num_PIS);
    //ENCERRANDO CTPS

    //TÍTULO DE ELEITOR
    int Num_Inscricao;
    int Zona;
    char Secao[4];

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\tTITULO DE ELEITOR");
    printf("\n\n\n\t\t\t\t\t\t\t\t\tTITULO DE ELEITOR");

    printf("\n\n\nNUMERO DE INSCRICAO (INCLUINDO DIGITO VERIFICADOR - APENAS NUMEROS): ");
    scanf("%i", &Num_Inscricao);
    fprintf(ponteiro_arquivo, "\n\nNumero de Inscricao: %i", Num_Inscricao);
    printf("Numero de Inscricao: %i", Num_Inscricao);

    printf("\n\nZONA: ");
    scanf("%i", &Zona);
    fprintf(ponteiro_arquivo, "\nZona: %i", Zona);
    printf("Zona: %i", Zona);

    printf("\n\nSECAO: ");
    scanf("%s", &Secao);
    fprintf(ponteiro_arquivo, "\nSecao: %s", Secao);
    printf("Secao: %s", Secao);

    //Município do Título
    char Municipio_Titulo[50];

    printf("\n\nMUNICIPIO: ");
    scanf(" %[^\n]s", &Municipio_Titulo);
    fprintf(ponteiro_arquivo, "\nMunicipio: %s", Municipio_Titulo);
    printf("Municipio: %s", Municipio_Titulo);

    //Switch Case para UF do título!
    int Escolha_UF_Titulo;
    fprintf(ponteiro_arquivo, "\nEstado: ");
    printf("\n\nUNIDADE FEDERATIVA");
    printf("\n\nUTILIZE O NUMERO CORRESPONDENTE A UMA DAS SEGUINTES OPCOES: ");

    printf("\n\n1 - ACRE");
    printf("\n2 - ALAGOAS");
    printf("\n3 - AMAPA");
    printf("\n4 - AMAZONAS");
    printf("\n5 - BAHIA");
    printf("\n6 - CEARA");
    printf("\n7 - DISTRITO FEDERAL");
    printf("\n8 - ESPIRITO SANTO");
    printf("\n9 - GOAIAS");
    printf("\n10 - MARANHAO");
    printf("\n11 - MATO GROSSO");
    printf("\n12 - MATO GROSSO DO SUL");
    printf("\n13 - MINAS GERAIS");
    printf("\n14 - PARA");
    printf("\n15 - PARAIBA");
    printf("\n16 - PARANA");
    printf("\n17 - PERNAMBUCO");
    printf("\n18 - PIAUI");
    printf("\n19 - RIO DE JANEIRO");
    printf("\n20 - RIO GRANDE DO NORTE");
    printf("\n21 - RIO GRANDE DO SUL");
    printf("\n22 - RONDONIA");
    printf("\n23 - RORAIMA");
    printf("\n24 - SANTA CATARINA");
    printf("\n25- SAO PAULO");
    printf("\n26 - SERGIPE");
    printf("\n27 - TOCANTINS");

    loop_uf_titulo:
    printf("\n\nDIGITE O VALOR ENTRE 1 e 27: ");
    scanf("%d", &Escolha_UF_Titulo);

    switch (Escolha_UF_Titulo)
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
            printf("\nVALOR INVALIDO");
            goto loop_uf_titulo;
    }
    //Fim do Switch Case do UF do Titulo

    //Expedição
    int Dia_Exped_Titulo;
    int Mes_Exped_Titulo;
    int Ano_Exped_Titulo;

    //Data da Expedição do Título
    printf("\n\nDATA DA EXPEDICAO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Exped_Titulo);

    printf("MES: ");
    scanf("%d", &Mes_Exped_Titulo);

    printf("ANO: ");
    scanf("%d", &Ano_Exped_Titulo);

    fprintf(ponteiro_arquivo, "\nData de Expedicao: %02d/ %02d/ %d", Dia_Exped_Titulo, Mes_Exped_Titulo, Ano_Exped_Titulo);
    printf("\nData de Expedicao: %02d/ %02d/ %d", Dia_Exped_Titulo, Mes_Exped_Titulo, Ano_Exped_Titulo);
    //FIM DA NUMERAÇÃO DO TÍTULO

    //INÍCIO CERTIFICADO MILITAR
    int Escolha_Certificado_Militar;
    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t   RESERVISTA\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t RESERVISTA");

    printf("\n\n\nESCOLHA O NUMERO CORRESPONDENTE AO DOCUMENTO: ");
    printf("\n\n1 - CERTIFICADO DE DISPENSA DE INCORPORACAO");
    printf("\n2 - CERTIFICADO DE RESERVA MILITAR (RESERVISTA)");

    loop_reservista:
    printf("\n\nDIGITE O VALOR ENTRE 1 E 2: ");
	scanf("%d", &Escolha_Certificado_Militar);

    switch(Escolha_Certificado_Militar)
    {
        case 1 :
            fprintf(ponteiro_arquivo, "\nSelecionado: Certificado de Dispensa de Incorporacao");
            printf("\nSelecionado: Certificado de Dispensa de Incorporacao");
            break;

        case 2 :
            fprintf(ponteiro_arquivo, "\nSelecionado: Reservista");
            printf("\nSelecionado: Reservista");
            break;
        default :
            printf("VALOR INVALIDO!");
            goto loop_reservista;
    }

    //Certificado de Dispensa de Incorporacao
    int N_CDI;
    char RA_CDI [12];
    char Serie_CDI[1];

    if (Escolha_Certificado_Militar == 1)
    {
        printf("\n\nNUMERO: ");
        scanf("%d", &N_CDI);
        fprintf(ponteiro_arquivo, "\n\nNumero: %d", N_CDI);
        printf("Numero: %d", N_CDI);

        printf("\n\nRA: ");
        scanf("%s", &RA_CDI);
        fprintf(ponteiro_arquivo, "\nRA: %s", RA_CDI);
        printf("RA: %s", RA_CDI);

        printf("\n\nSERIE: ");
        scanf("%s", &Serie_CDI);
        fprintf(ponteiro_arquivo, "\nSerie: %s", Serie_CDI);
        printf("Serie: %s", Serie_CDI);
    }

    //Certificado de Alistamento Militar
    int N_CAM;
    int RA_CAM;

    if (Escolha_Certificado_Militar == 2)
    {
        printf("\n\nNUMERO: ");
        scanf("%d", &N_CAM);
        fprintf(ponteiro_arquivo, "\n\nNumero: %d", N_CAM);
        printf("Numero: %d", N_CAM);

        printf("\n\nRA: ");
        scanf("%d", &RA_CAM);
        fprintf(ponteiro_arquivo, "\nRA: %d", RA_CAM);
        printf("RA: %d", RA_CAM);
    }
    //FIM DO CERTIFICADO MILITAR

    //INICIO REGISTRO CIVIL
    char Cartorio_Emissor [130];
    int Dia_Exped_Registro;
    int Mes_Exped_Registro;
    int Ano_Exped_Registro;
    int Matricula_Registro;
    int Folha_Registro;

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t  REGISTRO CIVIL");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tREGISTRO CIVIL");

    printf("\n\n\nCARTORIO EMISSOR: ");
    scanf(" %[^\n]s", &Cartorio_Emissor);
    fprintf(ponteiro_arquivo, "\n\nCartorio: %s", Cartorio_Emissor);
    printf("Cartorio: %s", Cartorio_Emissor);

    //Data de Emissão
    printf("\n\nDATA DA EMISSAO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Exped_Registro);

    printf("MES: ");
    scanf("%d", &Mes_Exped_Registro);

    printf("ANO: ");
    scanf("%d", &Ano_Exped_Registro);

    fprintf(ponteiro_arquivo, "\nData de Emissao: %02d/ %02d/ %d", Dia_Exped_Registro, Mes_Exped_Registro, Ano_Exped_Registro);
    printf("\nData de Emissao: %02d/ %02d/ %d", Dia_Exped_Registro, Mes_Exped_Registro, Ano_Exped_Registro);
    //Fim da Data de Emissao

    printf("\n\nMATRICULA/ NUMERO DE ORDEM (APENAS NUMEROS): ");
    scanf("%d", &Matricula_Registro);
    fprintf(ponteiro_arquivo, "\nMatricula: %d", Matricula_Registro);
    printf("Matricula: %d", Matricula_Registro);

    printf("\n\nFOLHA: ");
    scanf("%d", &Folha_Registro);
    fprintf(ponteiro_arquivo, "\nFolha: %d", Folha_Registro);
    printf("Folha: %d", Folha_Registro);
    //FIM REGISTRO CIVIL


    /*---------------------------------

    DOCUMENTOS SOBRE FORMAÇÃO ACADÊMICA

    ---------------------------------*/

    //SWITCH CASE PARA NÍVEL ACADÊMICO
    int Escolha_Nivel_Academico;

    fprintf(ponteiro_arquivo, "\n\n\n\n\t\t\t\t\t\t\t\t\tFORMACAO ACADEMICA\n");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\tFORMACAO ACADEMICA");
    printf("\n\n\n\nNIVEL (UTILIZE O NUMERO CORRESPONDENTE A UMA DAS SEGUINTES OPCOES): ");

    printf("\n\n1 - ALFABETIZADO");
    printf("\n2 - ENSINO FUNDAMENTAL");
    printf("\n3 - ENSINO MEDIO");
    printf("\n4 - ENSINO TECNICO");
    printf("\n5 - ENSINO SUPERIOR (GRADUACAO)");
    printf("\n6 - POS-GRADUACAO");
    printf("\n7 - MESTRADO");
    printf("\n8 - DOUTORADO");
    printf("\n9 - PHD (TITULO NO EXTERIOR)");
    printf("\n10 - LIVRE DOCENCIA");

    loop_formacao:
    printf("\n\nDIGITE O VALOR ENTRE 1 e 10: ");
    scanf("%d", &Escolha_Nivel_Academico);

    switch (Escolha_Nivel_Academico)
    {
        case 1 :
            fprintf(ponteiro_arquivo, "\n1 - Selecionado: Alfabetizado");
            printf("\n1 - Selecionado: Alfabetizado");
            break;
        case 2 :
            fprintf(ponteiro_arquivo, "\n2 - Selecionado: Ensino Fundamental");
            printf("\n2 - Selecionado: Ensino Fundamental");
            break;
        case 3 :
            fprintf(ponteiro_arquivo, "\n3 - Selecionado: Ensino Medio");
            printf("\n3 - Selecionado: Ensino Medio");
            break;
        case 4 :
            fprintf(ponteiro_arquivo, "\n4 - Selecionado: Ensino Tecnico");
            printf("\n4 - Selecionado: Ensino Tecnico");
            break;
        case 5 :
            fprintf(ponteiro_arquivo, "\n5 - Selecionado: Ensino Superior (Graduacao)");
            printf("\n5 - Selecionado: Ensino Superior (Graduacao)");
            break;
        case 6 :
            fprintf(ponteiro_arquivo, "\n6 - Selecionado: Pos-Graduacao");
            printf("\n6 - Selecionado: Pos-Graduacao");
            break;
        case 7 :
            fprintf(ponteiro_arquivo, "\n7 - Selecionado: Mestrado");
            printf("\n7 - Selecionado: Mestrado");
            break;
        case 8 :
            fprintf(ponteiro_arquivo, "\n8 - Selecionado: Doutorado");
            printf("\n8 - Selecionado: Doutorado");
            break;
        case 9 :
            fprintf(ponteiro_arquivo, "\n9 - Selecionado: PHD (Titulo no Exterior)");
            printf("\n9 - Selecionado: PHD (Titulo no Exterior)");
            break;
        case 10 :
            fprintf(ponteiro_arquivo, "\n10 - Selecionado: Livre Docencia");
            printf("\n10 - Selecionado: Livre Docencia");
            break;
        default :
            printf("\nVALOR INVALIDO!");
            goto loop_formacao;
    }
    //FIM DO SWITCH CASE PARA NÍVEL ACADÊMICO

    //----------------------------------------------------

    //SWITCH CASE DA SITUAÇÃO DA MATRÍCULA
    int Escolha_Situacao_Matricula;
    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\tSITUACAO DA MATRICULA\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tSITUACAO DA MATRICULA");
    printf("\n\n\nDIGITE O NUMERO CORRESPONDENTE A SITUACAO: ");

    printf("\n\n1 - CURSANDO");
    printf("\n2 - TRANCADO");
    printf("\n3 - INCOMPLETO");
    printf("\n4 - CONCLUIDO");

    loop_matricula:
    printf("\n\nDIGITE O NUMERO ENTRE 1 E 4: ");
    scanf("%i", &Escolha_Situacao_Matricula);

    switch (Escolha_Situacao_Matricula)
    {
        case 1 :
            fprintf(ponteiro_arquivo, "\n1 - Cursando");
            printf("\n1 - Cursando");
            break;
        case 2 :
            fprintf(ponteiro_arquivo, "\n2 - Trancado");
            printf("\n2 - Trancado");
            break;
        case 3 :
            fprintf(ponteiro_arquivo, "\n3 - Incompleto");
            printf("\n3 - Incompleto");
            break;
        case 4 :
            fprintf(ponteiro_arquivo, "\n4 - Concluido");
            printf("\n4 - Concluido");
            break;
        default :
            printf("\nVALOR INVALIDO");
            goto loop_matricula;
    }
    //FIM DO SWITCH CASE DA MATRÍCULA

    //----------------------------------------------------

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t  DADOS DA FORMACAO");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tDADOS DA FORMACAO");

    //Curso
    char Nome_Curso[100];

    printf("\n\n\nNOME DO CURSO: ");
    scanf(" %[^\n]s", &Nome_Curso);
    fprintf(ponteiro_arquivo, "\n\nNome do Curso: %s", Nome_Curso);
    printf("Nome do Curso: %s", Nome_Curso);

    //Nome
    char Nome_Instituicao[100];

    printf("\n\nNOME DA INSTITUICAO: ");
    scanf(" %[^\n]s", &Nome_Instituicao);
    fprintf(ponteiro_arquivo, "\nNome da Instituicao: %s", Nome_Instituicao);
    printf("Nome da Instituicao: %s", Nome_Instituicao);

    //Data do Ingresso
    int Dia_Inicio_Curso;
    int Mes_Inicio_Curso;
    int Ano_Inicio_Curso;

    printf("\n\nDATA DE INGRESSO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Inicio_Curso);

    printf("MES: ");
    scanf("%d", &Mes_Inicio_Curso);

    printf("ANO: ");
    scanf("%d", &Ano_Inicio_Curso);

    fprintf(ponteiro_arquivo, "\nData de Ingresso: %02d/ %02d/ %d", Dia_Inicio_Curso, Mes_Inicio_Curso, Ano_Inicio_Curso);
    printf("\nData de Ingresso: %02d/ %02d/ %d", Dia_Inicio_Curso, Mes_Inicio_Curso, Ano_Inicio_Curso);

    if (Escolha_Situacao_Matricula == 4)
    {
    //Data da Conclusão
    int Dia_Termino_Curso;
    int Mes_Termino_Curso;
    int Ano_Termino_Curso;

    printf("\n\nDATA DE TERMINO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Termino_Curso);

    printf("MES: ");
    scanf("%d", &Mes_Termino_Curso);

    printf("ANO: ");
    scanf("%d", &Ano_Termino_Curso);

    fprintf(ponteiro_arquivo, "\nData de Termino: %02d/ %02d/ %d", Dia_Termino_Curso, Mes_Termino_Curso, Ano_Termino_Curso);
    printf("\nData de Termino: %02d/ %02d/ %d", Dia_Termino_Curso, Mes_Termino_Curso, Ano_Termino_Curso);
    }

    //----------------------------------------------------------------

    //ENDEREÇO
    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t    ENDERECO\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tENDERECO");

    char Logradouro [100]; //Rua, Av, Praça, etc;
    char Num_Endereco[10];
    char Complemento [100]; //Complemento como Apto/ Casa/ Bloco/ Etc;
    char Bairro[100];
    char CEP [9];
    char Referencia[100]; //Referência para localizar imóvel
    char Municipio_Endereco[100];

    //TENTATIVA ENDEREÇO
    printf("\n\n\nNOME DO LOGRADOURO (RUA, AV, PRACA, ETC): ");
    scanf(" %[^\n]s", &Logradouro);
    fprintf(ponteiro_arquivo, "\nLogradouro: %s", Logradouro);
    printf("Logradouro: %s", Logradouro);

    printf("\n\nNUMERO (DIGITE S/N SE NAO HOUVER NUMERACAO DO IMOVEL): ");
    scanf("%s", &Num_Endereco);
    fprintf(ponteiro_arquivo, "\nNumero: %s", Num_Endereco);
    printf("Numero: %s", Num_Endereco);

    printf("\n\nCOMPLEMENTO (DIGITE S/N SE NAO HOUVER): ");
    scanf(" %[^\n]s", &Complemento);
    fprintf(ponteiro_arquivo, "\nComplemento: %s", Complemento);
    printf("Complemento: %s", Complemento);

    printf("\n\nBAIRRO: ");
    scanf(" %[^\n]s", &Bairro);
    fprintf(ponteiro_arquivo, "\nBairro: %s", Bairro);
    printf("Bairro: %s", Bairro);

    printf("\n\nCEP (INCLUINDO TRACOS): ");
    scanf("%s", &CEP);
    fprintf(ponteiro_arquivo, "\nCEP: %s", CEP);
    printf("CEP: %s", CEP);

    printf("\n\nREFERENCIA (DIGITE 'NAO POSSUI' CASO NAO FOR INFORMADA): ");
    scanf(" %[^\n]s", &Referencia);
    fprintf(ponteiro_arquivo, "\nReferencia: %s", Referencia);
    printf("Referencia: %s", Referencia);

    printf("\n\nMUNICIPIO: ");
    scanf(" %[^\n]s", &Municipio_Endereco);
    fprintf(ponteiro_arquivo, "\nMunicipio: %s\n", Municipio_Endereco);
    printf("Municipio: %s", Municipio_Endereco);


    //Switch Case para UF Endereço:
    int Escolha_Estado_Endereco;
    fprintf(ponteiro_arquivo, "\n\nEstado: ");
    printf("\n\nUNIDADE FEDERATIVA");
    printf("\n\nUTILIZE O NUMERO CORRESPONDENTE A UMA DAS SEGUINTES OPCOES: ");

    printf("\n\n1 - ACRE");
    printf("\n2 - ALAGOAS");
    printf("\n3 - AMAPA");
    printf("\n4 - AMAZONAS");
    printf("\n5 - BAHIA");
    printf("\n6 - CEARA");
    printf("\n7 - DISTRITO FEDERAL");
    printf("\n8 - ESPIRITO SANTO");
    printf("\n9 - GOAIAS");
    printf("\n10 - MARANHAO");
    printf("\n11 - MATO GROSSO");
    printf("\n12 - MATO GROSSO DO SUL");
    printf("\n13 - MINAS GERAIS");
    printf("\n14 - PARA");
    printf("\n15 - PARAIBA");
    printf("\n16 - PARANA");
    printf("\n17 - PERNAMBUCO");
    printf("\n18 - PIAUI");
    printf("\n19 - RIO DE JANEIRO");
    printf("\n20 - RIO GRANDE DO NORTE");
    printf("\n21 - RIO GRANDE DO SUL");
    printf("\n22 - RONDONIA");
    printf("\n23 - RORAIMA");
    printf("\n24 - SANTA CATARINA");
    printf("\n25- SAO PAULO");
    printf("\n26 - SERGIPE");
    printf("\n27 - TOCANTINS");

    loop_uf_endereco:
    printf("\n\nDIGITE O VALOR ENTRE 1 e 27: ");
    scanf(" %d", &Escolha_Estado_Endereco);

    switch (Escolha_Estado_Endereco)
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
            printf("\nVALOR INVALIDO");
            goto loop_uf_endereco;
    }
    //Fim do Switch Case do UF do Titulo

    //-----------------------------------------------------------------------

    int Escolha_Situacao_Funcionario;
    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t  DATAS CONTRATUAIS\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t\tDATAS CONTRATUAIS");

    printf("\n\nFUNCIONARIO ESTA ATIVO?");

    printf("\n1 - ATIVO");
    printf("\n2 - INATIVO");

    loop_escolha_funcionario:
    printf("\n\nDIGITE A OPCAO DESEJADA: ");
    scanf(" %d", &Escolha_Situacao_Funcionario);

    switch (Escolha_Situacao_Funcionario)
    {
        case 1 :
            printf("\nSELECIONADO ATIVO");
            break;
        case 2 :
            printf("\nSELECIONADO INATIVO");
            break;
        default :
            printf("VALOR INVALIDO!");
            goto loop_escolha_funcionario;
    }


    //Datas Contratuais

    if (Escolha_Situacao_Funcionario == 1)
    {

    //Data de Admissão
    int Dia_Admissao;
    int Mes_Admissao;
    int Ano_Admissao;

    printf("\n\n\nDATA DE ADMISSAO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Admissao);

    printf("MES: ");
    scanf("%d", &Mes_Admissao);

    printf("ANO: ");
    scanf("%d", &Ano_Admissao);

    fprintf(ponteiro_arquivo, "\nData de Admissao: %02d/ %02d/ %d", Dia_Admissao, Mes_Admissao, Ano_Admissao);
    printf("\nData de Admissao: %02d/ %02d/ %d", Dia_Admissao, Mes_Admissao, Ano_Admissao);
    }



    if (Escolha_Situacao_Funcionario == 2)
    {
    //Data de Admissão
    int Dia_Admissao;
    int Mes_Admissao;
    int Ano_Admissao;

    printf("\n\n\nDATA DE ADMISSAO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Admissao);

    printf("MES: ");
    scanf("%d", &Mes_Admissao);

    printf("ANO: ");
    scanf("%d", &Ano_Admissao);

    fprintf(ponteiro_arquivo, "\nData de Admissao: %02d/ %02d/ %d", Dia_Admissao, Mes_Admissao, Ano_Admissao);
    printf("\nData de Admissao: %02d/ %02d/ %d", Dia_Admissao, Mes_Admissao, Ano_Admissao);

    //Data de Desligamento
    int Dia_Afastamento;
    int Mes_Afastamento;
    int Ano_Afastamento;

    printf("\n\n\nDATA DE AFASTAMENTO");

    printf("\n\nDIA: ");
    scanf("%d", &Dia_Afastamento);

    printf("MES: ");
    scanf("%d", &Mes_Afastamento);

    printf("ANO: ");
    scanf("%d", &Ano_Afastamento);

    fprintf(ponteiro_arquivo, "\nData de Afastamento: %02d/ %02d/ %d", Dia_Afastamento, Mes_Afastamento, Ano_Afastamento);
    printf("\nData de Afastamento: %02d/ %02d/ %d", Dia_Afastamento, Mes_Afastamento, Ano_Afastamento);
    }

    fprintf(ponteiro_arquivo, "\n\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLUIDO***\n");
    printf("\n\n\n\t\t\t\t\t\t\t\t\t***REGISTRO CONCLUIDO***\n");

    fclose(ponteiro_arquivo); //FECHAMENTO DE PONTEIRO

    return(0);
}
