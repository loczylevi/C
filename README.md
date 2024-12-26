# C

https://infoc.eet.bme.hu/ea01/#1

```c

#include <stdio.h>
 
int main(void) {
    printf("Eredmény: %d.\n", 2*3);
 
    return 0;
}

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

```
