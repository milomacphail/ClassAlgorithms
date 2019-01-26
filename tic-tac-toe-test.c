#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cs50.h>

void drawBoard()
{
  char* input = get_string("Enter board dimensions: ");
  int dimensions = atoi(input);
  int xCount = 0;
  int oCount = 0;

   for (int i = 0; i < dimensions; i++)
   {
    {
      printf("   |");
   }
      printf("\n");
   }
   for (int j = 0; j < dimensions; j++)
   {
      printf("---+---+---\n");
   }
    printf("   |   |   \n");
    }


int main()
{
    drawBoard();
    return 0;
}


