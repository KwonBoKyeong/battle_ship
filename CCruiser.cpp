#include <ncurses.h>
#include "CCruiser.h"

void Cruiser::Cruiser()
{
  m_Name = "Cruiser";
  m_Type = CRUISER;
  m_HP = 3;
}

void Cruiser::Draw()
{
   mvprintw(pos.x, pos.y, 'C');
}

void Cruiser::~Cruiser()
{

}
