#ifndef MENU_H
#define MENU_H

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void titulo(){
	textcolor(4);
    gotoxy(42, 3);
    cprintf("  _______                        ");
    gotoxy(42, 4);
    cprintf(" |__   __|                       ");
    gotoxy(42, 5); 
    cprintf("    | | ___ _ __ _ __ ___   ___  ");
    gotoxy(42, 6);
    cprintf("    | |/ _ \\ '__| '_ ` _ \\ / _ \\ ");
    gotoxy(42, 7);
    cprintf("    | |  __/ |  | | | | | | (_) |");
    gotoxy(42, 8);
    cprintf("    |_|\\___|_|  |_| |_| |_|\\___/ ");
	  
	textbackground(4);
	textcolor(15);
    gotoxy(52, 10);
    cprintf("[1] - Jogar      ");
    
    textbackground(2);
    gotoxy(52, 12);
    cprintf("[2] - Creditos   ");
    
    textbackground(1);
    gotoxy(52, 14);
    cprintf("[3] - Como jogar ");
    
    textbackground(5);
    gotoxy(52, 16);
    cprintf("[4] - Sair       ");
    textbackground(0);
    
    
}

void creditos(){
    gotoxy(25, 3);
    cprintf("   _____ _____  ______ _____ _____ _______ ____   _____ ");
    gotoxy(25, 4);
    cprintf("  / ____|  __ \\|  ____|  __ \\_   _|__   __/ __ \\ / ____|");
    gotoxy(25, 5);
    cprintf(" | |    | |__) | |__  | |  | || |    | | | |  | | (___  ");
    gotoxy(25, 6);
    cprintf(" | |    |  _  /|  __| | |  | || |    | | | |  | |\\___ \\ ");
	gotoxy(25, 7);
	cprintf(" | |____| | \\ \\| |____| |__| || |_   | | | |__| |____) |");
	gotoxy(25, 8);
	cprintf("  \\_____|_|  \\_\\______|_____/_____|  |_|  \\____/|_____/ ");    

    gotoxy(25, 10);
    cprintf("[Programacao] - Felipe Silva");
    gotoxy(25, 12);
    cprintf("[Coloracao] - Felipe Placo");
    gotoxy(25, 14);
    cprintf("[Design] - Davi Bueno");
    gotoxy(25, 16);
    cprintf("Obrigado por jogar");
    gotoxy(40, 25);
    cprintf("Pressione qualquer tecla para voltar");
}

void como_jogar(){
    gotoxy(18, 3);
    cprintf("   _____                             _                        ");
    gotoxy(18, 4);
    cprintf("  / ____|                           | |                       ");
    gotoxy(18, 5);
    cprintf(" | |     ___  _ __ ___   ___        | | ___   __ _  __ _ _ __ ");
    gotoxy(18, 6);
    cprintf(" | |    / _ \\| '_ ` _ \\ / _ \\   _   | |/ _ \\ / _` |/ _` | '__|");
	gotoxy(18, 7);
	cprintf(" | |____ (_) | | | | | | (_) | | |__| | (_) | (_| | (_| | |   ");    
	gotoxy(18, 8);
	cprintf("  \\_____\\___/|_| |_| |_|\\___/   \\____/ \\___/ \\__, |\\__,_|_|   ");
	gotoxy(18, 9);
	cprintf("                                              __/ |           ");
	gotoxy(18, 10);
	cprintf("                                             |___/            ");
	
	
    gotoxy(10, 12);
    cprintf("Objetivo: Adivinhar a palavra secreta de 5 letras em ate 6 tentativas.");
    gotoxy(10, 14);
    cprintf("Regras:");
    gotoxy(22, 15);
    cprintf("- Digite uma palavra valida em portugues e pressione Enter.");
    gotoxy(22, 16);
    cprintf("- As letras mudam de cor para dar dicas:");
    gotoxy(22, 17);
    textcolor(2);
    cprintf("- Verde: Letra correta na posicao certa.");
    textcolor(14);
    gotoxy(22, 18);
    cprintf("- Amarelo: Letra correta, mas posicao errada.");
    textcolor(4);
    gotoxy(22, 19);
    cprintf("- Vermelho: Letra incorreta, tente outra.");
    textcolor(15);
    gotoxy(10, 21);
    cprintf("Dica: Use as cores para ajustar suas proximas tentativas.");
    gotoxy(44, 25);
    cprintf("Pressione qualquer tecla para voltar");
}

#endif
