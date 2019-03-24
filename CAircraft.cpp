#include <ncurses.h>
#include "CAircraft.h"

void Aircraft::Aircraft()
{
  m_Name = "Aircraft";
  m_Type = AIRCRAFT;
  m_HP = 5;
}

void Aircraft::Draw()
{
   mvprintw(pos.x, pos.y, 'A');
}

void Aircraft::~Aircraft()
{

}
