#include <ncurses.h>
#include "CBattleShip.h"

void BattleShip::BattleShip()
{
  m_Name = "Battleship";
  m_Type = BATTLESHIP;
  m_HP = 4;
}

void BattleShip::Draw()
{
   mvprintw(pos.x, pos.y, 'B');
}

void BattleShip::~BattleShip()
{

}
