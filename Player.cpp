#include <ncurses.h>
#include "Player.h"
#include "Aircraft.h"
#include "Battleship.h"
#include "Cruiser.h"
#include "Destroyer.h"

Player();
~Player();

void Player::Attack()
{
  Init();
  Render();
  SetupShips();
  SetHitResult();
}


void Player::Init()
{

}
void Player::Render()
{

}

void Player::SetupShips()
{
  m_Aircraft.GetPosition("c","3");
  m_Aircraft.GetPosition("c","4");
  m_Aircraft.GetPosition("c","5");
  m_Aircraft.GetPosition("c","6");
  m_Aircraft.GetPosition("c","7");
}

void Player::SetHitResult()
{

}
