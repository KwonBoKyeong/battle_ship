//20163084 권보경

#ifndef __DESTROYER_H__
#define __DESTROYER_H__
#include "Ship.h"

class Destroyer : public Ship
{
public:
  Destroyer(void);
  ~Destroyer(void);

  virtual void Draw();
};

#endif
