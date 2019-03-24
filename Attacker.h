//20163084 권보경

#include <ncurses.h>
#include "Pane.h"
#ifndef __ATTACK_H__
#define __ATTACK_H__

#define MAP_SIZE 8

//게임 화면 맵을 표시하는 클래스
class Attacker : Pane
{
public:
  Attacker();
  ~Attacker();

  void Draw();

protected:
  char m_mapData[MAP_SIZE][MAP_SIZE];
};

#endif
