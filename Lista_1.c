//EXERCICIO 1
#include <stdio.h>

int main(void) {
  float salariobruto, salarioliquido, valorpagohora, percentual, semana;
  int numerohora;

  printf("insira o valor pago por hora: \n");
  scanf("%f", &valorpagohora);

  printf ("insira o numero se horas trabalhadas: \n");
  scanf("%d", &numerohora);

  salariobruto = (valorpagohora * numerohora) * 4.5;

  printf("insira o desconto do INSS: ");
  scanf("%f", &percentual);

  salarioliquido = salariobruto - ((salariobruto * percentual) / 100);
  
  printf("\n O salario liquido: %.2f", salarioliquido);

  return 0;
}

//EXERCICIO 2
#include <stdio.h>

int main(void) {
  float numero, resultado =0 , media, resultadopeso = 0, peso, mediapeso;
  int cont=1;

  for (cont; cont <=5; cont++)
    {
      printf("Digite o valor do numero: \n");
      scanf("%f", &numero);
      
     printf ("Digite o valor do peso: \n");
      scanf("%f", &peso);

      resultado = numero + resultado;
      resultadopeso = peso + resultadopeso;


    }

  media = resultado / 5;
  mediapeso = resultadopeso / 5; 
  
  printf ("media numero: %.2f \n", media);
  printf ("Media peso: %.2f \n", mediapeso); 

  return 0;
}

//EXERCICIO 3
#include <stdio.h>
#include <math.h>

int main(void) 
{
  int numero;
  float resultado;

  printf("Digite um numero inteiro: ");
  scanf("%d",&numero);

  if (numero == 0)
  {
    printf("\nNumero Digitado = 0");
  }
  else if (numero < 0)
  {
    resultado = pow(numero,2);
    printf("\nResultado:  %.2f ", resultado);
  }
  else if(numero > 0)
  {
    resultado = sqrt(numero);
    printf("\nResultado: %.2f", resultado);
  }
  
  return 0;
}

//EXERCICIO 4
#include <stdio.h>

int main(void) 
{
  int x,v,dist;

  printf("Informe o valor de X: ");
  scanf("%d", &x);

  printf("\nInforme o valor de V: ");
  scanf("%d", &v);

  dist = ((x * v) / 60);

  printf("\nA distancia percorrida: %dkm", dist);
  
  return 0;
}

//EXERCICIO 5
#include <stdio.h>

int main(void)
{
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  if(numero%4 == 0)
    printf("\nDivisivel por 4");
  else
    printf("\nNao e divisivel por 4");
  if(numero%5 ==0)
    printf("\nDivisivel por 5");
  else
    printf("\nNao e divisivel por 5");
  
  return 0;
}

//EXERCICIO 6
#include <stdio.h>,
#include <math.h>

int main(void)
{
  int a, b, c, delta, x1 , x2;   

  do
    {
      printf("\nDigite o valor de A: ");
      scanf("%d", &a);
    }while(a <=0);

  printf("\nDigite o valor de B: ");
  scanf("%d", &b);

  printf("\nDigite o valor de C: ");
  scanf("%d", &c);

  delta = pow(-b,2) - (4*a*c);

  if(delta > 0)
  {
    x1 = -b + sqrt(delta / (2*a));
    x2 = -b - sqrt(delta / (2*a));

    printf("\nResultado X': %d", x1);
    printf("\nResultado X'': %d", x2);
  }

  if(delta < 0)
  {
    printf("\nNao adimite solucao real");
  }

  if (delta == 0)
  {
     x1 = -b + sqrt(delta / (2*a));
     printf("\nResultado X: %d", x1);
  }

  return 0;
  
}

//EXERCICIO 7
#include <stdio.h>

int main(void) 
{
  char simbolo;
  int n;

  do
    {
      printf("Digite um simbolo: ");
      scanf(" %c", &simbolo);

      printf("Simbolo: %c \nDecimal: %d \nHexadecimal: %x", simbolo, simbolo, simbolo);

      printf("\n\nDeseja procurar outro simbolo na tabela ASCII, [0] NAO // [1] SIM: ");
      scanf("%d", &n);      
    }while(n!=0);  
  return 0;
}