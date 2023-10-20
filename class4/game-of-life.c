#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

#define SIZE 6

const int board[SIZE][SIZE] = {
    [1][1] = 1, [1][2] = 1, [2][1] = 1, [2][2] = 1, [3][3] = 1, [3][4] = 1, [4][3] = 1, [4][4] = 1};

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        // TODO: play game-of-life
        int old_board[SIZE + 2][SIZE + 2] = {0};

        for (int row = 1; row <= SIZE; row++)
        {
            for (int col = 1; col <= SIZE; col++)
            {
                old_board[row][col] = board[row - 1][col - 1];
            }
        }

        // print the initial board
        for (int row = 1; row <= SIZE; row++)
        {
            for (int col = 1; col <= SIZE; col++)
            {
                printf("%c", old_board[row][col] ? '*' : ' ');
            }
            printf("\n");
        }

        // Linux: unistd.h
        //sleep(1);
        // Windows: windows.h
        Sleep(1000);
        //sleep for 1000ms

        //Linux: stdlib.h
        //system("clear");
        //Windows: stdlib.h
        system("cls");
        //clear the output

        // old_board = apply the rule > new_board
        int new_board[SIZE + 2][SIZE + 2] = {0};
        for (int row = 1; row <= SIZE; row++)
        {
            for (int col = 1; col <= SIZE; col++)
            {
                // counting living cells in the neighbour on old_board[row][col]
                int neighbours =
                    old_board[row - 1][col - 1] +
                    old_board[row][col - 1] +
                    old_board[row - 1][col] +
                    old_board[row + 1][col - 1] +
                    old_board[row - 1][col + 1] +
                    old_board[row + 1][col + 1] +
                    old_board[row][col + 1] +
                    old_board[row + 1][col];

                // apply yhe rule;
                if (old_board[row][col])
                {
                    new_board[row][col] = (neighbours == 2 || neighbours == 3);
                }
                else
                {
                    new_board[row][col] = (neighbours == 3);
                }
            }
        }

        // print the initial board
        for (int row = 1; row <= SIZE; row++)
        {
            for (int col = 1; col <= SIZE; col++)
            {
                printf("%c", new_board[row][col] ? '*' : ' ');
            }
            printf("\n");
        }

        // old_board <- new_board
        for (int row = 1; row <= SIZE; row++)
        {
            for (int col = 1; col <= SIZE; col++)
            {
                old_board[row][col] = new_board[row][col];
            }
        }
    }
}