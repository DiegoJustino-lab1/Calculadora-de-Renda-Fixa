#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float valorInvestido, resultadoInvestimento, resultadoPoupanca;
    char i, modalidadeInvestimento;
    int  tempoInvestido;


    printf("\aOl?, meu nome ? Isa, sou sua Assistente de Investimentos!\n\n");
    sleep(2);
    printf("\aVoc? est? usando a Calculadora de Investimentos, Vamos come?ar?\n\n");
    sleep(2);


    do{
        printf("\aQuanto deseja investir? R$");
        scanf ("%f", &valorInvestido);
        printf("\n\aPor quanto tempo voc? deseja investir? \n(3 Meses, 6 Meses, 9 Meses, 12 Meses) \n");
        scanf ("%i", &tempoInvestido);

        if (tempoInvestido!=3 && tempoInvestido!=6 && tempoInvestido!=9 && tempoInvestido!=12){
          printf ("Por favor, selecione um tempo v?lido!");
          break;
        }


        printf("\n\aEscolha uma Modalidade de Investimento:\n| A-)CDB Banco Inter (100%% CDI)\n| B-) Tesouro Selic (11.75%% a.a.)\n| C-) Tesouro Pr?-Fixado (12.13%% a.a)\n| D-) LCA BOCOM (12%% a.a.)\n| E-) LCI DI (93%% CDI)\n(Digite [A,B,C,D ou E])\n");
        getchar();
        scanf("%c", &modalidadeInvestimento);


        if (modalidadeInvestimento!='A' && modalidadeInvestimento!='a'  && modalidadeInvestimento!='B' && modalidadeInvestimento!='b' && modalidadeInvestimento!='C' && modalidadeInvestimento!='c' && modalidadeInvestimento!='D' && modalidadeInvestimento!='d' && modalidadeInvestimento!='E' && modalidadeInvestimento!='e')
        {
          printf ("\nPor favor, selecione uma modalidade de investimento valida!");
        }

        resultadoPoupanca = valorInvestido* pow((1+0.0072), tempoInvestido);

        switch (modalidadeInvestimento)
        {
        case 'A':
          resultadoInvestimento = valorInvestido* pow((1+0.0092), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em Banco Inter por %i Meses, voc? ter? R$%.2f ao final da sua aplica??o!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'a':
          resultadoInvestimento = valorInvestido* pow((1+0.0092), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em Banco Inter por %i Meses, voc? ter? R$%.2f ao final da sua aplica??o!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'B':
          resultadoInvestimento = valorInvestido* pow((1+0.0093), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em Tesouro Selic por %i Meses, voc? ter? R$%.2f ao final da sua aplica??o!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'b':
          resultadoInvestimento = valorInvestido* pow((1+0.0093), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em Tesouro Selic por %i Meses, voc? ter? R$%.2f ao final da sua aplica??o!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'C':
          resultadoInvestimento = valorInvestido* pow((1+0.0096), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em Tesouro Pr?-fixado por %i Meses, voc? ter? R$%.2f ao final da sua aplica??o!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?aa, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'c':
          resultadoInvestimento = valorInvestido* pow((1+0.0096), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em Tesouro Pr?-fixado por %i Meses, voc? ter? R$%.2f ao final da sua aplica??o!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'D':
          resultadoInvestimento = valorInvestido* pow((1+0.0095 ), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em LCA BOCOM por %i Meses, voc? ter? R$%.2f ao final da sua aplica??o!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'd':
          resultadoInvestimento = valorInvestido* pow((1+0.0095 ), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em LCA BOCOM por %i Meses, voc? ter? R$%.2f ao final da sua aplica??oo!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'E':
          resultadoInvestimento = valorInvestido* pow((1+0.0084), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em LCI por %i Meses, voc? ter? R$%.2f ao final da sua aplica??oo!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        case 'e':
          resultadoInvestimento = valorInvestido* pow((1+0.0084), tempoInvestido);
          printf("\nCaso voc? invista R$%.2f em LCI por %i Meses, voc? ter? R$%.2f ao final da sua aplica??oo!", valorInvestido, tempoInvestido, resultadoInvestimento);
          printf("\nEnquanto na poupan?a, voc? teria R$%.2f ao final do investimento!", resultadoPoupanca);
        break;
        default:
          break;
        }
      sleep(2);
      printf("\n\n\aDeseja continuar usando a Calculadora de Investimento?\n(Digite [S] para Sim ou [N] para N?o\n");
      getchar();
	  scanf("%c", &i);
		
	  sleep(2);
	  system("cls");


      } while (i=='S' || i=='s');

      printf("\nMuito obrigado por usar a Calculadora de investimento!");
      sleep(1);
      printf("\nEsse projeto faz parte da Avalia??o Continuada II da mat?ria de Algoritmos de Programa??o,\ndo curso de Engenharia de Computa??o!\n\n\n");
      sleep(4);

      return 0;
}

