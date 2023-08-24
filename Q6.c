#include <stdio.h>

int invert(int n){
    int invert = 0;
    int ult;
    
    while (n > 0){
        ult = n%10;
        invert = invert *10 +ult;
        n = n/10;
    }
    return invert;
}

int invertrec(int n, int invert){
    if(n == 0){
        return invert;
    }
    
    int ult = n % 10;
    invert = invert * 10 + ult;
    return invertrec(n / 10, invert);
}

int main(){
    int n, inverti, invertirec;
    n = 4321;
    inverti = invert(n);
    printf("Numero invertido: %d\n", inverti);
    invertirec = invertrec(n, 0);
    printf("Numero invertido recursivo: %d\n", invertirec);
}
