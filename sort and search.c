#include <stdlib.h>
#include <stdio.h>

int binary(int array[],int left,int right, int target);
void bubble(int array[], int size);

int main(void)
{
  //Create an array with unsorted numbers
  int list[] = {  36,   62,   86,    105,  103,
                  123,  113,  21,    134,  50,
                  133,  28,   78,    56,   79,
                  33,   108,  22,    4,    73,
                  89,   112,  98,    53,   11,
                  118,  61,   131,   23,   64,
                  115,  87,   57,    43,   109,
                  51,   35,   15,    7,    71,
                  120,  101,  122,   65,   85,
                  58,   48,   129,   38,   63};

  //Get the total elements of the array
  int len = sizeof(list)/sizeof(list[0]);
  
  //Call the sort function
  bubble(list, len);

  //assign
  int index = binary(list, 0, len - 1, 65);
   

  printf("The index of the number %d is at position: %d\n", list[index], index);

}
int binary(int array[], int left, int right, int target)
{
  int mid = left + (right - left) / 2;

  if(target == array[mid]) return mid;

  if (left > right) return 1;

  if (array[mid] < target) binary(array, mid + 1, right, target);
  
  else binary(array, left, mid - 1, target);

}

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
