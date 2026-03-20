#ifndef JOGO_H
#define JOGO_H

#include <stdio.h>
#include <conio.c>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

void jogo(){
    char tentativas[6];
    char palavras[10][6] = {
        "ruela", "nuvem", "prato", "fazer", "termo",
        "ideia", "tempo", "veloz", "carro", "comer"
    };
    
    int jogarNovamente = 1;

    while (jogarNovamente) 
	{
        system("cls");
        srand(time(NULL));
        int r = rand() % 10;
        const char* palavra = palavras[r];
        int tentativasRestantes = 6;
        int venceu = 0;
		int linha = 8;
		
        while (tentativasRestantes > 0) {
        	gotoxy(47, 3);
        	
        	textbackground(BLACK);
        	textcolor(WHITE);
        	
            cprintf("Tentativas restantes: %d", tentativasRestantes);
            gotoxy(40, 6);
            cprintf("Digite uma palavra de 5 letras: ");
            scanf("%5s", tentativas);
			
			//centralização das tentativas
			gotoxy(40, linha);
			
            // Se acertou a palavra inteira, encerra
            if (strcmp(tentativas, palavra) == 0) 
			{
                textbackground(GREEN);
                textcolor(BLACK);
                
                for (int i = 0; i < 5; i++) {
                    printf("\t %c ", tentativas[i]);
                }
                
                textbackground(BLACK);
                textcolor(WHITE);
                
                gotoxy(48, 20);
                cprintf("Parabens! Voce acertou!");
                
                venceu = 1;
                
                break;
            }
			
            // Comparação letra por letra
            for (int i = 0; i < 5; i++) 
			{
                if (tentativas[i] == palavra[i]) 
				{
                    // letra correta na posição certa (Verde)
                    textbackground(GREEN);
                    textcolor(BLACK);
                    printf("\t %c ", tentativas[i]);
                    
                } 
				else 
				{
                    int existe = 0;
                    for (int j = 0; j < 5; j++) 
					{
                        if (tentativas[i] == palavra[j]) 
						{
                            existe = 1;
                            break;
                        }
                    }
                    if (existe) 
					{
                        // letra existe em posição diferente (Amarelo)
                        textbackground(YELLOW);
                        textcolor(BLACK);
                        printf("\t %c ", tentativas[i]);
                    } 
					else 
					{
                        // letra não existe (Vermelho)
                        textbackground(RED);
                        textcolor(WHITE);
                        printf("\t %c ", tentativas[i]);
                    }
                }
                //Reseta a cor
                textbackground(BLACK);
                textcolor(WHITE);
            }
            
            linha += 2;
            tentativasRestantes--;
        }

        // Se nn venceu depois de 6 tentativas
        if (!venceu) 
		{
        	gotoxy(40, 20);
            cprintf("Voce perdeu! A palavra correta era: %s", palavra);
        }

        // Pergunta se quer jogar de novo ou voltar ao menu
        char opcao;
        gotoxy(45, 23);
        cprintf("Deseja jogar novamente (s/n)? ");
        scanf(" %c", &opcao);

        if (opcao == 's' || opcao == 'S') 
		{
            jogarNovamente = 1;
        } 
		else 
		{
            jogarNovamente = 0;
            gotoxy(40, 15);
            printf("Voltando ao menu principal...");
        }
    }
}

#endif
