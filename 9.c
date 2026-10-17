// imtihon 9 misol
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

 int max = sonlar[0][0]; 
    for (int i = 0; i < n; i++)
    {
        int yigindi= 0;
        for (int k = 0; k < m; k++)
        {
            yigindi+= sonlar[i][k];
            if (sonlar[i][k] > max)
            {
                max = sonlar[i][k];
            }

        }
        printf("%d-qatordagi sonlar yig'indisi: %d\n", i + 1, yigindi);
        }
        printf("Eng katta element: %d\n", max);
        }
