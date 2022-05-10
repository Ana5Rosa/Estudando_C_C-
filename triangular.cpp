#include <stdio.h>

int main()
{
    long long triangulo;
    int k, qtd_triangulos;
    char tipo_triangular;

    do
    {
        printf("Digite o valor de K: ");
        scanf("%d", &k);
        if(k <= 0)
            puts("Erro - K precisa ser maior que 0.");
    }while(k <= 0);

    getchar(); //limpeza

    do
    {
        printf("Digite p - para triangulos pares ou digite i - para triangulos impares: ");
        tipo_triangular = getchar();

        getchar(); //limpeza
        if(tipo_triangular != 'p' && tipo_triangular != 'i')
            puts("Erro - Opcao desconhecida. Digite com letra minuscula.");

    }while(tipo_triangular != 'p' && tipo_triangular != 'i');

    qtd_triangulos = 1;

    if(tipo_triangular == 'i')
    {
        for(int i = 1; qtd_triangulos <= k; i += 2)
        {
            triangulo = i * (i + 2) * (i + 4);
            printf("%lld\n", triangulo);
            qtd_triangulos++;
        }
    }
    else
    {
        for(int i = 2; qtd_triangulos <= k; i += 2)
        {
            triangulo = i * (i + 2) * (i + 4);
            printf("%lld\n", triangulo);
            qtd_triangulos++;
        }
    }
}
