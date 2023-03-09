/*1.Façaum  programa  que  pedeum  valor ao  usuário em  metros  e exibao  correspondente  em centímetros e milímetros.*/

#include <stdio.h>

  int main(void) 
{
  float m, cm, mm;
  int n;

  do
    {
      printf("Insira um valor em metros para transformar em cemtimetros e milimetros: ");
      scanf(" %f", &m);

      cm = m*100;
      mm = m*1000;

      printf("%fM = %fCM\n%fM = %fMM", m,cm,m,mm);
      printf("\n\nDeseja fazer outra conversao, [0] NAO // [1] SIM: ");
      scanf("%d", &n);
    }while(n!=0); 
  return 0;
}

/*2.Façaum programa que soliciteum valor em graus Fahrenheit e imprimao valor correspondente em graus Celsius usando as fórmulas que seguem:a.Usar uma variável float para ler o valor em Fahrenheit e a fórmula C=(f-32.0) * (5.0/9.0). b.Usar uma variável int para ler o valor em Fahrenheit e a fórmula C=(f-32)*(5/9).*/

#include <stdio.h>

int main(void)
{
  float valor, c;
  int aux, c2;

  printf("Insira o valor em Fahrenheit para a conversao: ");
  scanf("%f", &valor);

  aux = valor;

  if(aux == valor)
  {
    c2 = (aux - 32) * ((float)5/9);
    printf("\n\nCelsius = %d", c2);
  }
  else
  {
    c = (valor - 32.0) * (5.0/9.0);
    printf("Celsius = %.2f", c);
  }
  
  return 0;
}

/*3.Pesquise sobre a fórmula de cálculo do IMC (Índice de Massa Corporal) e crie um programa capaz de solicitar as informações, calcular e retornar o resultado*/
#include <stdio.h>
#include <math.h>

int main(void) 
{
  float peso, altura, imc;

  printf("Insira o Peso: ");
  scanf(" %f", &peso);
  printf("\nInsira a altura: ");
  scanf(" %f", &altura);

  imc = peso / (pow(altura,2));
  

  if(imc < 18.00)
  {
    printf("\nIMC = %.2f kg/m2   MAGREZA",imc);
     if(imc > 30.00)
      {
        printf("\nIMC = %.2f kg/m2   NORMAL",imc);
        if(imc < 40.00)
        {
          printf("\nIMC = %.2f kg/m2   SOBREPESO",imc);
        }
      }
    } 
         
  
  return 0;
}

/*4. Faça um programa que solicite ao usuário três númerose três pesos. Em seguida,calcule a média ponderada. Imprima o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int vetori [3], i;
  int vetorj [3], j;
  int somavetor=0, soma, s=0, mp;

  for (i = 0; i <= 2; i++) 
  {
    printf("insire o numero: ");
    scanf("%d", &vetori [i]);
  }
  printf("\n");
  for (j = 0; j <= 2; j++) 
  {
    printf("insire o peso: ");
    scanf("%d", &vetorj [j]);
    soma = vetorj[j];
    s = soma + s;
  }
  for (i = 0; i <= 2; i++) 
  {
    for (j = 0; j < i; j++)
      {
        somavetor = (somavetor + (vetori[i] * vetorj[j]));        
      }
  }

  
  
  mp = somavetor / s;

  printf("\n\nMedia ponderada = %d", mp);

  return 0;
}

/*5. Escolha uma fórmula da física para codificar, solicite as informações necessárias para o cálculo e apresente o resultado.*/  /*\n\n*/

int deslocamento(void)
{
  float s, so, v, deltat;

  printf("\nInsira a posição inicial: ");
  scanf("%f", &so);
  printf("Insira a velociade: ");
  scanf("%f", &v);
  printf("Insira o intervalo de tempo: ");
  scanf("%f", &deltat);

  s = so + (v*deltat);

  return s;  
}

int velocidademedia(void)
{
  float vm, deltas, deltat, res;
  int op; 

  printf("\n\n\t\tVelocidade media\n\n1 - Velocidade media: (Vm = Δs / Δt)\n2 -Encontrar tempo (t = Δs / Vm)\n3 -Vairação do espaço (Δs = Vm * Δt)   \n\nEscolha da opção:");
  scanf("%d", &op); // Escolhendo a opção

  switch (op)
    {
      case 1:
      printf("\nInsira a distancia percorrida: ");
  scanf("%f", &deltas);
  printf("Insira a variação do tempo ");
  scanf("%f", &deltat);

      res = deltas / deltat;
      break;

      case 2:
      printf("\nInsira a distancia percorrida: ");
  scanf("%f", &deltas);
  printf("Insira a velocidade media: ");
  scanf("%f", &vm);

      res = deltas / vm;
      break;

      case 3:
      printf("\nInsira a velocidade media: ");
  scanf("%f", &vm);
  printf("Insira a variação do tempo: ");
  scanf("%f", &deltat);

      res = vm * deltat;
      break;     
    }
  
  return res;  
}

int forca(void)
{
  float f, m, a;
  
  printf("\nInsira a massa: ");
  scanf("%f", &m);
  printf("Insira a aceleração: ");
  scanf("%f", &a);

  f = m * a;
  return f;  
}



int tempo(void)
{
  
}

int main (void)
{
  float resultado; 
  int resp = 1, op;

  printf("\t\t\tEscolha uma das formulas!\n\n\t 1 - Deslocamento (S = So + (v * Δt)\n\t 2 - Velocidade Media (Vm = Δs / Δt)\n\t 3 - Força (F = m * a)\n\n ");

  while (resp = 1)
    {
      printf  ("Esolha a opção: ");
      scanf("%d", &op);

      switch (op)
        {
          case 1: 
          resultado = deslocamento();
          printf ("Deslocamento = %2.f \n", resultado);
          break;

          case 2:
          resultado = velocidademedia();
          printf ("%.2f \n", resultado);
          break;

          case 3:
          resultado = forca();
          printf ("Força = %.2f\n", resultado);
          break;
        }
      printf("Deseja fazer outra operação: [1] - SIM // [0] - NÃO\n");
      scanf("%d", &op);
    }  
}

/*6.Escreva um algoritmo que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 33,7%.*/

#include <stdio.h>

int main(void)
{
  float salario, percentual, resultado;
  printf("Insira o salario do funcionario: ");
  scanf("%f", &salario);

  percentual = 33.7/100;
  
  resultado = salario + (salario * percentual);

  printf("Salario = %.2f \nPercentual de almento = 33,7% \nNovo salario com almento = %.2f", salario, resultado);
  
  return 0;
}

/*7.Leia um valor em real e acotação do dólar.Em seguida,imprima o valor correspondente em dólares.*/

#include <stdio.h>

int main(void) 
{
  float real, cotacao, resultado;
  printf("Insira o valor para a conversão em dólar\n");
  scanf("%f", &real);
  printf("Insira taxa de câmbio atual ");
  scanf("%f", &cotacao);

  resultado = real / cotacao;

  printf("Resultado = %.2f USD $", resultado);
  return 0;
}

/*8.Leiaumnúmerointeiroeimprimaasomadoantecessordoseutriplocomosucessordoseudobro.*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, antecessor_triplo, sucessor_dobro, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    antecessor_triplo = pow(num,3) - 1;
    sucessor_dobro = pow(num,2) + 1;
    soma = antecessor_triplo + sucessor_dobro;

    printf("A soma do antecessor do triplo de %d, com o sucessor do dobro de %d, é = %d\n", num, num, soma);

    return 0;
}

/*9.Leia um número inteiro de 4 dígitos e imprima 1 dígito por linha.*/

#include <stdio.h>

int main(void) 
{
  int num, digito;
  
  printf("Insira um numero de 4 dígitos: ");
  scanf("%d", &num);

  digito = num /1000;
  printf("%d\n", digito);
  
  digito = (num % 1000)/100;
  printf("%d\n", digito);
  
  digito = (num % 100)/10;
  printf("%d\n", digito);
  
  digito = num % 10;
  printf("%d\n", digito);
  
  return 0;
}

/*10.Marquesito, aluno do Instituto, começou a investir em criptomoedas. De início ele tem R$1000,00 para realizar seu primeiro investimento. No primeiro dia, seu patrimônio caiu 12,4%, no  segundo subiu 1,8%, no terceiro subiu 5,6% e, no quarto caiu 4,5%. Crie um código para calcular qual o valor atual dos investimentosde Marquesito.*/

#include <stdio.h>

int main(void) 
{
  float dia1, dia2, dia3, dia4;

  dia1 = 1000 - ((12.4 / 100) * 1000);
  dia2 = dia1 - ((1.8 / 100) * dia1);
  dia3 = dia2 + ((5.6 / 100) * dia2);
  dia4 = dia3 - ((4.5 / 100) * dia3);
  printf("Valor atual dos investimentos de marquesito = %.2f\n", dia4);
  return 0;
}

/*11. Tendo como dado de entrada àaltura (h) de uma pessoa, construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:a.Para homens: (72.7*h) –58b.Para mulheres:(62.1*h) -44.7*/

#include <stdio.h>

int main(void)
{
  float altura, p;
  int op;
  
  printf("Insira sua altura: ");
  scanf("%f", &altura);

  printf("Selecione o sexo:  \n[1] - Homens, \n[0] - Mulheres\n");
  scanf("%d", &op);

  if (op ==0)
  {
    p = (62.1 * altura) - 44.7;
    printf("Peso ideal = %.2fKG",p);
  }
  else
  {
    p = (72.7 * altura) - 58;
    printf("Peso ideal = %.2fKG",p);
  }
  
  return 0;
}