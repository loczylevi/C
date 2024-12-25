#include <stdio.h> // alap könyvtár forditás elött bebassza a fált


#define PI 3.141592
#define ha if    // if helyett ha-t hasznalunk

int square(int x){
    return x*x;
}

void kiir(){
    printf("AAAAAAAAAAAAAA\n"); //metódus
}

void masodfoku(int* a, int* b){
    int x1=1;
    int x2=2;
    *a =x1;
    *b = x2; // változo felülirás
}

int main(void){ // üres bemenet a függvénybe
    double a = 3.4;
    int y = square(3);
    char karakter='A';
    kiir(); // meg is kell hivni a függvényt töki
    char string[10] = "aaaaaaa";
    char string2[10] = {'A','l','m', 'a', '\0'};
    printf("Hello world %lf \n",a);
    printf("Hello world %c \n",karakter);
    printf("Hello world %s \n",string);
    printf("függgvény %i \n",y);
    //printf("xd %c \n", string2)
    int szamok[5] = {1,2,3,4,5}; // memória halmaz NEM EGY LISTA 
    //printf("%i \n", 0[szamok]); // indexelés printf("%i \n", 0[szamok]);
    printf("%i \n", szamok[0]);
    int er = 0;
    int er2 =0;

    masodfoku(&er,&er2);  //pointer a memóriára mutat
    printf("%d %d \n",er, er2);

    return 0;

}


