#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Digite o valor de N - quantidade de numeros da sequencia: ");
        scanf("%d", &n);

        if(n < 2)
            puts("Erro - N nao pode ser menor que 2.");

    }while(n < 2);

    int l[n];

    for(int i = 0; i < n; i++)
    {
        printf("Digite o %d numero da sequencia: ", i+1);
        scanf("%d", &l[i]);
    }

    int k;

    do
    {
        printf("Digite o valor de K - quantidade de numeros consecutivos das subsequencias: ");
        scanf("%d", &k);

        if(k > n)
            puts("K nao pode ser maior que N!");
        else if(k < 2)
            puts("K nao pode ser menor que 2!");

    }while(k > n || k < 2);

    int maior_somatorio[k+1], menor_somatorio[k+1];

    for(int i = 0; i <= n-k; i++)
    {
        int somatorio = 0;
        int valores = 0;

        for(int s = i; valores < k; s++)
        {
            somatorio += l[s];
            valores++;
        }
        valores = 0; //limpeza

        if(i == 0)
        {
            for(int j = 0; j < k; j++)
            {
                maior_somatorio[j] = l[j];
                menor_somatorio[j] = l[j];
            }
            maior_somatorio[k] = somatorio;
            menor_somatorio[k] = somatorio;

            continue;
        }
        else
        {
            if(somatorio > maior_somatorio[k])
            {
                for(int j = i; valores < k; j++)
                {
                    maior_somatorio[valores] = l[j];
                    valores++;
                }
                maior_somatorio[k] = somatorio;
                continue;
            }
            else if(somatorio <= menor_somatorio[k])
            {
                for(int j = i; valores < k; j++)
                {
                    menor_somatorio[valores] = l[j];
                    valores++;
                }
                menor_somatorio[k] = somatorio;
                continue;
            }
        }
    }

    printf("Subsequencia de %d numeros consecutivos de maior soma = [ ", k);
    for(int l = 0; l < k; l++)
    {
        printf("%d; ", maior_somatorio[l]);
    }
    printf("] (soma = %d)\n", maior_somatorio[k]);

    printf("Subsequencia de %d numeros consecutivos de menor soma = [ ", k);
    for(int l = 0; l < k; l++)
    {
        printf("%d; ", menor_somatorio[l]);
    }
    printf("] (soma = %d)", menor_somatorio[k]);
}
