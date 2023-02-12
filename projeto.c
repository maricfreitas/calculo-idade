#include<stdio.h>

int id1,id2,ano_atual,ano_nasc;

int main (){
    printf("***********\n");
    printf("Qual o ano atual?\n");
    scanf("%d",&ano_atual);
    printf("Qual seu ano de nascimento?\n");
    scanf("%d",&ano_nasc);
    
    id1=ano_atual-ano_nasc;
    id2=2030-ano_nasc;
    
    printf("Voce tem %d e tera %d em 2030\n",id1,id2);
    return 0;
}
