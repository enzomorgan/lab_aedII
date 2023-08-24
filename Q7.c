#include <stdio.h>

int f (int m, int n){
    if (n == 1){
        return m+1;
    }else if (m == 1){
        return n+1;
    }else{
        return f(m,n - 1) + f(m - 1, n);
    }
}


int main(){
    int result = f(0,0);

    printf(" %d\n ", result);
    
    return 0;
}