#include <iostream>
#include <string.h>

double arrayFunction(int array[], int size);

int main(){
int array1[4] = {1, 2, 3, 4};
int size = sizeof(array1) / sizeof(int);


arrayFunction(array1, size);
}

double arrayFunction(int array[], int size){
  int i = 0;
  int completearray;
  std::cout << "[";
 while (i >= 0 && i < size){
  completearray = completearray + array[i];
  if (i == (size - 1))
  {
    std::cout << array[i];
  }else
  {
    std::cout << array[i] << ", ";
  }
  i++;
 }
 std::cout << "]";
  return 0;
}

