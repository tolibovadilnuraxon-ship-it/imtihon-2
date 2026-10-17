// imtihon 7 misol
#include <stdio.h>
#include <string.h>

struct Talaba{
    char ism[20];
    int yosh;
    int ball;
};

int main(){
    struct Talaba t1;
    strcpy(t1.ism, "Ali");
    t1.yosh = 18;
    t1.ball = 90;

    printf("Ism: %s\n", t1.ism);
    printf("Yosh: %d\n", t1.yosh);
    printf("Ball: %d\n", t1.ball);
}
