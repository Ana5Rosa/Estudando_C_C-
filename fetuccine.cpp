#include <stdio.h>


const int TAM_INICIAL = 3;

void le_termos_iniciais(int serie_inicial[], int tam_inicial, int &n)
{
    for(int i = 0; i < tam_inicial; i++)
    {
        printf("Digite o %d termo da serie: ", i+1);
        scanf("%d", &serie_inicial[i]);
    }

    do
    {
        printf("Digite N - quantidade de termos da serie: ");
        scanf("%d", &n);

        if(n <= 4)
            puts("Erro - N deve ser maior que 4!");

    }while(n <= 4);
}

void calcula_serie(int serie_inicial[], int tam_inicial, int serie[], int n)
{
    bool soma = true;

    for(int i = 0; i < tam_inicial; i++)
    {
        serie[i] = serie_inicial[i];
    }
    for(int i = 0; i < n-tam_inicial; i++)
    {
        int total = 0;
        if(soma)
        {
            for(int j = i; j < i+tam_inicial; j++)
            {
                total += serie[j];
            }
            serie[i+tam_inicial] = total;
            soma = false;
            continue;
        }
        else
        {
            total = serie[i];
            for(int j = i+1; j < i+tam_inicial; j++)
            {
                total -= serie[j];
            }
            serie[i+tam_inicial] = total;
            soma = true;
            continue;
        }
    }
}
void inverte_serie(int serie[], int n, int serie_invertida[])
{
    int j = 0;
    for(int i = n-1; i >= 0; i--)
    {
        serie_invertida[j] = serie[i];
        j++;
    }
}
void imprime_serie(int serie_invertida[], int n)
{
    printf("Serie: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", serie_invertida[i]);
    }
}

int main()
{
    int serie_inicial[TAM_INICIAL], n;

    le_termos_iniciais(serie_inicial, TAM_INICIAL, n);

    int serie[n];
    calcula_serie(serie_inicial, TAM_INICIAL, serie, n);

    int serie_invertida[n];
    inverte_serie(serie, n, serie_invertida);

    imprime_serie(serie_invertida, n);
}
