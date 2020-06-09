#include <stdio.h>
#include <stdlib.h>

//Global variables
int v_cpf[11];

//Functions
int valida_cpf(){
    int v_total=0;
    int v_digito_1;
    int v_digito_2;
    int v_resto;
    for (int i=0;i<9;i++){
        v_total+=(v_cpf[i]*(10-i));
    }
    //Debug
    //printf("v_total = %d",v_total);
    v_resto=v_total%11;
    if (v_resto < 2){
        v_digito_1 = 0;
    }
    else {
        v_digito_1 = 11-v_resto;
    }
    //Debug
    //printf("v_digito_1 = %d",v_digito_1);
    v_total=0;
    for (int i=0;i<10;i++){
        v_total+=(v_cpf[i]*(11-i));
    }
    v_resto=v_total%11;
    if ( v_resto < 2){
        v_digito_2 = 0;
    }
    else {
        v_digito_2 = 11-v_resto;
    }
    // Verifica se os digitos verificadores estao corretos
    if ((v_cpf[9] == v_digito_1) && (v_cpf[10] == v_digito_2)){
        return 1;
    }
    else {
        return 0;
    }
}
void digita_cpf(){
    int v_vld;
    for (int i=0;i<11;i++){
        do{
            v_vld=0;
            printf("\nDigite o %d digito do cpf: ", i+1);
            scanf("%d",&v_cpf[i]);
            if ((v_cpf[i] < 10) && (v_cpf[i] >= 0)) {
                v_vld = 1;
            }
        } while (v_vld != 1);
    }
}

int main()
{
    digita_cpf();
    printf("\n%d%d%d.%d%d%d.%d%d%d-%d%d",v_cpf[0],v_cpf[1],v_cpf[2],v_cpf[3],v_cpf[4],v_cpf[5],v_cpf[6],v_cpf[7],v_cpf[8],v_cpf[9],v_cpf[10]);
    if (valida_cpf() == 1){
        printf("\nCPF valido");
        return 0;
    }
    else {
        printf("\nCPF invalido");
        return 1;
    }
}
