// Tic Tac Toe :
#include <stdio.h>
int displayboard();
int verifyselection();
void checkforwin();

char board[8];
char whowon = ' ';
int currentplayer = 0;

main() {
  int x;
  int squarenum = 0;
  for (x = 0; x < 9; x++)
    board[x] = ' ';
  displayboard();
  while (whowon == ' ') {
    printf("\n\%c\n", whowon);
    if (currentplayer == 1 || currentplayer == 0) {
      printf("\nPlayer X\n");
      printf("Enter An available square number (1-9) : ");
      scanf("%d", &squarenum);

      if (verifyselection(squarenum, currentplayer) == 1)
        currentplayer = 1;
      else
        currentplayer = 2;
    } else {
      printf("\nPlayer 0\n");
      printf("Enter An available square number (1-9) : ");
      scanf("%d", &squarenum);
      if (verifyselection(squarenum, currentplayer) == 1)
        currentplayer = 2;
      else
        currentplayer = 1;
    }

    displayboard();
    checkforwin();
  }
}
int displayboard() {

  system("clear");
  printf("\n\t|\t|\n");
  printf("\t|\t|\n");
  printf("%c\t|%c\t|%c\n", board[0], board[1], board[2]);
  printf("--------|-------|--------\n");
  printf("\t|\t|\n");
  printf("%c\t|%c\t|%c\n", board[3], board[4], board[5]);
  printf("--------|-------|--------\n");
  printf("\t|\t|\n");
  printf("%c\t|%c\t|%c\n", board[6], board[7], board[8]);
  printf("\t|\t|\n");
}
int verifyselection(int iSquare, int iPlayer) {

  if (board[iSquare - 1] == ' ' && (iPlayer == 1 || iPlayer == 0)) {
    board[iSquare - 1] = 'X';
    return 0;
  }

  else if (board[iSquare - 1] == ' ' && iPlayer == 2) {
    board[iSquare - 1] = 'O';
    return 0;
  }

  else
    return 1;
}
void checkforwin() {
  int catTotal;
  int x;

  if (board[0] == 'X' && board[1] == 'X' && board[2] == 'X')
    whowon = 'X';
  else if (board[3] == 'X' && board[4] == 'X' && board[5] == 'X')
    whowon = 'X';
  else if (board[6] == 'X' && board[7] == 'X' && board[8] == 'X')
    whowon = 'X';
  else if (board[0] == 'X' && board[3] == 'X' && board[6] == 'X')
    whowon = 'X';
  catTotal += 1;

  if (catTotal == 9) {
    whowon = 'C';
    printf("\nCAT Game!\n");
    return;
  } else if (board[1] == 'X' && board[4] == 'X' && board[7] == 'X')
    whowon = 'X';
  else if (board[2] == 'X' && board[5] == 'X' && board[8] == 'X')
    whowon = 'X';
  else if (board[0] == 'X' && board[5] == 'X' && board[8] == 'X')
    whowon = 'X';
  else if (board[2] == 'X' && board[5] == 'X' && board[6] == 'X')
    whowon = 'X';
  else if (board[0] == 'O' && board[1] == 'O' && board[2] == 'O')
    whowon = 'O';
  else if (board[3] == 'O' && board[4] == 'O' && board[5] == 'O')
    whowon = 'O';
  else if (board[6] == 'O' && board[7] == 'O' && board[8] == 'O')
    whowon = 'O';
  else if (board[0] == 'O' && board[3] == 'O' && board[7] == 'O')
    whowon = 'O';
  else if (board[1] == 'O' && board[4] == 'O' && board[7] == 'O')
    whowon = 'O';
  else if (board[2] == 'O' && board[5] == 'O' && board[8] == 'O')
    whowon = 'O';
  else if (board[0] == 'O' && board[5] == 'O' && board[8] == 'O')
    whowon = 'O';
  else if (board[2] == 'O' && board[5] == 'O' && board[6] == 'O')
    whowon = 'O';

  if (whowon == 'X') {
    printf("\nX Wins!\n");
    return;
  }
  if (whowon == 'O') {
    printf("\nO Wins!\n");
    return;
  }
  for (x = 0; x < 9; x++) {
    if (board[x] != ' ')
      catTotal += 1;
  }
  if (catTotal == 9) {
    whowon = 'C';
    printf("\nCAT Game!\n");
    return;
  }
}
