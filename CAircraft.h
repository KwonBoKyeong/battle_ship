//20163084 권보경

#ifndef __AIR_H__
#define __AIR_H__
#include "Ship.h"

class Aircraft : public Ship
{
public:
  Aircraft(void);
  ~Aircraft(void);

  void Draw();

};


#endif
