// imtihon 2 misol
#include <stdio.h>

int main()
{
    int n, m;
    printf("qatorlar soni: ");
    scanf("%d", &n);

    printf("ustunlar soni: ");
    scanf("%d", &m);

    int sonlar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &sonlar[i][k]);
        }
    }

int yigindi= 0; 
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            printf("%d ", sonlar[i][k]);
            yigindi+= sonlar[i][k];
            
            }
        }
        printf("Yig'indi: %d", yigindi);
}
