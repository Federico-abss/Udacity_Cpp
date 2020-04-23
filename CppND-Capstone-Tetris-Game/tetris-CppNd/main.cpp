#include "game.h"
#include <iostream>

int main(int /*argc*/, char */*argv*/[])
{
  Game game;
  while (game.tick());

  return 0;
}
