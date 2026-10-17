#include <stdio.h>

int main() {
  
    FILE *fayl = fopen("matn.txt", "w");
    if (fayl == NULL) {
        printf("Faylni ochishda xatolik yuz berdi!\n");
        return 1;
    }

    fprintf(fayl, "Salom, C dasturlash!");
    fclose(fayl);
    printf("Fayl muvaffaqiyatli yaratildi\n");
    return 0;
}
