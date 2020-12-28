#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, j = 2, k = 1;
    double c = 2.2;
    i = c;

    if(k > 3)
        k++;
    else
    {
        k += 2;
    }

    double ans = i + j - k * c;
}