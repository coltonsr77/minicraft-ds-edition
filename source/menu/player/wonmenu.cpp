#include "wonmenu.h"

WonMenu::WonMenu(int time, int score)
  : ResultsMenu(time, score) {}

void WonMenu::render(Screen& screen, Screen& bottomScreen)
{
  ResultsMenu::renderResults(screen, "You won!", "Press START to quit");
}
