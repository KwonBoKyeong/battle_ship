//20163084 권보경

//화면을 구성하는 Pane의 부모 클래스
#ifndef __PANE_H__
#define __PANE_H__

#include <ncurses.h>

class Pane
{
public:
  Pane(int x, int y, int width, int height);
  virtual ~Pane();

  virtual void Draw();

protected:
  int m_width, m_height;
  int m_x, m_y;
  WINDOW* m_pWindow;
};

#endif
