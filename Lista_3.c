#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definição de constantes.
#define TAM_MAX 100


//Inicio das sub-rotinas

int ex1(void)
{
  int numero[20], i;
  for (i = 1; i <= 20; i++)
    {
      printf("Insira o %d valor: ", i);
      scanf("%d", &numero[i]);
    }
  for(i = 20; i>= 0; i--)
    {
      printf("Valor = %d\n\n", numero[i]);
    }
}

int ex2(void)
{
  int lancamento, i, num;
  int frequencia [6] = {0}; //Inicializando a frequencia com 0
  float resultado;

  printf("Insira a quantidade de lançamentos: "); 
  scanf("%d", &lancamento);

  //Gerar os lançamentos aleatorios.
  srand(time(NULL)); // Para gerar os numeros aleatorios
  
  //Laço para gerar numeros aleatorios e armazenar suas faces
  for(i = 0; i < lancamento; i++)
    {
      num = rand() % 6 + 1; //Para Gerar numeros aleatorios de 1 a 6
      printf("%d \t\n", num);
      frequencia [num - 1]++;//Incrementa a frequencia da face correspondente.
    }

  //Apresentação das frequencias
  for(i = 0; i < 6; i++)
    {
      //calculo da porcentagem correspondente a frequencia
      resultado = ((float)frequencia[i]/lancamento)*100;

      //apresentação dos valores
      printf("%d: %d ocorrencia %.1f%\n", i+1, frequencia[i], resultado); //resultado);
    }
  
}

int ex3(void)
{
 int matriz[5][5] = {0}, linha, coluna;

  //criação da matriz 0
  for(linha = 0; linha < 5; linha++)
    {
      for(coluna=0; coluna<5; coluna++)
        {
        }
    }

  //preenchendo a diagonal principal com 1
  for(linha = 0; linha < 5; linha ++)
    {
      matriz[linha][linha] = 1;
    }

  //imprimindo a matriz preenchida
  for(linha = 0; linha < 5; linha++)
    {
      printf("\n");
      for(coluna = 0; coluna < 5; coluna++)
        {
          printf("%d\t", matriz[linha][coluna]);
        }
    }
  printf("\n\n");
  
}

int ex4(void)
{
  int matriz[TAM_MAX][TAM_MAX], transposta[TAM_MAX][TAM_MAX], linha, coluna, soma = 0, contador = 0, media, i, j;

  //Validação da matriz
  do
    {
      printf("Insira as dimenções da matriz (linha): ");
      scanf("%d", &linha);
      printf("Insira as dimenções da matriz (colunas): ");
      scanf("%d", &coluna);

      if (linha > TAM_MAX || coluna > TAM_MAX)
        printf("As dimensões são maiores que o tamanho maximo permitido\n");
    }while (linha > 100 && coluna > 100));

  //preenchendo a matriz com valores
  printf("Insira os valores da matriz: ");
  for(i = 0; i < linha; i++)
    {
      for(j = 0; j < coluna; j++)
        {
          printf("Insira o valor da posição [%d][%d]: ", linha, coluna);
          scanf("%d", &matriz[i][j]);

          //soma de todos os elementos contidos na matriz
          soma += matriz[i][j];       
        }
    }

  //media dos elementos
  media = soma / (linha*coluna);
  printf("A media dos elementos da matriz é: %d\n", media);

  for(i = 0; i < linha; i++)
    {
      for(j = 0; j < coluna; j++)
        {
          if (matriz[i][j] > media && matriz[i][j] % 2 == 0)
            contador++;
        }
    }
  printf("A quantidade de elemntos pares acima da media é: %d\n", contador);

  printf("Matriz Digitada: \n");
  for(i = 0; i < linha; i++)
    {
      for(j = 0; j < coluna; j++)
        {
          printf("%d ", matriz[i][j]);
        }
      printf("\n");
    }
  printf("Matriz Transposta: \n");
  for(j = 0; j < linha; j++)
    {
      for(i = 0; i < coluna; i++)
        {
          printf("%d ", matriz[i][j]);
        }
      printf("\n");
    }
}

int main(void) 
{
  int resp=1, op;
  while(resp==1)
  {
    printf("\t\tLista 4\n\n");
    printf("1 - Exercicio 1\n2 - Exercicio 2\n3 - Exercicio 3\n4 - Exercicio 4\n\n");
    scanf(" %d", &op);

    switch(op)
      {
        case 1:
        ex1();
        break;

        case 2:
        ex2();
        break;

        case 3:
        ex3();
        break;

        case 4:
        ex4();
        break;
      }

  }
  
  return 0;
}