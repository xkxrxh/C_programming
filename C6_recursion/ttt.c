#include <stdio.h>

char board[3][3] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'}};

// Function to draw the 3x3 game board
void drawBoard()
{
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check if a player has won
int checkWin()
{
    // Check rows and columns
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }
    
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}


int checkDraw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
            {
                return 0; 
            }
        }
    }
    return 1; // Board is full
}

int main()
{
    int choice;
    int player = 1;
    char mark;
    int status = 0;

    do
    {
        drawBoard();
        player = (player % 2 != 0) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        printf("Player %d (%c), enter a cell number (1-9): ", player, mark);
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n')
                ; // Clear input buffer
            continue;
        }

        // Map choice (1-9) to row and column indices
        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        // Validate choice and place mark
        if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = mark;

            if (checkWin())
            {
                drawBoard();
                printf("==> Player %d (%c) wins!\n", player, mark);
                break;
            }
            else if (checkDraw())
            {
                drawBoard();
                printf("==> Game Draw!\n");
                break;
            }
            player++; // Switch player
        }
        else
        {
            printf("Invalid move! Try again.\n");
        }
    } while (1);

    return 0;
}