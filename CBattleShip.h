//20163084 권보경

#ifndef __BATTLESHIP_H__
#define __BATTLESHIP_H__
#include "Ship.h"

class BattleShip : public Ship
{
public:
  BattleShip(void);
  ~BattleShip(void);

  void Draw();
};

#endif
