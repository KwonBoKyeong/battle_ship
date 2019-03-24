//20163084 권보경

#ifndef __CRUISER_H__
#define __CRUISER_H__
#include "Ship.h"

class Cruiser : public Ship
{
public:
  Cruiser(void);
  ~Cruiser(void);

  void Draw();
};


#endif
