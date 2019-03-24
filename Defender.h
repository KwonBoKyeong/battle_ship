//20163084 권보경

#include <ncurses.h>
#include "Pane.h"
#include "Ship.h"
#ifndef __MAP_H__
#define __MAP_H__

#define MAP_SIZE 8

//게임 화면 맵을 표시하는 클래스
class Defender : public Pane
{
public:
  Defender();
  ~Defender();


  void Draw();

protected:
  char m_mapData[MAP_SIZE][MAP_SIZE];
};

class Defender2 : public Ship
{
public:
  void DrawShip();

};

#endif
