

#include <stdio.h>
#include <stdlib.h>
#include "typedef.h"
#include "error_state.h"

extern uint8_t gu8arr_arr[10];
extern uint16_t gu16_choise,gu16_player;
/******************************************
return 1 when the game is over
return 0 when the game is draw
return -1 when the game is continue
******************************************/
uint16_t checkforwin(){
uint16_t returnvalue;
if(gu8arr_arr[1]==gu8arr_arr[2]&&gu8arr_arr[2]==gu8arr_arr[3])
    returnvalue=when_the_game_is_over;
else if(gu8arr_arr[4]==gu8arr_arr[5]&&gu8arr_arr[5]==gu8arr_arr[6])
    returnvalue=when_the_game_is_over;
else if(gu8arr_arr[7]==gu8arr_arr[8]&&gu8arr_arr[8]==gu8arr_arr[9])
       returnvalue=when_the_game_is_over;
else if(gu8arr_arr[1]==gu8arr_arr[4]&&gu8arr_arr[4]==gu8arr_arr[7])
         returnvalue=when_the_game_is_over;
else if(gu8arr_arr[2]==gu8arr_arr[5]&&gu8arr_arr[5]==gu8arr_arr[8])
          returnvalue=when_the_game_is_over;
else if(gu8arr_arr[3]==gu8arr_arr[6]&&gu8arr_arr[6]==gu8arr_arr[9])
           returnvalue=when_the_game_is_over;
else if(gu8arr_arr[1]==gu8arr_arr[5]&&gu8arr_arr[5]==gu8arr_arr[9])
         returnvalue=when_the_game_is_over;
else if(gu8arr_arr[3]==gu8arr_arr[5]&&gu8arr_arr[5]==gu8arr_arr[7])
     returnvalue=when_the_game_is_over;
else if(gu8arr_arr[1]!='1'&&gu8arr_arr[2]!='2'&&gu8arr_arr[3]!='3'&&gu8arr_arr[4]!='4'&&gu8arr_arr[5]!='5'&&gu8arr_arr[6]!='6'
        &&gu8arr_arr[7]!='7'&&gu8arr_arr[8]!='8'&&gu8arr_arr[9]!='9')
         returnvalue=when_the_game_is_draw;
else
       returnvalue=when_the_game_is_continue;

    return returnvalue;
}





/********************************************
display the board
*******************************************/

void display(){
system("cls");
printf("gu16_player1 (X)  - gu16_player2 (0)\n\n\n");
printf("    |    |        \n");
printf("  %c    %c     %c   \n",gu8arr_arr[1],gu8arr_arr[2],gu8arr_arr[3]);
printf("----|----|--------\n");
printf("  %c    %c     %c    \n",gu8arr_arr[4],gu8arr_arr[5],gu8arr_arr[6]);
printf("----|----|-------- \n");
printf("  %c    %c      %c    \n",gu8arr_arr[7],gu8arr_arr[8],gu8arr_arr[9]);
printf("    |    |         \n");
}



/*************************************
mark the gu16_player gu16_choise
*************************************/

void marked(uint8_t mark){

if(gu16_choise==1&&gu8arr_arr[1]=='1')
    gu8arr_arr[1]=mark;

 else if(gu16_choise==2&&gu8arr_arr[2]=='2')
    gu8arr_arr[2]=mark;

 else if(gu16_choise==3&&gu8arr_arr[3]=='3')
    gu8arr_arr[3]=mark;
 else if(gu16_choise==4&&gu8arr_arr[4]=='4')
    gu8arr_arr[4]=mark;
 else if (gu16_choise==5&&gu8arr_arr[5]=='5')
    gu8arr_arr[5]=mark;
 else if(gu16_choise==6&&gu8arr_arr[6]=='6')
    gu8arr_arr[6]=mark;
 else if(gu16_choise==7&&gu8arr_arr[7]=='7')
    gu8arr_arr[7]=mark;
 else if(gu16_choise==8&&gu8arr_arr[8]=='8')
    gu8arr_arr[8]=mark;
 else if(gu16_choise==9&&gu8arr_arr[9]=='9')
    gu8arr_arr[9]=mark;
   else{
    gu16_player--;

   }
}






