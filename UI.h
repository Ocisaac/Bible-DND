
#ifndef TEXT_WINDOW_STRUCT
#define TEXT_WINDOW_STRUCT

/**
 * TextWindow gives an area (a rectangle) to write text in the console window
 *     height:    the height of the text rectangle
 *     width:     the width of the text rectangle
 *
 *     left:      how left the text rectangle is
 *     right:     how right the text rectangle is
 *
 * */
typedef struct TextWindow {          
    int height;                                 
    int width;                                 
                                                
    int left;                                   
    int top;                                    
} TextWindow;

#endif

//TODO: maybe add a color thingy for text color

#ifndef TALK_SPEED_ENUM
#define TALK_SPEED_ENUM

//TODO change speed numbers

/**
 * TalkSpeed gives the speed in which text from a character is being spoken
 *
 *
 * */
typedef enum TalkSpeed {              
    slow = 100,                                 
    normal = 50,                                
    fast = 30,
    instant = 0
} TalkSpeed;

#endif

#ifndef CHARACTER_SPEECH
#define CHARACTER_SPEECH

/**
 * CharacterSpeech describes a characters speech, and how to display it 
 *     text_win:      describes the area in which in characters speech is displayed
 *     talk_speed:    describes the speed in which the character's text is written
 *
 *     cur_left:      how left is the curser position
 *     cur_top:       how low is the curser position
 * */
typedef struct CharacterSpeech {   
    TextWindow text_win;                       /*TODO: maybe make it a pointer*/ 
    TalkSpeed talk_speed;                     
                                               /*TODO: add color maybe?*/
    int cur_left;                             
    int cur_top;                              
} CharSpeech;

#endif

void printCharText(CharSpeech *p_chr_spch, char* text);
void printCharLn(CharSpeech *p_chr_spch, char* line);
