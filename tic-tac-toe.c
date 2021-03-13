#include<conio.h>
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>




void print();
void choice();
int choice2();
void dicision();
void arrowHere(int realposition,int arrowposition);
int AI();
int  menu_for_start();
char gm[11]={'\0','1','2','3','4','5','6','7','8','9'},E='O';
int ch=1,tch=0,plyer=1,position,number=0,i=1,temp[11]={00,11,22,33,44,55,66,77,88,99,100};
int Ai,oposit,ch3,ch2;
int main()
{
            system("Color f1");
     printf("\n\n\n\n\n\n\n\n\t\t\t\t\t\t------------------------");
                   printf("\n\t\t\t\t\t\t| WELCOME TO IN MY GAME|");
                   printf("\n\t\t\t\t\t\t|   Welcome to my game |");
                   printf("\n\t\t\t\t\t\t------------------------");
    Sleep(3000);
    system("cls");
    position= menu_for_start();

    print();
    getch();
    return 0;
}
void arrowHere(int realposition,int arrowposition)  //  FUNCTION
{
    if(realposition== arrowposition)

    printf("----> -");
    else
        printf("       ");

}
int  menu_for_start() //#########################################
 {
    #define MIN 1
    #define MAX 2
    int position=1;
    int keypressed=1;
    system("cls");

    while(keypressed!=13)
    {

    system("cls");
    arrowHere(1,position);printf("1.Multi Player.\n");
    arrowHere(2,position);printf("2.Single Player(With Computer).\n");
      printf("\n\n\n\n\t\t # USE ARROW KEY.");
    keypressed=getch();

    if(keypressed==80 && position!=MAX)
	position++;
    else if(keypressed==72 && position!=MIN)
	 position--;
//    else if(keypressed==1)
//     return(position);
//    else if(keypressed==2)
//     return(2);
    else
	 position=position;
    }
    return (position);
}

void print()    //################

{

     system("cls");
     printf("\n");

    if (position==1)
     printf("\tPLAYER 1:O\n\tPLAYER 2:X\n\n\n");
    else
        printf("\tPLAYER 1:O\n\tPLAYER 2(comp) :X\n\n\n");
     printf("\t\t\t      |       |    \n");
     printf("\t\t\t   %c  |   %c   |   %c   \n",gm[1],gm[2],gm[3]);
     printf("\t\t       -------|-------|--------\n");
     printf("\t\t\t   %c  |   %c   |   %c   \n",gm[4],gm[5],gm[6]);
     printf("\t\t       -------|-------|--------\n");
     printf("\t\t\t   %c  |   %c   |   %c   \n",gm[7],gm[8],gm[9]);
     printf("\t\t\t      |       |    \n");
    if(E!='e')
    choice();

   else
    {
               printf("\n\t\t\t\t\t\t#PLAYER  %d IS WINER. \n",plyer);
               printf("\n\t\t\t------------------------------------------------------------------------");
               printf("\n\t\t\t|**********************I HOPE YOU ENJOI THIS GAME**********************|");
               printf("\n\t\t\t------------------------------------------------------------------------");
getch();
    }
}

void choice()
{
    int hello;
     number++;
   if(number>9) //breck this program.
   {
     printf("\t\t-------------------------------------------------");
     printf("\n\t\t|****************** MATCH TIE ******************|");
     printf("\n\t\t-------------------------------------------------");
    exit(1);
   }

     hello=number%2;
    //  printf("p=%d__",position);
    //   printf("he=%d__number=%d____",hello,number);
    //  Sleep(2000);
     if((hello==0) && (position==2))
     {
      AI();
     }
     else
     {
         printf("\tEnter Your Choich Player %d:",plyer);
          scanf("%d",&ch);    // #1                                    ###CHOICE HERE
       //choice2();         //  #2  USE CALCULATER KEYBORD
     }
    if(ch<10 && ch!=0 && temp[1]!=ch && temp[2]!=ch && temp[3]!=ch && temp[4]!=ch && temp[5]!=ch && temp[6]!=ch && temp[7]!=ch && temp[8]!=ch && temp[9]!=ch )  // for get chance to player.
    {

      {
       if(plyer==1)    //for player 1.
         gm[ch]='O';  // when variable_player ->1 gm[] ->value store is 'O' other wise gm[] ->value store is 'x' .
       else
         gm[ch]='X';
      }
         temp[i]=ch;    //give the value  in temp variable .
         i++;
         dicision();    // call this function.
    }
    else
    {
        printf("\n\t\t---------------------------------------------------------");
        printf("\n\t\t**********************Enter Valid Choice***************** ");
        printf("\n\t\t---------------------------------------------------------");

       number--;
       Sleep(990);
       print();
    }
}
void dicision()   // this function for  dicision which player win this game.
{

   if(gm[1]==gm[2] && gm[2]==gm[3])
   E='e';
   else if
    (gm[4]==gm[5] && gm[5]==gm[6])
    E='e';
   else if
    (gm[7]==gm[8] && gm[8]==gm[9])
   E='e';
   else if
    (gm[1]==gm[4] && gm[4]==gm[7])
   E='e';
   else if
    (gm[2]==gm[5] && gm[5]==gm[8])
     E='e';
   else if
    (gm[3]==gm[6] && gm[6]==gm[9])
    E='e';
   else if
    (gm[1]==gm[5] && gm[5]==gm[9])
    E='e';
   else if
    (gm[3]==gm[5] && gm[5]==gm[7])
    E='e';  // else if(position==1)


   else if
     (plyer==1)
     plyer++;
   else
    plyer--;

    print();
}

int choice2()
{
    ch=getch();

                if(ch==49)
            ch=7;
            else if(ch==50)
            ch=8;
            else if(ch==51)
            ch=9;
            else if(ch==52)
            ch=4;
            else if(ch==53)
            ch=5;
            else if(ch==54)
            ch=6;
            else if(ch==55)
            ch=1;
            else if(ch==56)
            ch=2;
            else if(ch==57)
            ch=3;
            else
            ch=99;
}

int AI()
{
 int co;


    if(number>=1)
    {
for(co=1;co<3;co++)
{
    if(co==1)
      ch3='X';
    else
        ch3='O';
if((gm[1]==ch3) &&  (gm[2]==ch3) && (gm[3]=='3')) //#1
                {ch=3; return 0;}

else if((gm[1]==ch3) &&  (gm[3]==ch3) && (gm[2]=='2'))
                {ch=2; return 0;}

else if((gm[2]==ch3) &&  (gm[3]==ch3) && (gm[1]=='1'))
              {ch=1; return 0;}

else if((gm[4]==ch3) &&  (gm[5]==ch3) && (gm[6]=='6')) //#2
                {ch=6; return 0;}

else if((gm[4]==ch3) &&  (gm[6]==ch3) && (gm[5]=='5'))
                {ch=5; return 0;}

else if((gm[5]==ch3) &&  (gm[6]==ch3) && (gm[4]=='4'))
                {ch=4; return 0;}

else if((gm[7]==ch3) &&  (gm[8]==ch3) && (gm[9]=='9')) //#3
                {ch=9; return 0;}

else if((gm[7]==ch3) &&  (gm[9]==ch3) && (gm[8]=='8'))
                {ch=8; return 0;}

else if((gm[8]==ch3) &&  (gm[9]==ch3) && (gm[7]=='7'))
                {ch=7; return 0;}

else if((gm[1]==ch3) &&  (gm[4]==ch3) && (gm[7]=='7'))//#4
                {ch=7; return 0;}

else if((gm[1]==ch3) &&  (gm[7]==ch3) && (gm[4]=='4'))
                {ch=4; return 0;}

else if((gm[4]==ch3) &&  (gm[7]==ch3) && (gm[1]=='1'))
                {ch=1; return 0;}

else if((gm[2]==ch3) &&  (gm[5]==ch3) && (gm[8]=='8')) //#5
                {ch=8; return 0;}

else if((gm[2]==ch3) &&  (gm[8]==ch3) && (gm[5]=='5'))
                {ch=5; return 0;}

else if((gm[5]==ch3) &&  (gm[8]==ch3) && (gm[2]=='2'))
                {ch=2; return 0;}

else if((gm[3]==ch3) &&  (gm[6]==ch3) && (gm[9]=='9'))//#6
                {ch=9; return 0;}

else if((gm[3]==ch3) &&  (gm[9]==ch3) && (gm[6]=='6'))
                {ch=6; return 0;}

else if((gm[6]==ch3) &&  (gm[9]==ch3) && (gm[3]=='3'))
                {ch=3; return 0;}

else if((gm[1]==ch3) &&  (gm[5]==ch3) && (gm[9]=='9'))//#7
                {ch=9; return 0;}

else if((gm[1]==ch3) &&  (gm[9]==ch3) && (gm[5]=='5'))
                {ch=5; return 0;}

else if((gm[5]==ch3) &&  (gm[9]==ch3) && (gm[1]=='1'))
                {ch=1; return 0;}

else if((gm[3]==ch3) &&  (gm[5]==ch3) && (gm[7]=='7'))//#8
                {ch=7; return 0;}

else if((gm[3]==ch3) &&  (gm[7]==ch3) && (gm[5]=='5'))
                {ch=5; return 0;}

else if((gm[5]==ch3) &&  (gm[7]==ch3) && (gm[3]=='3'))
                {ch=3; return 0;}
 else if(co==2)
 {
     rand:
              ch=rand();
              if(ch<10 && ch!=0 && temp[1]!=ch && temp[2]!=ch && temp[3]!=ch && temp[4]!=ch && temp[5]!=ch && temp[6]!=ch && temp[7]!=ch && temp[8]!=ch && temp[9]!=ch )
               {gm[ch]='X'; return 0;}
              else
                goto rand;
 }
}
    }
         }
//}
















