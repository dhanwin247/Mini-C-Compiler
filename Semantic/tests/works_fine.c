#include<stdio.h>

int funct(int a, int b){
  int c = a * b + (a % b);
  int d = a / b + (b % a);
  return c + d;
}

int main(){
  int n = 10, m = 100;
  int c = funct(m, n);
  return 0;
}
