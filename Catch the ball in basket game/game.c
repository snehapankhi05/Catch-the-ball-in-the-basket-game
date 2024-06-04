#include<stdio.h>
#include<conio.h>
void main () {
 int ballX=60,ballY=1,basketX=40,basketY=15,d,score=0,lifeline=3;
 char ch;
 start :
 clrscr();
 gotoxy(70,5);
 printf("score=%i",score);
 gotoxy(70,6);
 printf("lifeline=%i",lifeline);

 gotoxy(ballX,ballY);
 printf("0");
 gotoxy(basketX,basketY);
 printf("#");
 gotoxy(basketX+7,basketY);
 printf("#");
 gotoxy(basketX,basketY+1);
 printf("########");
 if(kbhit()) {
 ch=getch();
 switch(ch) {
 case 'A' : if(basketX>1){
	      basketX--;
	     }
	     break;
  case 'a' : if(basketX>1){
	      basketX--;
	     }
	     break;
    case 'D' : if(basketX<73){
	      basketX++;
	     }
	     break;
     case 'd' : if(basketX<73){
	      basketX++;
	     }
	     break;
      case 'X' : exit(0);
      case 'x' : exit(0);


 }//ending of switch
 } //ending of if
 ballY++;
 if(ballY==15){
   sound(200);
   delay(200);
   nosound();
   d=ballX-basketX;
   if(d>=1 && d<=6){
   score++;
   }else {
   lifeline--;
   if(lifeline==0){
   clrscr();
   gotoxy(40,13);
   printf("Game is over");
   getch();
   exit(0);
   }
   }//ending of if
   ballY=1;
   ballX=rand()%80+1;
   }
   delay(200);
 goto start;

getch();
}