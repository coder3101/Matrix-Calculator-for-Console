#include "Equipments.h"
#include "bada.h"
#include "Color.h"
#include "Starter.h"
#include "Settings.h"
#include "Storage.h"
#include<time.h>
#include<conio.h>
#define BORDER box(41,160,4,0)
#define INBOX box(3,95,33,37)
#include<stdlib.h>
#include<iostream>
using namespace std;
bada ob; Color changeme; Starter Begin; Storage Instances; Logger Log; Settings Modifier;
void Equipments::MatrixWriter()
{
    ob.m(45); ob.delay(999999);
	ob.a(66); ob.delay(999999);
	ob.t(75); ob.delay(999999);
	ob.r(90); ob.delay(999999);
	ob.i(103);ob. delay(999999);
	ob.x(114);ob. delay(999999);
	ob.c(22); ob.delay(999999);
	ob.a(38,2);ob. delay(999999);
	ob.l(49);  ob. delay(999999);
	ob.c(60);    ob.delay(999999);
	ob.u(70);   ob.delay(999999);
	ob.l(82);    ob.delay(999999);
	ob.a(99,2);  ob.delay(999999);
	ob.t(108,2); ob.delay(999999);
	ob.o(123);   ob.delay(999999);
	ob.r(134,2); ob.delay(999999);
}
int Equipments:: random(int t)
{
    srand(time(0));
    return (rand()%t);
}
void Equipments::terminator(int x)
{
    {   system("cls");
    BORDER;
     box(5,150,6,16);
    ob.gotoxy(66,19);
    std::cout<<"PROGRAM IS TERMINATING BECAUSE OF ERROR ";std::cout<<x;
    ob.delay(9999999);
    system("del Current_Log.txt");

    Modifier.SetCurrentInfo(Matrix::total);
    exit(0);
    }

}
void Equipments:: box(int l,int b,int cdx,int cdy,bool ph)
{
    for(int k(0);k<l;k++)
    {
       ob.gotoxy(cdx,cdy+k);
       cout<<"|";
      ob. gotoxy(cdx+b,cdy+k);
       cout<<"|";

    }
    for(int bv(0);bv<=b;bv++)
    {
       ob. gotoxy(cdx+bv,cdy);
      cout<<"_";
      ob. gotoxy(cdx+bv,cdy+l);
      cout<<"_";
    }
    ob.gotoxy(cdx,cdy+l);
      cout<<"|";
      ob. gotoxy(cdx+b,cdy+l);
       cout<<"|";
    if(!ph)
        ob.gotoxy(145,40);
    else
        ob.gotoxy(145,2);
    cout<<"Matrix Count : "<<Matrix::total;
}
void Navigate::agreement()
{
    Log.Events(14); // Clearing for log screen
       system("cls");
       BORDER;
        ob.gotoxy(10,8);
        box(3,15,75,0);
        ob.gotoxy(79,2);
        Log.Events(15); //about to present Agreement
         cout<<"LICENSE";
         box(28,147,10,4);
         ob.gotoxy(52,6);
        cout<<"Copyright (c) 2015-2016 Ashar Khan. ALL Rights Reserved.\n";
        ob.gotoxy(13,8);
        cout<<"Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:";
        ob.gotoxy(13,10);
        cout<<"1. Redistribution of source code must retain the above copyright notice, this list of conditions and the following disclaimer.";
        ob.gotoxy(13,12);cout<<"2. Redistribution in binary form must retain the above copyright notice, this list of conditions and the following disclaimer. In the";
        ob.gotoxy(13,13);cout<<"documentation and/or other materials provided with the distribution.";
         box(3,25,71,15);
         ob.gotoxy(75,17);
         cout<<"END-USER AGREEEMENT";
         ob.gotoxy(13,20);
         cout<<"THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER/ CONTRIBUTORS \"AS IS\" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING BUT NOT LIMITED";
         ob.gotoxy(13,22); cout<<"TO, THE IMPLIED WARRANTIES OF MECHANTABLITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER";
         ob.gotoxy(13,24); cout<<"OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT";
         ob.gotoxy(13,26); cout<<"LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)";
         ob.gotoxy(13,28); cout<<"HOWEVER CAUSED AND ON ANY THEORY OF LIABLITY, WHETHER IN CONTRACT, STRICT LIABLITY OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)";
         ob.gotoxy(13,30); cout<<"ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISES OF THE POSSIBLITY OF SUCH DAMAGE.";
        INBOX;
        ob.gotoxy(35,39);
        Log.Events(16); //Logs Presented, seeking any key to terminate
        cout<<"\t   \tPRESS ANY KEY TO RETURN TO PREVIOUS MENU";
        getch();
        Log.Events(17); //Returned to main screen from agreement;
        options();

}
void Navigate::quit()
{
    Log.Events(18); //clearing for Quit Screen
    system("cls");
    BORDER;
    box(5,150,6,4);
    ob.gotoxy(66,7);
    Log.Events(19); //Quit Screen Presented
    cout<<"ARE YOU SURE YOU WANT TO EXIT..(Y/N) ";
    char choice;
    ob.gotoxy(80,12);
    Log.Events(20); //Waiting for Quit action
    cin>>choice;
    switch(choice)
    {
        case 'y' :  {
                        Modifier.SetCurrentInfo(Matrix::total);
                        Log.Events(21);
                        system("del Current_Log.txt");
                        exit(0);
                        }
                         break;
                          //Successful Exit through Quit Menu
        case 'Y' :  {
                        Modifier.SetCurrentInfo(Matrix::total);
                        Log.Events(21);
                        system("del Current_Log.txt");
                        exit(0);
        }
                        break;
        case 'n' : welcome(); Log.Events(22); break; //exit failure returning to main screen
        case 'N' : welcome();Log.Events(22); break;
        default  :{ box(3,60,55,12);
                    ob.gotoxy(60,14);
                    cout<<"INCORRECT CHOICE...!!! REDIRECTING TO MAIN MENU";
                    Log.Events(23); //Error choice, redirected to main screen from quit screen
                   ob.delay(9999999);
                   welcome(); }
    }

}
void Navigate::options()
{
    Log.Events(68); // Additional Settings Opening
    system("cls");
    box(3,30,68,1);
	BORDER;
	ob.gotoxy(71,3);
	cout<<"        SETTINGS ";
	ob.Table(21,80,42,8,2,7);
    int index=1;
    for(int k(0); k<21;k+=3)
    {
    ob.gotoxy(63,10+k);
    cout<<index;
    index++;
    }
    ob.gotoxy(92,10); cout<<"VIEW CURRENT SESSION LOGS";
    ob.gotoxy(90,13); cout<<"* DELETE ALL LOG DATA";
    ob.gotoxy(92,16); cout<<"RESET MATRIX COUNT VALUE";
    ob.gotoxy(92,19); cout<<"CHANGE DEFAULT COLOR";
    ob.gotoxy(92,22); cout<<"END-USER AGREEMENT";
    ob.gotoxy(92,25); cout<<"HELP";
    ob.gotoxy(92,28); cout<<"ABOUT DEVELOPER";
	INBOX;
	ob.gotoxy(73,35);
    cout<<"PRESS 0 TO GO BACK";
    ob.gotoxy(60,32);
    cout<<"* APPLICATION NEEDS TO RESTART TO APPLY CHANGES ";
	Chooser choice1;
    choice1.call(35,39);
    Log.Events(12); //About to make choice
    unsigned int choice;
    try
    {
    cin>>choice;
    if(choice>7)
    throw 501;
    }
    catch(int)
    {
        Log.Events(69); // Incorrect Value
        terminator(501); //
        }
Log.Events(70); //Success
switch(choice)
        {
            Log.Events(34);
        case 1: Modifier.Show_Current_Log(); break;
        case 2: Modifier.Delete_Log(); break;
        case 3: Modifier.Reset_Value(); break;
        case 4: Modifier.Default_Color(); break;
        case 5: agreement(); break;
        case 6: Modifier.Help(); break;
        case 7: Modifier.About_Me(); break;
        case 0: welcome();
        }

}
void Navigate:: welcome()
{
    Log.Events(6); // Welcome screen appeared
    system("cls");
	BORDER;
	Log.Events(7); // Border drawn
	Log.Events(8); //Matrix Logo about to write
	MatrixWriter();
	Log.Events(9); //Matrix logo written
    box(3,65,48,29);
    box(3,95,33,17);
    box(3,65,48,21);
    box(3,65,48,25);
    box(3,65,48,33);
    ob.gotoxy(80,19);
    Log.Events(10); // Menu about to present
    cout<<"MENU";
    ob.gotoxy(77,23);
    cout<<"1. START";
    ob.gotoxy(73,27);
    cout<<"2. CUSTOMIZE LOOKS";
    ob.gotoxy(78,35);
    cout<<"4. QUIT";
    ob.gotoxy(76,31);
    cout<<"3. SETTINGS ";
    Log.Events(11); //Menu presented
    INBOX;
    Chooser choice1;
    choice1.call(35,39);
    Log.Events(12); //About to make choice
    int choice;
    cin>>choice;
     if(choice==1||choice==2||choice==3||choice==4)

    {
        switch(choice) {
                        case 1 : Begin.start(); break;
                        case 3 : options(); break;
                        case 4 : quit(); break;
                        case 2 : customize();
                        }
    }
    else
        Log.Events(13); //error choice resulted forcefully termination from main menu
        terminator(201);
}
void Chooser:: call(int x, int y)
{
    Log.Events(26); //choice Presented
        int ui(random(4));
          ob.gotoxy(x,y);
          switch(ui){
                    case 0 : cout<<"ENTER YOUR CHOICE : "; break;
                    case 1 : cout<<"WILL YOU MAKE A CHOICE : "; break;
                    case 2 : cout<<"MAKE YOUR CHOICE : "; break;
                    case 3 : cout<<"WHAT'S YOUR CHOICE : "; break;
                    case 4 : cout<<"YOUR CHOICE PLEASE : ";}


}
void Navigate::customize()
{
    Log.Events(24); //clearing for Customize Screen
    system("cls");
    BORDER;
     box(3,15,75,2);
     ob.gotoxy(81,4);
     Log.Events(25); //Customization Menu Presented
     cout<<"NOTE";
      box(30,95,35,6);
      ob.gotoxy(37,7);
      cout<<"Here You Can Change the Foreground and Background color of the Console, Follow the Below";
      ob.gotoxy(37,8);
      cout<<"Instructions CAREFULLY in order to Change Your Console Color. CASE SENSITIVE";
      ob.gotoxy(37,10);
      cout<<"Below is the List of Hexadecimal digits, which Corresponds to Respective Colors.";
      ob.Table(16,36,42,12,2,8);
      ob.Table(16,36,87,12,2,8);
      int flag(0);
      for(int k(0);k<16;k+=2)
      {ob.gotoxy(51,13+k);
      cout<<flag; flag++;}
      flag=0;
      for(int k(0);k<4;k+=2)
      {ob.gotoxy(96,13+k);
      cout<<flag+8; flag++;}
      ob.gotoxy(96,17);cout<<"A";
      ob.gotoxy(96,19);cout<<"B";
      ob.gotoxy(96,21);cout<<"C";
      ob.gotoxy(96,23);cout<<"D";
      ob.gotoxy(96,25);cout<<"E";
      ob.gotoxy(96,27);cout<<"F";
      ob.gotoxy(109,17);cout<<"LIGHT GREEN";
      ob.gotoxy(109,19);cout<<"LIGHT AQUA";
      ob.gotoxy(109,21);cout<<"LIGHT RED";
      ob.gotoxy(109,23);cout<<"LIGHT PURPLE";
      ob.gotoxy(109,25);cout<<"LIGHT YELLOW";
      ob.gotoxy(109,27);cout<<"BRIGHT WHITE";
      ob.gotoxy(109,15);cout<<"LIGHT BLUE";
      ob.gotoxy(112,13);cout<<"GREY";
      ob.gotoxy(67,17);cout<<"GREEN";
      ob.gotoxy(67,19);cout<<"AQUA";
      ob.gotoxy(67,21);cout<<"RED";
      ob.gotoxy(67,23);cout<<"PURPLE";
      ob.gotoxy(67,25);cout<<"YELLOW";
      ob.gotoxy(67,27);cout<<"WHITE";
      ob.gotoxy(67,15);cout<<"BLUE";
      ob.gotoxy(67,13);cout<<"BLACK";
      ob.gotoxy(37,30);
      cout<<"WRITE THE TWO COMBINATIONS WITHOUT ANY GAP IN BETWEEN, FIRST INDEX WILL CHANGE BACKGROUND";
      ob.gotoxy(37,32); cout<<"COLOR AND SECOND WILL CHANGE TEXT COLOR, LIKE IF YOU WANT BLUE TEXT OVER RED SCREEN";
      ob.gotoxy(37,34); cout<<"THEN ENTER \"41\" (without quotes). SAME VALUES FOR FIRST & SECOND INDEX WILL NOT DO ANY CHANGE";
      box(3,95,35,37);
      Chooser Choice;
      Choice.call(38,39);
      char Hexcode[3];
      cin>>Hexcode;
      if(Hexcode[0]==Hexcode[1])
        {welcome();
        Log.Events(27); //failed to customize
        }
      changeme.changer(Hexcode);
      Log.Events(28); //Customized color
      Log.Events(29); //Reflecting it in new Menu
        welcome();

}
