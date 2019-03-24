#include "Ship.h"

Ship::Ship(void)
{
  // m_Hp = 0;
}

Ship::~Ship(void)
{
}

void Ship::GetPosition(char x, char y)
{
  m_Pos.x = x;
  m_Pos.y = y;
}


// void Ship::AddPosition(Position pos)
// {
//   for(int i=0; i<MAP_SIZE; ++i)
//   {
//     if(pos.x == 0)
//     {
//       pos = pos;
//       break;
//     }
//     if(m_Pos[i].y == 0)
//     {
//       m_Pos[i] = pos;
//       break;
//     }
//   }
// }



// void Ship::GetName() {return m_Name;}

// void Ship::GetType() {return m_Type;}


// virtual void HitCheck(Position pos)
// {
//   int count = sizeof(m_Pos) / sizeof(m_Pos[0]);
//
//   for(int i=0; i<count; ++i)
//   {
//     if(m_Pos[i].x == pos.x && m_Pos[i].y == pos.y)
//     {
//       m_Hp -= 1;
//       return (m_HP == 0) ? DESTROY : HIT;
//     }
//   }
//   return MISS;
// }
