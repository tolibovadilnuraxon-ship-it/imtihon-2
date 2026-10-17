// imtihon 5 misol
#include <stdio.h>
#include <string.h> 

int main() {
    char belgi[100];
    
    printf("So'z kiriting:");
    scanf("%s", belgi);
   
    int uzunlik = strlen(belgi);
    printf("Satr uzunligi: %d ta belgidan iborat.\n", uzunlik);
    return 0;
}
