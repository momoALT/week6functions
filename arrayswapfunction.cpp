#include <iostream>
#include <string.h>

double swap(int array[], int pos1, int pos2);

int main(){
int array1[4] = {1, 2, 3, 4};
int size = sizeof(array1) / sizeof(int);


swap(array1, 1, 2);
}

double swap(int array[], int pos1, int pos2){
  int i = 0;
  int posNumber1 = array[pos1];
  int posNumber2 = array[pos2];
  int arrayLength = sizeof(array) / sizeof(int);
  std::cout << "[";
 while (i >= 0 && i < arrayLength){
  if (i == posNumber1)
  {
    std::cout << array[posNumber2];
    if (i != arrayLength - 1)
    {
      std::cout << ", ";
    }
    
  }else if (i == posNumber2)
  {
   std::cout << array[posNumber1];
   if (i != arrayLength - 1)
    {
      std::cout << ", ";
    }
  }else
  {
    std::cout << array[i];
    
    if (i != arrayLength - 1)
    {
      std::cout << ", ";
    }
  }
  i++;
 }
 std::cout << "]";
  return 0;
}

