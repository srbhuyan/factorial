#include <stdio.h>
#include <stdlib.h>

int factorial(int n){

  int result=1,c;
  for (c=1;c<=n;c=c+1){
    result = result*c;
  }
  return result;
}

int main(int argc, char * argv[]){

  if(argc <= 1){
    printf("Usage: ./factorial <number to compute factorial>\n");
    return 0;
  }

  int fact;
  int number;

  number = atoi(argv[1]);

  fact = factorial(number);
  printf("fact = %d\n",fact);

  return fact;
}

