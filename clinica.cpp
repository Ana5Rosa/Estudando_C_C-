#include <stdio.h>

int main()
{
    int n_pacientes,
        dia_consulta,
        medico_a = 0,
        medico_b = 0,
        medico_c = 0,
        seg_1 = 0,
        ter_2 = 0,
        qua_3 = 0,
        qui_4 = 0,
        sex_5 = 0;

    char medico;

    do
    {
        printf("Digite N (quantidade de pacientes): ");
        scanf("%d", &n_pacientes);

        if(n_pacientes <= 0)
            puts("Erro: N nao pode ser igual ou menor que zero.");

    }while(n_pacientes <= 0);

    for(int i = 1; i <= n_pacientes; i++)
    {
        printf("Enquete paciente %d de %d\n", i, n_pacientes);
        //pergunta 1:
        do
        {
            getchar(); //limpeza
            printf("Digite o medico que ele consulta com mais frequencia: a, b ou c ");
            medico = getchar();

            if(medico != 'a' && medico != 'b' && medico != 'c')
                puts("Erro: Medico nao conhecido. Digite em letra minuscula.");

        }while(medico != 'a' && medico != 'b' && medico != 'c');

        //pergunta 2:
        do
        {
            printf("Digite o dia da semana que ele mais utiliza para marcar as consultas:\n1 para segunda\n2 para terca\n3 para quarta\n4 para quinta\n5 para sexta: ");
            scanf("%d", &dia_consulta);

            if(dia_consulta < 1 || dia_consulta > 5)
                puts("Erro: As opcoes vao de 1 a 5");

        }while(dia_consulta < 1 || dia_consulta > 5);

        //Analisando o medico que faz mais atendimentos
        if(medico == 'a')
            medico_a += 1;

        else if(medico == 'b')
            medico_b += 1;

        else
            medico_c += 1;


        //Analisando o dia da semana
        if(dia_consulta == 1)
            seg_1 += 1;
        else if(dia_consulta == 2)
            ter_2 += 1;
        else if(dia_consulta == 3)
            qua_3 += 1;
        else if(dia_consulta == 4)
            qui_4 += 1;
        else
            sex_5 += 1;

    }

    //Qual o médico que atende mais pacientes:
        if(medico_a >= medico_b && medico_a >= medico_c)
        {
            puts("i.:O medico A atende mais pacientes.");
            //Qual o dia da semana de maior demanda.
            if(seg_1 >= ter_2 && seg_1 >= qua_3 && seg_1 >= qui_4 && seg_1 >= sex_5)
            {
                puts("ii.: Segunda e o dia da semana de maior demanda");
                puts("iii.: O medico A atende mais pacientes. E Segunda e o dia da semana de maior demanda");
            }
            else if(ter_2 >= seg_1 && ter_2 >= qua_3 && ter_2 >= qui_4 && ter_2 >= sex_5)
            {
                puts("ii.: Terca e o dia da semana de maior demanda");
                puts("iii.: O medico A atende mais pacientes. E Terca e o dia da semana de maior demanda");
            }
            else if(qua_3 >= seg_1 && qua_3 >= ter_2 && qua_3 >= qui_4 && qua_3 >= sex_5)
            {
                puts("ii.: Quarta e o dia da semana de maior demanda");
                puts("iii.: O medico A atende mais pacientes. E Quarta e o dia da semana de maior demanda");
            }
            else if(qui_4 >= seg_1 && qui_4 >= ter_2 && qui_4 >= qua_3 && qui_4 >= sex_5)
            {
                puts("ii.: Quinta e o dia da semana de maior demanda");
                puts("iii.: O medico A atende mais pacientes. E Quinta e o dia da semana de maior demanda");
            }
            else
            {
                puts("ii.: Sexta e o dia da semana de maior demanda");
                puts("iii.: O medico A atende mais pacientes. E Sexta e o dia da semana de maior demanda");
            }
        }

        else if(medico_b >= medico_a && medico_b >= medico_c)
        {
            puts("i.: O medico B atende mais pacientes.");
            //Qual o dia da semana de maior demanda.
            if(seg_1 >= ter_2 && seg_1 >= qua_3 && seg_1 >= qui_4 && seg_1 >= sex_5)
            {
                puts("ii.: Segunda e o dia da semana de maior demanda");
                puts("iii.: O medico B atende mais pacientes. E Segunda e o dia da semana de maior demanda");
            }
            else if(ter_2 >= seg_1 && ter_2 >= qua_3 && ter_2 >= qui_4 && ter_2 >= sex_5)
            {
                puts("ii.: Terca e o dia da semana de maior demanda");
                puts("iii.: O medico B atende mais pacientes. E Terca e o dia da semana de maior demanda");
            }
            else if(qua_3 >= seg_1 && qua_3 >= ter_2 && qua_3 >= qui_4 && qua_3 >= sex_5)
            {
                puts("ii.: Quarta e o dia da semana de maior demanda");
                puts("iii.: O medico B atende mais pacientes. E Quarta e o dia da semana de maior demanda");
            }
            else if(qui_4 >= seg_1 && qui_4 >= ter_2 && qui_4 >= qua_3 && qui_4 >= sex_5)
            {
                puts("ii.: Quinta e o dia da semana de maior demanda");
                puts("iii.: O medico B atende mais pacientes. E Quinta e o dia da semana de maior demanda");
            }
            else
            {
                puts("ii.: Sexta e o dia da semana de maior demanda");
                puts("iii.: O medico B atende mais pacientes. E Sexta e o dia da semana de maior demanda");
            }
        }
        else
        {
            puts("i.: O medico C atende mais pacientes.");
            //Qual o dia da semana de maior demanda.
            if(seg_1 >= ter_2 && seg_1 >= qua_3 && seg_1 >= qui_4 && seg_1 >= sex_5)
            {
                puts("ii.: Segunda e o dia da semana de maior demanda");
                puts("iii.: O medico C atende mais pacientes. E Segunda e o dia da semana de maior demanda");
            }
            else if(ter_2 >= seg_1 && ter_2 >= qua_3 && ter_2 >= qui_4 && ter_2 >= sex_5)
            {
                puts("ii.: Terca e o dia da semana de maior demanda");
                puts("iii.: O medico C atende mais pacientes. E Terca e o dia da semana de maior demanda");
            }
            else if(qua_3 >= seg_1 && qua_3 >= ter_2 && qua_3 >= qui_4 && qua_3 >= sex_5)
            {
                puts("ii.: Quarta e o dia da semana de maior demanda");
                puts("iii.: O medico C atende mais pacientes. E Quarta e o dia da semana de maior demanda");
            }
            else if(qui_4 >= seg_1 && qui_4 >= ter_2 && qui_4 >= qua_3 && qui_4 >= sex_5)
            {
                puts("ii.: Quinta e o dia da semana de maior demanda");
                puts("iii.: O medico C atende mais pacientes. E Quinta e o dia da semana de maior demanda");
            }
            else
            {
                puts("ii.:Sexta e o dia da semana de maior demanda");
                puts("iii.: O medico C atende mais pacientes. E Sexta e o dia da semana de maior demanda");
            }
        }
}
