#include <stdio.h>

int main()
{
    int n = -1, num;
    int k = 0;

    printf("Entre com n: ");
    do scanf("%d", &n); while (n < 0);

    int current_length = 0; // Contador para o tamanho do segmento atual
    int last_par = -1;      // Começa em -1 para indicar que nenhum número foi lido ainda
    int valid = 1;          // Flag: 1 para válida, 0 para inválida

    for (int i = 1; i <= n; i++)
    {
        printf("Entre com o %do: ", i);
        scanf("%d", &num);

        // Define a paridade do número atual (0 para par, 1 para ímpar)
        int current_par = num % 2;

        if (last_par == -1)
        {
            // Caso seja o primeiro número de todos
            current_length = 1;
            last_par = current_par;
        } 
        else if (current_par == last_par)
        {
            // Se mantiver a mesma paridade, o segmento atual cresce
            current_length++;
            
            // Se o 'k' já foi definido e o segmento atual passou dele, a sequência quebrou a regra
            if (k > 0 && current_length > k) valid = 0;
        } 
        else
        {
            // Se a paridade mudou, significa que o segmento anterior terminou
            if (k == 0) k = current_length;
            else
            {
                // Para os segmentos seguintes, o tamanho obrigatoriamente precisa ser igual a k
                if (current_length != k) valid = 0;
            }

            // Começa a contar o novo segmento com o número atual
            current_length = 1;
            last_par = current_par;
        }
    }

    // Verificações finais após a leitura de todos os números
    if (k == 0) k = n;
    else
    {
        if (current_length != k) valid = 0; // O último segmento processado também precisa ter exatamente o tamanho k
    }

    if (valid) printf("A sequencia e %d-intercalada\n", k);
    else printf("nao e' k-intercalada\n");

    return 0;
}
