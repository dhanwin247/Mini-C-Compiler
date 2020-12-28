#include <stdio.h>

int function_not_there(float a, float b, float c){
  int k = 8;
  return k;
}

int main() {
    char *s = "Hello!";
    float a = 3.14, b = 2.1, c;
    int d = function_not_there(a, b);
    c = a + s;
}
