// imtihon 4 misol
#include <stdio.h>

void yangi(int *x){
    *x = 25;
}

int main(){
    int x;
    printf("Sonni kiriting:");
    scanf("%d", &x);
    yangi(&x);
    printf("Natija: %d", x);
}
