#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char expressao[101];

    printf("Digite a expressao: ");
    gets(expressao);

    int tam = strlen(expressao);

    float n, resultado = 0;
    char operador;
    bool is_num = true, expr_valida = true;

    for(int i = 0; i < tam; i++)
    {
        if(i == 0)
        {
            if(isdigit(expressao[i]))
            {
                n = expressao[i] - 48;

                resultado += n;

                is_num = true;
                continue;
            }
            else
            {
                puts("Expressao invalida");
                expr_valida = false;
                break;
            }
        }
        else if(!isdigit(expressao[tam-1]))
        {
            puts("Expressao invalida");
            expr_valida = false;
            break;
        }
        else
        {
            if(is_num)
            {
                if(expressao[i] == ' ')
                {
                    continue;
                }
                else if(isalnum(expressao[i]))
                {
                    puts("Expressao invalida");
                    expr_valida = false;
                    break;
                }
                else
                {
                    if(expressao[i] == '+' || expressao[i] == '-' || expressao[i] == '*' || expressao[i] == '/' || expressao[i] == '^')
                    {
                        operador = expressao[i];
                        is_num = false;
                        continue;
                    }
                }
            }
            else if(!is_num)
            {
                if(expressao[i] == ' ')
                {
                    continue;
                }
                else if(isdigit(expressao[i]))
                {
                    n = expressao[i] - 48;

                    switch(operador)
                    {
                        case '+': resultado += n;
                                  break;
                        case '-': resultado -= n;
                                  break;
                        case '*': resultado *= n;
                                  break;
                        case '/': resultado /= n;
                                  break;
                        case '^': resultado = pow(resultado, n);
                                  break;
                    }

                    is_num = true;
                }
                else if(!isdigit(expressao[i]))
                {
                    puts("Expressao invalida");
                    expr_valida = false;
                    break;
                }

            }
        }
    }
    if(expr_valida)
    {
        for(int i = 0; i < tam; i++)
        {
            printf("%c", expressao[i]);
        }
        printf(" = %.6f", resultado);

    }


}
