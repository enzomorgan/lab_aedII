#include <stdio.h>

int diasDeAula(int *veth, int *vetf){
    int dias_totais = (vetf[2] - veth[2])*365 + (vetf[1] - veth[1]) *30 + (vetf[0] - veth[0]);

    return ((dias_totais)/7);
}

int main(){
    int dt_hoje[3] = {8,8,2023};
    int dt_final[3]= {29,10,2023};

    int aulas_ministradas = diasDeAula( &dt_hoje, &dt_final);

    printf("O total de aulas a ser ministrada: %d \n", aulas_ministradas);

    return 0;
}