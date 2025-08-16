#include <stdio.h>

int main()
{

    int matriz[10][10];
    int indicColuna = 0;
    int indicLinha = 0;

    //  Preencher matrizcom zeros
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = 0;
        }
    }

    // Numerar índices (linha e coluna)
    for (int i = 0; i < 10; i++)
    {
        matriz[i][0] = indicLinha;
        indicLinha++;
        for (int j = 0; j < 10; j++)
        {
            matriz[0][j] = indicColuna;
            indicColuna++;

            // Figura cruz
            for (int i = 1; i < 6; i++) // vertical(cruz)
            {
                matriz[i][3] = 3;
                for (int j = 1; j < 6; j++) // horizontal(cruz)
                {
                    matriz[3][j] = 3;
                }
            }

            // figura losangulo
            for (int i = 3; i < 8; i++) // vertical(losangulo)
            {
                matriz[i][7] = 2;
                for (int j = 5; j < 10; j++) // horizontal ''Linha do meio''(losangulo)
                {
                    matriz[5][j] = 2;

                    for (int j = 6; j < 9; j++) // linha superior
                    {
                        matriz[4][j] = 2;
                    }
                    for (int j = 6; j < 9; j++) // linha inferior
                    {
                        matriz[6][j] = 2;
                    }
                }
            }

            // Figura triângulo
            for (int i = 7; i < 10; i++) // vertical
            {
                matriz[i][3] = 1;
                for (int j = 1; j < 6; j++) // horizontal inferior
                {
                    matriz[9][j] = 1;
                    for (int j = 2; j < 5; j++) // horizontal superior
                    {
                        matriz[8][j] = 1;
                    }
                }
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

