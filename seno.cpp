#include <stdio.h>
#include <math.h>

int main()
{
    double x_graus, x_radiano, seno_x, expoente;
    int n_parcelas, sinal_parcela, valor_parcela;
    long long fatorial;

    do
    {
        printf("Digite o valor de X, em graus: ");
        scanf("%lf", &x_graus);
        if(x_graus < 0)
            puts("Erro - X precisa ser maior ou igual a 0");
    } while(x_graus < 0);

    do
    {
        printf("Digite N (quantidade de parcelas): ");
        scanf("%d", &n_parcelas);
        if(n_parcelas <= 0)
            puts("Erro - N precisa ser maior que 0");
    } while (n_parcelas <= 0);

    // transformar X para radiano
    x_radiano = (M_PI * x_graus) / 180;

    // Inicialização das variáveis para cálculo
    sinal_parcela = 1; // Verifica se a próxima conta soma ou diminui
    valor_parcela = 1;
    seno_x = 0;

    // looping das parcelas
    for(int i = 1; i <= n_parcelas; i++)
    {
        expoente = 1;
        fatorial = 1;

        //looping expoente
        for(int i = 1; i <= valor_parcela; i++)
        {
            expoente *= x_radiano;
        }


        //looping fatorial
        for(int i = 1; i <= valor_parcela; i++)
        {
            fatorial *= i;
        }


        double conta = expoente/fatorial;

        //Verificando se soma ou diminui
        if(sinal_parcela == 1)
        {
            seno_x = seno_x + conta;
            sinal_parcela = -1;
        }
        else
        {
            seno_x = seno_x - conta;
            sinal_parcela = +1;
        }

        valor_parcela += 2;
   }

   printf("sen(%.8lf) = %.8lf\n", x_radiano, seno_x);
}
