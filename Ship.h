//20163084 권보경

#ifndef __SHIP_H__
#define __SHIP_H__
#include <string>


enum class ShipType {SHIP_NONE, AIRCRAFT, BATTLESHIP, CRUISER, DESTROYER, SHIP_CANT_PLACE};
// struct enum HitResult {MISS, HIT, DESTROYER, GAME_CLEAR};

struct Position
{
  char x, y;
};

class Ship
{
public:
  Ship(void);
  ~Ship(void);

  // void AddPosition(Position pos);
  // virtual void HitCheck(Position hitPos);

  virtual void GetPosition(char x, char y);
  // void GetName();

  // void GetType();

  // void SetPosition();



protected:
  std::string   m_Name;
  ShipType      m_Type;
  Position      m_Pos;
  int  m_Hp;
};


#endif
