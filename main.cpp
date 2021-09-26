#include <iostream>
#include <conio.h>
bool GameOver;
const int width = 20;   //width of board
const int height = 20;  //height of board
int x;  //head position
int y;  //head postion
int fruitX; //fruit position
int fruitY; //fruit position
int score;
enum eDirection{STOP = 0, LEFT, RIGHT, UP, DOWN}; //Enum is a user defined data type where we specify a set of values for a variable and the variable can only take one out of a small set of possible values
eDirection dir;

void Setup()
{
  GameOver = false;
  dir = STOP; //Keeps snake still until player moves 
  x = width / 2;  //Snake starts in the middle of the board
  y = height / 2;  //Snake starts in the middle of the board
  fruitX = rand() % width;
  fruitY = rand() % height;
  score = 0;
}
void Draw()
{

  system("cls"); //to clear the screen in Visual C++

  for (int i = 0; i < width; i++) ///Creates the top of the board
  {  
    std::cout << "#";
  }
  std::cout << std::endl;
  


for(int i = 0; i < height; i++)  //Creates the body of the board
{
  for (int j = 0; j <= width; j++)
  {
    if(j == 0 || j == width)    //Prints a # only on the sides
    {
      std::cout << "#";
    }
    else if(i == y && j == x)   //Prints the head when coordinates match
    {
      std::cout << "O";
    }
    else if (i == fruitY && j == fruitX) //Prints the fruit when the coordinates match
    {
      std::cout << "F";
    }
    else
    {
      std::cout << " ";        //Else, keep the board empty
    }
  }
  std::cout << std::endl;  //Endl; to move lower and lower
}


  for (int i = 0; i < width; i++) ///Creates the bottom of the board
  {
    std::cout << "#";
  }
  std::cout << std::endl;

  std::cout << "Score : " << score << std::endl;
}
void Input()
{

  if(_kbhit())  //returns a non-zero integer if a key is in the keyboard buffer. It will not wait for a key to be pressed.
  {
    switch (_getch()) //Use the switch statement to select one of many code blocks to be executed  //gets the keyboard letter
    {                 //Use (_getch())this function to read characters from the keyboard. This function is also used to hold the output screen until the user enters any character. If you don’t use this function then the output screen closes within a fraction of a second.
      case 'a':
        dir = LEFT;   //Depending on key hit, change dir
        break;        
      case 'd':
        dir = RIGHT;
        break;
      case 'w':
        dir = UP;
        break;
      case 's':
        dir = DOWN;
        break;
      case 'x':
        GameOver = true;
        break;
      
                        
    }
  }

}
void Logic()
{

switch(dir)   //Based on what direction currently is, change coordinates of snake
{
  case LEFT:
    x--;
    break;
  case RIGHT:
    x++;
    break;
  case UP:
    y--;
    break;
  case DOWN:
    y++;
    break;
  default:
    break;
}

  if (x > width || x < 0 || y > height || y < 0)   //If snake reaches out of bounds, game ends
  {
    GameOver = true;
  }

  if ( x == fruitX && y == fruitY)  //If snake reaches the fruit, spawn fruit elsewhere, increase score
  {
    score = score + 1;
    fruitX = rand() % width;
    fruitY = rand() % height;

  }


}
int main()
{
  Setup();
  while(!GameOver)
  {
    Draw();
    Input();
    Logic();
    //Sleep(10);
  }
  return 0;
}