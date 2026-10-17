// imtihon 6 misol
#include <stdio.h>

int yigindi(int n){
    if(n == 1){
        return 1;
    }
    return n + yigindi(n-1);
}

int main(){
    int n;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    printf("Yig'indi: %d\n", yigindi(n));
}
