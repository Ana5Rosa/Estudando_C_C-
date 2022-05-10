#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cstdlib>
#include <time.h>

const int TAM_PALAVRA = 51;

bool verifica_palavra(char palavra[], int tamanho, bool e_palavra)
{
    if(tamanho >= 5 && tamanho <= 50)
    {
        for(int i = 0; i < tamanho; i++)
        {
            if(!isalpha(palavra[i]))
            {
                e_palavra = false;
                break;
            }
        }
    }
    else
    {
        e_palavra = false;
    }

    return e_palavra;
}

void inicializa_string (char palavra_embaralhada[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        palavra_embaralhada[i] = '0';
    }
    palavra_embaralhada[tamanho] = '\0';
}

int numero_aleatorio(int num_maximo)
{
    return rand() % num_maximo;
}

void embaralha(char palavra[], char palavra_embaralhada[], int tamanho)
{
    srand(time(NULL));

    for(int i = 0; i < tamanho; )
    {
        int j = numero_aleatorio(tamanho);

        if(palavra_embaralhada[j] == '0')
        {
            palavra_embaralhada[j] = palavra[i];
            i++;
        }
    }

}

void imprime(char palavra_embaralhada[], char palavra[])
{
    printf("%s = %s\n", palavra, palavra_embaralhada);
}

int main()
{
    char palavra[TAM_PALAVRA];
    int tamanho;

    do
    {
        printf("Digite uma palavra: ");
        gets(palavra);

        bool e_palavra = true;
        tamanho = strlen(palavra);

        if(strlen(palavra) != 0)
        {
            e_palavra = verifica_palavra(palavra, tamanho, e_palavra);

            if (e_palavra)
            {
                int tam_embaralhada = tamanho + 1;
                char palavra_embaralhada[tam_embaralhada];
                inicializa_string(palavra_embaralhada, tamanho);
                embaralha(palavra, palavra_embaralhada, tamanho);
                imprime(palavra_embaralhada, palavra);
            }
            else
            {
                puts("Nao e uma palavra");
            }
        }

    }while(strlen(palavra) != 0);
}
