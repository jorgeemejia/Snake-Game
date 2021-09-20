#include <iostream>

const int BOARD_ROWS = 5;
const int BOARD_COLS = 10;

void PrintBoard()
{
    char gameboard[BOARD_ROWS][BOARD_COLS] = {'-','-','-','-','-','-','-','-','-','-',
                                              '|','a','a','a','a','a','a','a','a','|',
                                              '|','a','a','a','a','a','a','a','a','|',
                                              '|','a','a','a','a','a','a','a','a','|',
                                              '-','-','-','-','-','-','-','-','-','-'};

    for (int x = 0; x < BOARD_ROWS; x++)
{
    for (int y = 0; y < BOARD_COLS; y++)
    {
        std::cout << gameboard[x][y];
    }
    std::cout << '\n';
}
}

int main()
{

PrintBoard();


return 0;
    
}