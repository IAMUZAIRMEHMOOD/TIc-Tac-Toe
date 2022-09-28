#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
//
//Declaration
//
//-------------------Variables
int count = 0;
char a[9]={'1','2','3','4','5','6','7','8','9'};
//-------------------Method
void array_default();
void play_again();
void clear();
int winner();
void play_game();
void check(char,char);
void start();
char scan();
void show_status();
void getName();
void inputSymbol();
//
//Main
//
void main()
{
int k;
clear();
getName();
show_status();
inputSymbol();
start();
play_game();
//goto statement
repeat:
clear();
show_status();
play_game();
k = winner();
clear();
show_status();
if(count<=9)
{
 if (k = 1)
 {
 printf("\n\t********Player 1 Won********\n");
 play_again();
 }
 else if (k = 2)
 {
 printf("\n\t********Player 2 Won********\n");
 play_again();
 }
 goto repeat;
 }
else
{
printf("\n\t********   Draw     ********\n");
play_again();
}
/*char a,b;
system("clear"); 
printf("Enter Two character:\n");
scanf("%c \n",&a);
//fflush(stdin);
scanf("%c",&b);
printf("%c %c",a,b);*/
}
void play_again()
{
char pa;
printf("\n\tPress 1 to Play Again Any other key to exit\n");
pa = scanf("%c \n",&pa);
if (pa == '1')
{
array_default();
main();
}
else 
 printf("\tHALT");
}
void clear()
{
system("clear");
}
int winner()
{
if ((a[0]=='x' && a[1]=='x' && a[2]=='x') || (a[0]=='x' && a[3]=='x' && a[6]=='x') || (a[0]=='x' && a[4]=='x' && a[8]=='x'))
return 1;
else if ((a[0]=='0' && a[1]=='0' && a[2]=='0') || (a[0]=='0' && a[3]=='0' && a[6]=='0') || (a[0]=='0' && a[4]=='0' && a[8]=='0'))
return 2;
else if (a[1]=='x' && a[4]=='x' && a[7]=='x')
return 1;
else if (a[1]=='0' && a[4]=='0' && a[7]=='0')
return 2;
else if (a[2]=='x' && a[5]=='x' && a[8]=='x')
return 1;
else if (a[2]=='0' && a[5]=='0' && a[8]=='0')
return 2;
else if (a[3]=='x' && a[4]=='x' && a[5]=='x')
return 1;
else if (a[3]=='0' && a[4]=='0' && a[5]=='0')
return 2;
else if (a[2]=='x' && a[4]=='x' && a[6]=='x')
return 1;
else if (a[2]=='0' && a[4]=='0' && a[6]=='0')
return 2;
else if (a[8]=='x' && a[7]=='x' && a[6]=='x')
return 1;
else if (a[6]=='0' && a[7]=='0' && a[8]=='0')
return 2;
else 
return 0;
}
void array_default()
{
count = 0;
a[0] = 1;
a[1] = 2;
a[2] = 3;
a[3] = 4;
a[4] = 5;
a[5] = 6;
a[6] = 7;
a[7] = 8;
a[8] = 9;
}
void play_game()
{
char p,s;
printf("\nEnter position and symbol for the player:\n");
scanf("%c \n",&p);
scanf("%c",&s);
printf("Position %c \n",p);
printf("Symbol %c \n",s);
count++;
check(p,s);
}
void check(char p, char s)
{
int i ;
for (i=0;i<9;i++)
{if (a[i]!= 'x' || a[i]!= '0')
{
if(a[i]==p)
  {
   a[i]=s;
  }
}
else 
count--;
play_game();
}
}
void start()
{
char pa;
printf("\nEnter who will start the game: Player 1 or Player 2\n");
scanf("%c",&pa);
}
char scan()
{
char scan;
scanf("%c \n",&scan);
return scan;
}
void show_status()
{
printf("\n\n\n");
printf("\t\t\t---|---|---\n");
printf("\t\t\t %c | %c | %c \n",a[0],a[1],a[2]);
printf("\t\t\t---|---|---\n");

printf("\t\t\t %c | %c | %c\n",a[3],a[4],a[5]);
printf("\t\t\t---|---|---\n");

printf("\t\t\t %c | %c | %c\n",a[6],a[7],a[8]);
printf("\t\t\t---|---|---\n");

}
void getName()
{printf("\n\n\t\t    ******Tic Tac Toe******");}
void inputSymbol()
{printf("\nPlayer 1 Symobol X");
 printf("\nPlayer 2 Symobol 0\n"); }
