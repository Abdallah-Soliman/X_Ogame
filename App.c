
/*****************************************/
/* Author  :  Abdullah Mohamed  soliman  */
/* Version :  V01                        */
/* Date    : 23 Dec 2021                 */
/*****************************************/

#include <stdio.h>
#include <stdlib.h>
#include "typedef.h"
#include "XO_interface.h"


/* Initializing Global variable */
uint8_t gu8arr_arr[10]={'0','1','2','3','4','5','6','7','8','9'};

uint16_t gu16_choise, gu16_player;


int main()
{
    uint8_t au8_mark;
    uint16_t au16_value;
    gu16_player=1;

    do{
        display();
        gu16_player=(gu16_player%2)?1:2;
        printf("pleyar%d,enter the number:",gu16_player);
        scanf("%d",&gu16_choise);
        au8_mark =(gu16_player==1)?'x':'o';
        marked(au8_mark);
        au8_mark=checkforwin();
        gu16_player++;
    }while(au8_mark==5);
    if(au8_mark==1){
       printf("congratulation (%c)", au8_mark);
    }
    else if(au8_mark==0){
        printf("game is draw");
    }
    return 0;
}

