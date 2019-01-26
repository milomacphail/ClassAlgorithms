#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void testForWin()
{
  char board[9];
  int i;
  int xCount = 0;
  int oCount = 0;

  for( i = 0; i < 9; i++){
    board[i]= ' ';
    if (i % 2 == 1)
    {
        board[i] = 'o';
        oCount ++;
    } else
    {
        board[i] = 'x';
        xCount ++;
    }

    }
   printf(" %c | %c | %c \n", board[0], board[1], board[2]);
   printf("---+---+---\n");
   printf(" %c | %c | %c \n", board[3], board[4], board[5]);
   printf("---+---+---\n");
   printf(" %c | %c | %c \n", board[6], board[7], board[8]);
   printf("X Count:%i\n", xCount);
   printf("O Count:%i\n", oCount);

    /*if (board[0] (&&) board[4] (&&) board[8] || board[6] (&&) board[4] (&&) board[2] || board[0] (&&) board[1] (&&) board[2] ||board[3] (&&) board[4] (&&) board[5] || board[6] (&&) board[7] (&&) board[8] || board[0] (&&) board[3] (&&) board[6] ||board[1] (&&) board[4] (&&) board[7] || board[2] (&&) board[5] (&&) board[8] == 'x')
    {
        printf("X wins!\n");
    }
    else if (board[0] (&&) board[4] (&&) board[8] || board[6] (&&) board[4] (&&) board[2] || board[0] (&&) board[1] (&&) board[2] || board[3] (&&) board[4] (&&) board[5] || board[6] (&&) board[7] (&&) board[8] || board[0] (&&) board[3] (&&) board[6] || board[1] (&&) board[4] (&&) board[7] || board[2] (&&) board[5] (&&) board[8] == 'o')
    {
        printf("O wins!\n");
    }
    */
}
int main()
{
    testForWin();
    return 0;
}


