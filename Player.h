//20163084 권보경

#include <ncurses.h>
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "Ship.h"
#include "BattleShip.h"

class Player //부모
{
public:
  Player();
  ~Player();

  void Attack();
  void Init();
  void Render();
  void SetupShips();
  void SetHitResult();
  // void AddPosition(Position pos);

protected:
  Attacker*       m_pAttacker;
  CBattleshipMap* m_pMap;
  Aircraft*       m_Aircraft;
  Battleship*     m_Battleship;
  Cruiser*        m_Cruiser;
  Destroyer*      m_Destroyer[2];

};

class Defender : public Player // 자식
{

};

class Attacker : public Player // 자식
{

};
