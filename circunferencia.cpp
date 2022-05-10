#include <stdio.h>
#include <math.h>

struct Pontos
{
    float x;
    float y;
};

Pontos le_pontos()
{
    Pontos xy;

    printf("Digite o valor de x: ");
    scanf("%f", &xy.x);
    printf("Digite o valor de y: ");
    scanf("%f", &xy.y);

    return xy;
}
float distancia (Pontos xy[], int i, int j)
{
    float distancia = pow((xy[i].x - xy[j].x), 2) + pow((xy[i].y - xy[j].y), 2);
    distancia = sqrt(distancia);

    return distancia;
}

Pontos calcula(Pontos xy[], int n, float &raio)
{
    float valor_distancia, maior_distancia;
    int coordenada;
    Pontos centro;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }
            else
            {
                valor_distancia = distancia(xy, i, j);

                if((i == 0 && j == 1) || j == 0)
                {
                    maior_distancia = valor_distancia;
                    coordenada = i;
                }
                else
                {
                    if(valor_distancia > maior_distancia)
                    {
                        maior_distancia = valor_distancia;
                        coordenada = i;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }

        if(i == 0)
        {
            raio = maior_distancia;
            centro = xy[coordenada];
        }
        else
        {
            if(maior_distancia < raio)
            {
                raio = maior_distancia;
                centro = xy[coordenada];
            }
        }
    }

    return centro;
}

int main()
{
    int n;
    do
    {
        printf("Digite a quantidade de pontos: ");
        scanf("%d", &n);

        if(n < 4)
            puts("Erro: A quantidade de pontos nao pode ser menor que 4");

    }while(n < 4);

    Pontos xy[n];
    for(int i = 0; i < n; i++)
    {
        xy[i] = le_pontos();
    }

    float raio;
    Pontos centro;
    centro = calcula(xy, n, raio);

    printf("Centro = (%.4f, %.4f)\nRaio: %.4f", centro.x, centro.y, raio);
}
