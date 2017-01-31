#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#include "Utils.h"

#include "UI.h"

/*
 *  Talk speed enum?
 *  get user input 
 *      string
 *      number
 *      others...
 *  pretty print function
 *      one sentence
 *      many sentences
 *      can handel different talking speeds
 *      text color
 *
 */


//TODO: what happens if the text goes the bottom???
/**
 *  Prints a text acco
 *
 *
 *
 * */
void printCharText(CharSpeech *p_chr_spch, char* text){
    TextWindow text_win;
    text_win = p_chr_spch->text_win;
    while(*text){

        if(*text == '\n'){
            p_chr_spch->cur_left = text_win.left;
            p_chr_spch->cur_top++;
            continue;
        }
        SetCursorPosition(p_chr_spch->cur_left, p_chr_spch->cur_top);
        putch(*text);

        p_chr_spch->cur_left++;

        if(p_chr_spch->cur_left >= text_win.left + text_win.width){
            p_chr_spch->cur_left = p_chr_spch->text_win.left;
            p_chr_spch->cur_top++;        
        }
        Sleep(p_chr_spch->talk_speed);
        text++;
    }
}


void printCharLn(CharSpeech *p_chr_spch, char* line){
    printCharText(p_chr_spch, line);
    p_chr_spch->cur_left = p_chr_spch->text_win.left;
    p_chr_spch->cur_top++;
}

//TODO: add constructor for CharSpeech*, and destructor ;) 
