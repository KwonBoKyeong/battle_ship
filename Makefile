CC = g++
TARGET = battleShip

SOURCES = main.cpp\
					BattleShipApp.cpp\
					Defender.cpp\
					Pane.cpp\
					StatPane.cpp\
					InputPane.cpp\
					Attacker.cpp\
					Ship.cpp\


LDFLAGS = -lncurses
all:
	$(CC) -o $(TARGET) $(SOURCES) $(LDFLAGS)
clean:
	rm -rf *.o $(TARGET)
