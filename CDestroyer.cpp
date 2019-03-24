#include <ncurses.h>
#include "CDestroyer.h"

void Destroyer::Destroyer()
{
  m_Name = "Destroyer";
  m_Type = DESTROYER;
  m_HP = 2;
}

void Destroyer::Draw()
{
  mvprintw(pos.x, pos.y, 'D');
}

void Destroyer::~Destroyer()
{

}
