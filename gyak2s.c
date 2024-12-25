#include <stdio.h>

 
// gcc  gyaks.c -o gyaks && ./gyaks
 

/*
20. A kör kerülete és területe
Feladat: írjunk programot, amely megkérdezi a felhasználót, mekkora egy kör sugara, majd kiírja a kör kerületét és területét!

Ez az első interaktív programunk, amely nem csak kiír valamit, hanem kérdez is a felhasználótól – sőt az eredmény a felhasználó által adott bemenő adattól függ.

A megoldás algoritmusa: követjük az események sorrendjét:

Megkérdezzük a felhasználót, mekkora a kör.
Megvárjuk, amíg válaszol (és megjegyezzük a választ).
Kiírjuk a kerületet és a területet.
(Vagy épp másképp is megközelíthetjük: ahhoz, hogy kiírjuk az eredményt, előbb a bemenő adatokra van szükségünk. Anélkül úgysem menne. Az adatok beolvasása előtt pedig feltesszük a kérdést, mert később már nem lenne értelme.)

A kör sugarát a sugar nevű változóban tároljuk. Azért kell eltárolni, mert a billentyűzetről beolvasott értékre a programban több helyen is hivatkozunk: egyrészt akkor, amikor jelezzük, hogy hova kell beolvasni; másrészt a kerület kiszámításakor; harmadrészt a terület kiszámításakor.*/

#define PI 3.14159265358979323846

int puska() {
    int num = 42;
    float pi = 3.14159;
    char letter = 'A';
    char str[] = "Hello";
    printf("Egész szám: %d\n", num);              // Egész szám
    printf("Lebegőpontos: %.2f\n", pi);          // Két tizedesjegy
    printf("Karakter: %c\n", letter);            // Karakter
    printf("Karakterlánc: %s\n", str);           // Szöveg
    printf("Hexadecimális: %x\n", num);          // Hexadecimális
    printf("Memóriacím: %p\n", (void*)&num);     // Pointer (cím)
    printf("%% százalékjel: %%\n");              // Százalékjel
    return 0;
}


int main(void) {
    double radius;
    printf("Kérem a kör sugarát! (radius) ");
    scanf("%lf",&radius);
    printf("sugár: %lf\n", radius);
    printf("számolás biip biip\n");
    printf("Kör kerülete: %f\n", 2*radius*PI);
    printf("Kör területe: %f\n", (radius*radius)*PI);
    return 0;
}
