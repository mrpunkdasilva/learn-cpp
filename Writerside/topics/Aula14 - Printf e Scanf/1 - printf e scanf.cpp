#include <stdio.h>
#include <stdlib.h>

/*  
    * Printf  e Scanf* 
    ! Para se usar eles precisa-se importar essa lib  #include <stdlib.h>;
        !-> Printf
            #> É uma função que serve para saída de dados, imprimindo na tela os dados inseridos nela;
            #> Sintaxe:>>
                printf("Hello World") // Sintaxe Basica

            $ No printf existe outros argumentos para serem passados, caso for usado variaveis;
            $ Abaixo tem um printf que consiste em dois argumentos sendo passados nela
                @> printf("Hello World %s", nome) 
            #>> O sinal de porcentagem (%) serve para definir qual tipo de valor será escrito na tela, seria um indicador;
            #>> Os tipos de valores que podem ser::
                [-----------------------------------]
                [ Caractere  |    Tipo de argumento ]
                [-----------------------------------]
                [ d, i       | para numeros decimais]
                [-----------------------------------]
                [  o         | numeros octa         ] 
                [-----------------------------------]
                [  x, X      | valores hexdecimais  ]
                [-----------------------------------]
                [ c          | unico caractere      ]
                [-----------------------------------]
                [ s          | strings              ]
                [-----------------------------------]
                [ f          |    float             ]
                [-----------------------------------]
                [ p          |    pointer           ]
                [-----------------------------------]
            $ Parametro '\0' é o delimitador de strings;

        !-> Scanf
        #> Função para entrada de dados do usuario;
        #> Sintaxe:
            / O Scanf deve ter como primeiro argumento a string de especificação
            / O sefundo argumentos é o endereço da variavel;
            scanf("%s", &nome) // Lembrando o operador de endereço da variavel é o -> &
        $ Sendo assim o uso do scanf ;
        $ Os mesmo tipos que podem ser passados no printf podem ser usados no scanf;
*/ 

int main(){
    int i;
    i=123;
    printf("%d\n", i);
    printf("Digite um numero inteiro:>>  ");
    scanf("%d", &i);5
    system("PAUSE");

    return 0;
}