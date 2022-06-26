#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int op1, op2, cont = 1;
    char jogar, matriz[3][3];

    do{

        for(int i = 0; i < 3; i++)
            for(int j = 0; j < 3; j++)
                matriz[i][j] = ' ';

        cont = 1;

        /*
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                printf("%c ", matriz[i][j]);
                if(j < 2)
                    printf("|");
            }
            printf("\n");
            if(i < 2)
                printf("--- --- ---\n");
        }
        */

        printf("\n\t %c | %c | %c ", matriz[0][0], matriz[0][1], matriz[0][2]);
        printf("\n\t--- --- ---");
        printf("\n\t %c | %c | %c ", matriz[1][0], matriz[1][1], matriz[1][2]);
        printf("\n\t--- --- ---");
        printf("\n\t %c | %c | %c ", matriz[2][0], matriz[2][1], matriz[2][2]);

        printf("\n\n");
        do{
            if(cont % 2 == 0)
                printf("Vez do O!\n");
            else
                printf("Vez do X!\n");

            do{
                printf("Digite a 1ª coordenada: ");
                scanf("%d%*c", &op1);
            }while(op1 < 0 || op1 > 2);

            do{
                printf("Digite a 2ª coordenada: ");
                scanf("%d%*c", &op2);
            }while(op2 < 0 || op2 > 2);

            if(matriz[op1][op2] == ' ' && cont % 2 == 0){
                matriz[op1][op2] = 'O';
                cont++;
            }
            else if(matriz[op1][op2] == ' ' && cont % 2 != 0){
                matriz[op1][op2] = 'X';
                cont++;
            }else{
                printf("Posição já preenchida!");
            }

            /*
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    printf(" %c ", matriz[i][j]);
                    if(j < 2)
                        printf("|");
                }
                printf("\n");
                if(i < 2)
                    printf("--- --- ---\n");
        }
            */

            printf("\n");
            printf("\n\t %c | %c | %c ", matriz[0][0], matriz[0][1], matriz[0][2]);
            printf("\n\t--- --- ---");
            printf("\n\t %c | %c | %c ", matriz[1][0], matriz[1][1], matriz[1][2]);
            printf("\n\t--- --- ---");
            printf("\n\t %c | %c | %c ", matriz[2][0], matriz[2][1], matriz[2][2]);
            printf("\n\n");

                if(matriz[0][0] == 'O' && matriz[0][1] == 'O' && matriz[0][2] == 'O'){
                    printf("'O' venceu! Parabéns!");
                    break;
                }
                else if(matriz[1][0] == 'O' && matriz[1][1] == 'O' && matriz[1][2] == 'O'){
                    printf("'O' venceu! Parabéns!");
                    break;
                }
                else if(matriz[2][0] == 'O' && matriz[2][1] == 'O' && matriz[2][2] == 'O'){
                    printf("'O' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][0] == 'O' && matriz[1][1] == 'O' && matriz[2][2] == 'O'){
                    printf("'O' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][2] == 'O' && matriz[1][1] == 'O' && matriz[2][0] == 'O'){
                    printf("'O' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][0] == 'O' && matriz[1][0] == 'O' && matriz[2][0] == 'O'){
                    printf("'O' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][1] == 'O' && matriz[1][1] == 'O' && matriz[2][1] == 'O'){
                    printf("'O' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][2] == 'O' && matriz[1][2] == 'O' && matriz[2][2] == 'O'){
                    printf("'O' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][0] == 'X' && matriz[0][1] == 'X' && matriz[0][2] == 'X'){
                    printf("'X' venceu! Parabéns!");
                    break;
                }
                else if(matriz[1][0] == 'X' && matriz[1][1] == 'X' && matriz[1][2] == 'X'){
                    printf("'X' venceu! Parabéns!");
                    break;
                }
                else if(matriz[2][0] == 'X' && matriz[2][1] == 'X' && matriz[2][2] == 'X'){
                    printf("'X' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][0] == 'X' && matriz[1][1] == 'X' && matriz[2][2] == 'X'){
                    printf("'X' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][2] == 'X' && matriz[1][1] == 'X' && matriz[2][0] == 'X'){
                    printf("'X' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][0] == 'X' && matriz[1][0] == 'X' && matriz[2][0] == 'X'){
                    printf("'X' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][1] == 'X' && matriz[1][1] == 'X' && matriz[2][1] == 'X'){
                    printf("'X' venceu! Parabéns!");
                    break;
                }
                else if(matriz[0][2] == 'X' && matriz[1][2] == 'X' && matriz[2][2] == 'X'){
                    printf("'X' venceu! Parabéns!");
                    break;
                }


        }while(cont < 9);

        if(cont == 9)
            printf("\nEmpate!\n");

        printf("\n\nDeseja jogar novamente? (S/N) ");
        scanf("%c%*c", &jogar);

    }while(jogar == 'S');

    getchar();
    return 0;
}
