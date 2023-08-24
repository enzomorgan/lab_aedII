#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n = 10;
    int c1, c2, h;
    
    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            c1 = i*i;
            c2 = j*j;
            h = sqrt(c1+c2);
            if(h*h == (c1+c2)){
            printf("Cateto1: %d Cateto2: %d hipotenusa: %d \n", i,j,h);
}
        }
        
    }
}