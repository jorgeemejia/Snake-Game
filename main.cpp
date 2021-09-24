#include <iostream>

const int BOARD_ROWS = 5;
const int BOARD_COLS = 10;
const int SNAKE_ROW_START = 2;
const int SNAKE_COL_START = 2;
char GAMEBOARD[BOARD_ROWS][BOARD_COLS] =       {'-','-','-','-','-','-','-','-','-','-',
                                                '|',' ',' ',' ',' ',' ',' ',' ',' ','|',
                                                '|',' ',' ',' ',' ',' ',' ',' ',' ','|',
                                                '|',' ',' ',' ',' ',' ',' ',' ',' ','|',
                                                '-','-','-','-','-','-','-','-','-','-'};


void SnakeStart(char array[BOARD_ROWS][BOARD_COLS])
{

array[SNAKE_ROW_START][SNAKE_COL_START] = 'X';

}

void MoveSnake(int move)
{

move = Movement();
if(move = 1)
{
    
}


}
int Movement()
{
    char key;
    std::cout << "Where snake move?" << std::endl;
    std::cin >> key;
    if (key == 'w')
    {
      return 1;
    }
    else if(key == 'a')
    {
      return 2;
    }
    else if(key == 's')
    {
      return 3;
    }
    else if(key == 'd')
    {
      return 4;
    }
return 0;
}


void PrintBoard()
{

    for (int x = 0; x < BOARD_ROWS; x++)
{
    for (int y = 0; y < BOARD_COLS; y++)
    {
        std::cout << GAMEBOARD[x][y];
    }
    std::cout << '\n';
}



}

 void UpdateBoard()
 {

 SnakeStart(GAMEBOARD);

 }



int main()
{

PrintBoard();
UpdateBoard();

return 0;
    
}


///How do I move snake around?
//Move snake depending on W,A,S,D