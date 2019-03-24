//20163084 권보경

#include "Pane.h"
#include <ncurses.h>
#ifndef __STAT_H__
#define __STAT_H__


//status를 표시하는 윈도우
class StatPane : public Pane
{
public:
  StatPane(int x, int y, int width, int height);
  ~StatPane();

  virtual void Draw();
};


#endif
