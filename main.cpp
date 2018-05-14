#include "includeui.h"
#include "game.h"

using namespace std;

string player01 = "Jugador";
string enemy01 = "Dragon";
int boxxy = 16;

void game(), startmenu();

int main(int argc, char *argv[]) {
  game();
  return 0;
}

void startmenu() {
}

void game() {
  //objetos
  player player;
  player.stats(100, 10, 50, "Jose");
  ninja ninja01;
  ninja01.stats(130, 20, 40, "Ninja");
  // stats player
  int playerli = player.getlife();
  int playerda = player.getdamage();
  int playersp = player.getspeed();
  string playerna;
  //stats ninja
  int ninjali = ninja01.getlife();
  int ninjada = ninja01.getdamage();
  int ninjasp = ninja01.getspeed();
  string ninjana;
  //interfaz
  while (1 == 1) {
    system("cls");
    battletext(player.getname(), ninja01.getname());
    battlevisual(player.getname(), ninja01.getname(), player.getlife(), ninja01.getlife(), "=======", "=======");
    battlebox(boxxy);
    battleop(boxxy);
    //opciones
    string menuselect01;
    getline(cin, menuselect01);
    if (menuselect01 == "1") {
      ninja01.inattack(player.attack(ninja01.getlife()));
      playerattack(boxxy, player.getname(), player.getdamage());
      cin.ignore();
      sleep01(boxxy);
      battlevisual(player.getname(), ninja01.getname(), player.getlife(), ninja01.getlife(), "=======", "=======");
    }
    else if (menuselect01 == "2") {
    }
    else if (menuselect01 == "3") {
    }
    else if (menuselect01 == "4") {
      exit(0);
    }
    else {
      errormsg(boxxy);
    }
    enemyattack(boxxy, ninja01.getname(), ninja01.getdamage());
    player.inattack(ninja01.attack(player.getlife()));
    cin.ignore();
    sleep01(boxxy);
  }