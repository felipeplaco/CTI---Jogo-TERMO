#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include "jogo.h"
#include "menu.h"

int main(){
    bool botaoVoltar = false, menu = false;
    char voltar;
    int opcao;
    
    while(menu == false)
    {    
        system("cls");
        titulo();
        
        gotoxy(50, 18);
        cprintf("Selecione uma opcao: ");
        scanf("%d", &opcao);    
        system("cls");
        
        switch(opcao)
        {    
            case 1:
        		system("cls");
                jogo();
            break;
            
            case 2:
        		system("cls");
                creditos();
                voltar = getch();
                    if (voltar == '1')
                    {
        				system("cls");
                        botaoVoltar = 1;
                        break;
                    }
            break;
            
            case 3:
                como_jogar();
                voltar = getch();
        		system("cls");

                    if (voltar == '1')
                    {
        				system("cls");
                        botaoVoltar = 1;
                        break;
                    }
            break;
            
            case 4:
                gotoxy(20, 9);
                cprintf(" +-+-+-+-+-+-+-+-+ +-+-+-+ +-+-+-+-+-+-+");
                gotoxy(20, 10);
                cprintf(" |O|b|r|i|g|a|d|o| |p|o|r| |J|o|g|a|r|!|");
                gotoxy(20, 11);
                cprintf(" +-+-+-+-+-+-+-+-+ +-+-+-+ +-+-+-+-+-+-+");
                menu = true;
            break;
            
            default:  
                textcolor(4); 
                gotoxy(42, 10);
                cprintf("Selecao Invalida! Digite novamente.");
                
                Sleep(1500); 
    			fflush(stdin);
            break;
        }
        
    }
    return 0;
}
