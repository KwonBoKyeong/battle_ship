#include "Defender.h"

Defender::Defender()
  :Pane(4, 3, MAP_SIZE + 3, MAP_SIZE + 2)
{
  for(int i=0; i<MAP_SIZE; i++)
  {
    for(int j=0; j<MAP_SIZE; ++j)
    {
      //맵 데이타 초기화
      m_mapData[i][j] = '0';
    }
  }

  //칸 구별 이름
  for(int i=0; i<MAP_SIZE; ++i)
  {
    mvprintw(i + 1 + m_y, m_x - 1, "%c", 'A' + i);
    mvprintw(m_y + m_height, m_x + 2 + i, "%d", 1 + i);
  }

  //타이틀
  mvwprintw(m_pWindow, 0, 2, "DEFENDER");

  // srand((unsigned)time(NULL)); //난수표생성
}

Defender::~Defender()
{
}

void Defender::Draw()
{
  wattron(m_pWindow, COLOR_PAIR(1));
  for(int i=0; i<MAP_SIZE; ++i)
  {
    for(int j=0; j<MAP_SIZE; ++j)
    {
      mvwprintw(m_pWindow, i + 1, j + 2, "%c", m_mapData[i][j]);
    }
  }
  wattroff(m_pWindow, COLOR_PAIR(1));

  wrefresh(m_pWindow);
}

void Defender2::DrawShip()
{
  Ship::GetPosition('A',3);
  mvprintw(m_Pos.x , m_Pos.y, "%c", 'A');
}
