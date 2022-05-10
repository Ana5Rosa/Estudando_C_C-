#include <stdio.h>

const int N = 5;

int main()
{
    int m[N][N];

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            printf("Digite o valor da linha %d, coluna %d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }

    int k;

    do
    {
        printf("Digite o valor de K: ");
        scanf("%d", &k);

        if(k <= 2 || k >= N)
            puts("ERRO - K não pode ser menor ou igual a dois; K não pode ser maior ou igual a N;");

    }while(k <= 2 || k >= N);

    int s[k];

    for(int i = 0; i < k; i++)
    {
        printf("Digite o %d valor da sequencia S: ", i+1);
        scanf("%d", &s[i]);
    }

    bool posicao_encontrada = false, sequencia_encontrada = false;
    int x, y;

    // Sentidos - esquerda para direita & direita para esquerda
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j <= N-k; j++)
        {
            int aux_j = j;

            //Sentido esquerda para direita
            if(m[i][j] == s[0])
            {
                for(int l = 0; l < k; l++)
                {
                    if(m[i][aux_j] == s[l])
                    {
                        posicao_encontrada = true;
                        aux_j++;
                        continue;
                    }
                    else
                    {
                        posicao_encontrada = false;
                        break;
                    }
                }
                if(posicao_encontrada)
                {
                    x = i;
                    y = j;

                    sequencia_encontrada = true;

                    printf("(%d, %d) sentido: esquerda para direita\n", x, y);
                    continue;
                }
            }
            //Sentido direita para esquerda
            if(m[i][j] == s[k-1])
            {
                for(int l = k-1; l >= 0; l--)
                {
                    if(m[i][aux_j] == s[l])
                    {
                        posicao_encontrada = true;
                        aux_j++;
                        continue;
                    }
                    else
                    {
                        posicao_encontrada = false;
                        break;
                    }
                }
                if(posicao_encontrada)
                {
                    x = i;
                    y = j + k-1;

                    sequencia_encontrada = true;

                    printf("(%d, %d) sentido: direita para a esquerda\n", x, y);
                    continue;
                }
            }
        }
    }
    // Sentidos - cima para baixo e baio para cima
    for(int j = 0; j < N; j++)
    {
        for(int i = 0; i <= N-k; i++)
        {
            int aux_i = i;

            //Sentido esquerda para direita
            if(m[i][j] == s[0])
            {
                for(int l = 0; l < k; l++)
                {
                    if(m[aux_i][j] == s[l])
                    {
                        posicao_encontrada = true;
                        aux_i++;
                        continue;
                    }
                    else
                    {
                        posicao_encontrada = false;
                        break;
                    }
                }
                if(posicao_encontrada)
                {
                    x = i;
                    y = j;

                    sequencia_encontrada = true;

                    printf("(%d, %d) sentido: cima para baixo\n", x, y);
                    continue;
                }
            }
            //Sentido direita para esquerda
            if(m[i][j] == s[k-1])
            {
                for(int l = k-1; l >= 0; l--)
                {
                    if(m[aux_i][j] == s[l])
                    {
                        posicao_encontrada = true;
                        aux_i++;
                        continue;
                    }
                    else
                    {
                        posicao_encontrada = false;
                        break;
                    }
                }
                if(posicao_encontrada)
                {
                    x = i + k-1;
                    y = j;

                    sequencia_encontrada = true;

                    printf("(%d, %d) sentido: baixo para cima\n", x, y);
                    continue;
                }
            }
        }
    }

    if (!sequencia_encontrada)
        puts("Sequencia nao encontrada!");

}
