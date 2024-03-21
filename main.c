#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para armazenar dados de alistamento
typedef struct
{
    char nome[50];
    float altura;
    int idade;
    char sexo;
} DadosAlistamento;

int main()
{
    DadosAlistamento pessoa;

    // Leitura dos dados
    printf("Digite o nome completo: ");
    scanf("%s", pessoa.nome);

    printf("Digite a altura (em metros): ");
    scanf("%f", &pessoa.altura);

    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &pessoa.sexo);

    // Verificação da idade
    if (pessoa.idade < 18)
    {
        printf("\n**Você não tem idade mínima para se alistar. A idade mínima é de 18 anos.**\n");
        return 1;
    }

    // Exibição dos dados
    printf("\nDados do alistamento:\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Altura: %.2f m\n", pessoa.altura);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Sexo: %c\n", pessoa.sexo);

    printf("\nAlistamento realizado com sucesso!\n");

    return 0;
}
