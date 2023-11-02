#include <iostream>
#include <string.h>

double cubeNumber(int number);
int main(){
int num;
std::cout << "Enter number to cube: ";
std::cin >> num;

std::cout << "cube number is " << cubeNumber(num);
}

double cubeNumber(int number){
 return (number * number * number);
  
}