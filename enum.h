//20163084 권보경

#ifndef __ENUM_H__
#define __ENUM_H__

enum class HitResult
{
  MISS, HIT, DESTROY, GAME_CLEAR
};

enum class ShipType
{
  SHIP_NONE, AIRCRAFT, BATTLESHIP, CRUISER, DESTROYER, SHIP_CANT_PLACE
};

enum class GameMode
{
  PLAY_INPUT, PLAY_RANDOM, PLAY_FOLLOW_AI
};


#endif
