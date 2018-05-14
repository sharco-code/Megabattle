#ifndef INCLUDEUI_H
#define INCLUDEUI_H

#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

void gotoxy(int x,int y){
     HANDLE hcon;
     hcon = GetStdHandle(STD_OUTPUT_HANDLE);
     COORD dwPos;
     dwPos.X = x;
     dwPos.Y= y;
     SetConsoleCursorPosition(hcon,dwPos);
}

void title() {
  system("cls");
  cout<<endl;
  cout<<"     "<<"(b--=--=- - -==XXX==- - -=--=--d)"<<endl;
  cout<<"     "<<"|                               |"<<endl;
  cout<<"     "<<"|         = megaBATTLE =        |"<<endl;
  cout<<"     "<<"|                               |"<<endl;
  cout<<"     "<<"(b--=--=- - -==xxx==- - -=--=--d)"<<endl;
  cout<<endl;
}

void battletext(string plna01, string enna01) {
  cout<<"    ___________________________________________________"<<endl;
  cout<<"   |                                                   |"<<endl;
  gotoxy(3, 2);
  cout<<"|";
  gotoxy(14, 2);
  cout<<plna01;
  gotoxy(27, 2);
  cout<<"-|VS|-";
  gotoxy(28, 4);
  cout<<"\\--/";
  gotoxy(39, 2);
  cout<<enna01;
  gotoxy(55, 2);
  cout<<"|";
  cout<<"\n   |___________________________________________________|"<<endl;
}

void battlevisual(string plna01, string enna01, int pli, int eli, string pbar, string ebar) {
  gotoxy(3, 4);
  cout<<">"<<pli<<" HP";
  gotoxy(14, 4);
  cout<<pbar;
  gotoxy(49, 4);
  cout<<eli;
  gotoxy(52, 4);
  cout<<" HP"<<"<";
  gotoxy(38, 4);
  cout<<ebar;
  gotoxy(12, 6);
  cout<<plna01;
  gotoxy(12, 7);
  cout<<pli<<" HP";
  gotoxy(41, 6);
  cout<<enna01;
  gotoxy(41, 7);
  cout<<eli<<" HP";
}

void battlebox(int boxxy) {
  gotoxy(0, boxxy);
  cout<<"    ___________________________________________________"<<endl;
  cout<<"   |                            |                      |"<<endl;
  gotoxy(3, boxxy+2);  //2 linea
  cout<<"|";
  gotoxy(55, boxxy+2);
  cout<<"|";
  gotoxy(32, boxxy+2);
  cout<<"|";
  gotoxy(3, boxxy+3);  //3 linea
  cout<<"|";
  gotoxy(55, boxxy+3);
  cout<<"|";
  gotoxy(32, boxxy+3);
  cout<<"|";
  gotoxy(3, boxxy+4);   //4 linea
  cout<<"|";
  gotoxy(55, boxxy+4);
  cout<<"|";
  gotoxy(32, boxxy+4);
  cout<<"|";
  gotoxy(0, boxxy+5);
  cout<<"   |____________________________|______________________|"<<endl;
}

void battleop(int boxxy) {
  gotoxy(5, boxxy+2);
  cout<<"1) Atacar     3) Defender";
  gotoxy(5, boxxy+3);
  cout<<"2) Habilidad  4) Salir";
  gotoxy(5, boxxy+4);
  cout<<"Opcion:";
}

void sleep01(int basdf) {
  gotoxy(12, basdf+4);
  Sleep(300);
  cout<<".";
  Sleep(300);
  cout<<".";
  Sleep(300);
  cout<<".";
}

void playerattack(int fgjd, string nnnax,int podmg) {
  gotoxy(34, fgjd+2);
  cout<<nnnax<<" inflinje "<<podmg;
}

void enemyattack(int fgjdx, string nnnaxx,int podmgx) {
  gotoxy(34, fgjdx+2);
  cout<<nnnaxx<<" inflinje "<<podmgx;
}

void errormsg(int kkka) {
  gotoxy(34, kkka+2);
  cout<<"opcion incorrecta";
}
#endif