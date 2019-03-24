//20163084 권보경

#ifndef __MGR_H__
#define __MGR_H__

#include "Player.h"

class GameManager
{
public:
  GameManager();
  ~GameManager();

  void Init();
  void Start();
  // void Render();
  // void AddTurn();
  // void AttackByInput();
  // void GetGameMode();
  // void GetInstance();
  // void GetShips();
  // void GetTurn();
  // void IsDeadShip();
  // void SetGameMode();

protected:
  Player    m_Attacker;
  Player    m_Defender;
  GameMode  m_GameMode;
  Ships     m_Ships;
  Turn      m_Turn;
};

#endif
