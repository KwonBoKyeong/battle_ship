//20163084 권보경

#include <ncurses.h>
#include "Defender.h"
#include "StatPane.h"
#include "InputPane.h"
#include "Attacker.h"
#include "Ship.h"
#ifndef __APP_H__
#define __APP_H__

class CBattleShipApp
{
protected:
	Defender* m_pDefender;
	Attacker* m_pAttacker;
	StatPane* m_pStatPane;
	InputPane* m_pInputPane;

public:
	CBattleShipApp();
	~CBattleShipApp();

	void Play();

protected:
	void Render();
	void Destroy();

};

#endif
