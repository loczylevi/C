#include <stdio.h>


void pelda(int* a){
    *a  *= 2;



}

void rossz_pelda(int a){
    a *= 2; 
}



int main(void){
    int szam1 = 3;
    int szam2 = 2;
    rossz_pelda(szam1); // pointer
    pelda(&szam2);
    printf("%d %d\n",szam2,szam1);

    int a;
    double b;
    int c,d;
    scanf("%d,%lf,%d,%d",&a,&b,&c, &d);  // %jel ugy olvassa be input()

    printf("%d %lf %d %d", a,b,c,d);


    // for ciklus

    for (int i=0; i<10 ; i++){
        printf("ez egy cillus %i \n", i);
    }

    



    return 0;
}





