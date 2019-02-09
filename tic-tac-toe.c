#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cs50.h>

char board[10] = {'0', '1', '2', '3','4','5','6','7','8','9'};

int gamePlay();
void drawBoard();

int main()
{
    int player = 1, i, move;

    char square;

    do {
        drawBoard();

        player = (player%2) ? 1 : 2;

        printf("Player %d, your move!", player);
        scanf("%d", &move);


        square = (player == 1) ? 'X' : 'O';

        if (move == 0 && board[0] == '0')
          board[0] = square;

        else if (move == 1 && board[1] == '1')
          board[1] = square;

        else if (move == 2 && board[2] == '2')
          board[2] = square;

        else if (move == 3 && board[3] == '3')
          board[3] = square;

        else if (move == 4 && board[4] == '4')
          board[4] = square;

        else if (move == 5 && board[5] == '5')
          board[5] = square;

        else if (move == 6 && board[6] == '6')
          board[6] = square;

        else if (move == 7 && board[7] == '7')
          board[7] = square;

        else if (move == 8 && board[8] == '8')
          board[8] = square;

        else
        {
          printf("Sorry! Try another move.");

          player--;

          getchar();

        }

        i = gameTime();
        player++;

    }

    //loop condition, while i == -1, game is in play and program will return a board image
    while (i == -1);
    drawBoard();

    if (i == 1)
    printf("Player %d wins the game!", --player);

    else
    printf("Game is a draw!");

    getchar();
    return 0;
}

int gamePlay()
{
    if (board[0] == board[1] && board[1] == board[2])
    return 1;

  else if(board[3] == board [4] && board[4] == board[5])
    return 1;

  else if(board[6] == board[7] && board[7] == board[8])
    return 1;

  else if(board[0] == board[3] && board[3] == board[6])
    return 1;

  else if(board[1] == board[4] && board[4] == board[7])
    return 1;

  else if(board[2] == board[5] && board[5] == board[8])
    return 1;

  else if(board[2] == board[4] && board[4] == board[6])
    return 1;

  else if(board[0] == board[4] && board[4] == board[8])
    return 1;

  // For draws/no wins = there is no above combination

  else if (board[0] != 0 && board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4'
  && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8')

    return 0;

  else
    return -1;
}


void drawBoard()
{

    system("cls");
    printf("It's game time! Let's play.\n");
    printf("Player 1 is X, Player 2 is O.\n");


    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);

}


