/* Program   : mainlstack.c */
/* Deskripsi : file DRIVER modul stack berkait */
/* NIM/Nama  : 24060120120012/ Adinda Destifany Zenniar*/
/* Tanggal   : 7 Oktober 2021*/
/***********************************/
#include <stdio.h>
#include "lstack.h"

int main()
{ //KAMUS----------------------------
    lstack LS;  /*variabel parameter aktual linked Stack */
    address A; /*variabel parameter aktual address */
    int P;

  //ALGORITMA------------------------
    A=(address)malloc(sizeof(address));
    createLStack(&LS);
    pushL(&LS, 2);
    pushL(&LS, 3);
    pushL(&LS, 4);
    printf("setelah push\n");
    printf("===viewLStack===\n");
    viewLStack(LS);
    printf("tinggi LStack : %d\n", tinggiL(LS));
    if(isEmptyLStack(&LS)){
        printf("LStack kosong\n");
    }
    else{
        printf("LStack tidak kosong\n");
    }
    printf("setelah pop\n");
    popL(&LS, &P);
    printf("P : %d\n", P);
    printf("===viewLStack===\n");
    viewLStack(LS);
    printf("infotop : %d", infotop(LS));

    return 0;
}

