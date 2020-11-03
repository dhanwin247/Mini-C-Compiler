#include<stdio.h>
#include<stdlib.h>

int getNum(double c){
    int k = 2;
    if(k > 3)
        k++;
    else
    {
        k += 2;
    }
    return k;
}

int main(){
    int i, j = 2, k = 1;
    double c = 2.2;
    i = getNum(c);

    double ans = i + j - k * c;
}