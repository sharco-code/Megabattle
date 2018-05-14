#ifndef GAME_H
#define GAME_H

#include "includeui.h"

using namespace std;

class game {
public:
  void fungame1() {
    cout<<"funcion game 1"<<endl;
  }
private:
};

class creatures {
public:
  int attack(int victimlife) {
    victimlife = victimlife - damage;
    int pliferesult = victimlife;
    return pliferesult;
  }
  void inattack(int ellife) {
    life = ellife;
  }
  void spskill();
  int getlife() {
    return life;
  }
  int getdamage() {
    return damage;
  }
  int getspeed() {
    return speed;
  }
  string getname() {
    return name;
  }
protected:
  int life;
  int damage;
  int speed;
  string name;
};

class ninja : public creatures {
public:
  void stats(int li, int da, int sp, string na) {
    life = li;
    damage = da;
    speed = sp;
    name = na;
  }
};

class drake : public creatures {
public:
};

class player {
public:
  void stats(int li, int da, int sp, string na) {
    life = li;
    damage = da;
    speed = sp;
    name = na;
  }
   int attack(int enemylife) {
    enemylife = enemylife - damage;
    int eliferesult = enemylife;
    return eliferesult;
  }
  void inattack(int pllife) {
    life = pllife;
  }
  void skill();
  int getlife() {
    return life;
  }
  int getdamage() {
    return damage;
  }
  int getspeed() {
    return speed;
  }
  string getname() {
    return name;
  }
private:
  int life;
  int damage;
  int speed;
  string name;
};

#endif