#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void drawBoard()
{
  char board[9];
  int i;

  for( i = 0; i < 9; i++){
    board[i]= ' ';
    if (i % 2 == 1)
    {
        board[i] = 'o';
    } else {
        board[i] = 'x';
    }

    }
   printf(" %c | %c | %c \n", board[6], board[7], board[8]);
   printf("---+---+---\n");
   printf(" %c | %c | %c \n", board[3], board[4], board[5]);
   printf("---+---+---\n");
   printf(" %c | %c | %c \n", board[0], board[1], board[2]);
  }

int main()
{
    drawBoard();
    return 0;
}


