#include "BattleShipApp.h"


CBattleShipApp::CBattleShipApp()
{
  initscr();
  start_color();
  cbreak();
  refresh();

  //color setting
  init_pair(1, COLOR_GREEN, COLOR_BLACK);
  init_pair(2, COLOR_CYAN, COLOR_BLACK);
  init_pair(3, COLOR_YELLOW, COLOR_BLACK);

  m_pDefender = new Defender();
  m_pAttacker = new Attacker();
  m_pStatPane = new StatPane(30, 3, 30, 6);
  m_pInputPane = new InputPane(30, 15, 30, 4);
}

CBattleShipApp::~CBattleShipApp() {}

void CBattleShipApp::Play()
{
  CBattleShipApp();
  Render();
  Destroy();
}

void CBattleShipApp::Render()
{
  mvprintw(1, 1, "<< Battle Ship Game >>");

  m_pDefender -> Draw();
  m_pAttacker -> Draw();
  m_pStatPane -> Draw();
  m_pInputPane -> Draw();


  refresh();
}

void CBattleShipApp::Destroy()
{
  getch();
  endwin();
  delete m_pDefender;
  delete m_pAttacker;
}
