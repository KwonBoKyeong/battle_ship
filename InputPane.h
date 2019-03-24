//20163084 권보경

#include "Pane.h"
#ifndef __INPUT_H__
#define __INPUT_H__


class InputPane : public Pane
{
public:
  InputPane(int x, int y, int width, int height);
  ~InputPane();
  virtual void Draw();
  //
  // void PrintResult();
  // void Update();
};

#endif
