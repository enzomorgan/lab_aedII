#include <stdio.h>

int mult(int x1, int x2){
    if (x2 == 0)
    {
        return 0;
    }
    return x1 + mult(x1, x2-1);
}

int main(){
    int result;
    result = mult(5,5);
    printf("%d\n", result);
    return 0;
}