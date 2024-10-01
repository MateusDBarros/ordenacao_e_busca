#include <stdlib.h>
#include <stdio.h>

//Cria as funçoes
int binary(int array[],int esquerda,int direita, int elemento);
void bubble(int array[], int size);

int main(void)
{
  //Cria uma array de numeros desordenados
  int lista[] = {  36,   62,   86,    105,  103,
                  123,  113,  21,    134,  50,
                  133,  28,   78,    56,   79,
                  33,   108,  22,    4,    73,
                  89,   112,  98,    53,   11,
                  118,  61,   131,   23,   64,
                  115,  87,   57,    43,   109,
                  51,   35,   15,    7,    71,
                  120,  101,  122,   65,   85,
                  58,   48,   129,   38,   63};

  //Obtem o total de elementos da array
  int len = sizeof(lista)/sizeof(lista[0]);
  
  //Chama a função
  bubble(lista, len);

  //Atribui
  int index = binary(lista, 0, len - 1, 65);
   
  //Printa o resultado
  printf("The index of the number %d is at position: %d\n", lista[index], index);

}
//Função de busca binaria (Binary Search)
int binary(int array[], int esquerda, int direita, int elemento)
{
  int meio = esquerda + (direita - esquerda) / 2;

  if(elemento == array[meio]) return meio;
  if (esquerda > direita) return 1;

  if (array[meio] < elemento) binary(array, meio + 1, direita, elemento);
  
  else binary(array, esquerda, meio - 1, elemento);

}

//Função de ordenação (Bubble Sort)
void bubble(int array[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    for (int j = 0; j < size - 1;j++)
    {
      int temp = 0;
    if (array[j] > array[j + 1])
    {
      temp = array[j];
      array[j] = array[j + 1];
      array[j + 1] = temp;
    }
    }
    

  }
}
