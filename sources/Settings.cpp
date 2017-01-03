#include "Settings.h"
#include<iostream>
#include "Equipments.h"
#include "bada.h"
#include "Color.h"
#include<conio.h>
#include<iomanip>
#include "Storage.h"
#include"Starter.h"
#include<windows.h>
#include<string.h>
#include<fstream>
#include<process.h>
#define BORDER Switch.box(41,160,4,0)
#define INBOX Switch.box(3,95,33,37)
Logger Note;
Storage Load;
bada Format;
Color changeit;
Equipments Switch;
char Hexa_Value[9];
Navigate Redirect;

void Settings::Show_Current_Log()
{
    Note.Events(71);
    system("cls");
    Switch.box(3,50,58,1,true);
    Format.gotoxy(0,0);
    system("type Current_Log.txt");
    std::cout<<"\n\n\n"<<std::setw(100)<<"PRESS ANY KEY TO GET BACK TO PREVIOUS MENU";
    getch();
    Redirect.options();
}
Settings::Settings()
{
    char Hexa_Color_Value[9];
    std::ifstream File;
    File.open("Database.txt");
    if(File.is_open())
    {
        char buffer[10];
        File.seekg(std::ios::beg);
        File.getline(buffer,10);
        File.getline(buffer,10);
        strcpy(Hexa_Color_Value,buffer);
    }
    File.close();
    strcpy(Hexa_Value,Hexa_Color_Value);
}
void Settings::Delete_Log()
{
    Note.Events(72);
    system("cls");
    BORDER;
    Switch.box(5,150,6,4);
    Format.gotoxy(62,7);
    std::cout<<"ARE YOU SURE YOU WANT TO DELETE LOGS..(Y/N), ";
    char choice;
    Format.gotoxy(80,12);
    std::cin>>choice;
    switch(choice)
    {
        case 'y' :  {
                    system("cls");
                    BORDER;
                    system("del logs.txt");
                    Switch.box(3,90,39,12);
                    Format.gotoxy(40,14);
                    std::cout<<"MASTER LOG DELETED SUCCESSFULLY, APPLICATION NEEDS TO BE RESTARTED PRESS ANY KEY TO EXIT";
                    SetCurrentInfo(Matrix::total);
                        system("del Current_Log.txt");
                        getch();
                        exit(0);
                        }break; //Successful Exit through Quit Menu
        case 'Y' :  {
                    system("cls");
                    BORDER;
                    system("del logs.txt");
                    Switch.box(3,90,39,12);
                    Format.gotoxy(40,14);
                    std::cout<<"MASTER LOG DELETED SUCCESSFULLY, APPLICATION NEEDS TO BE RESTARTED PRESS ANY KEY TO EXIT";
                    SetCurrentInfo(Matrix::total);
                        system("del Current_Log.txt");
                        getch();
                        exit(0);
                        }break; //Successful Exit through Quit Menu
        case 'n' : Redirect.options(); Note.Events(74); break; //exit failure returning to main screen
        case 'N' : Redirect.options(); Note.Events(74); break;
        default  :{ Switch.box(3,60,55,12);
                    Format.gotoxy(60,14);
                    std::cout<<"INCORRECT CHOICE...!!! REDIRECTING TO PREVIOUS MENU";
                    Note.Events(73); //Error choice, redirected to main screen from quit screen
                   Format.delay(9999999);
                   Redirect.options(); }
    }

}
void Settings::Reset_Value()
{
    Note.Events(75);
    system("cls");
    BORDER;
    Switch.box(5,150,6,4);
    Format.gotoxy(57,7);
    std::cout<<"ARE YOU SURE YOU WANT TO RESTORE THE COUNT VALUES..(Y/N), ";
    char choice;
    Format.gotoxy(80,12);
    std::cin>>choice;
    switch(choice)
    {
        case 'y' :  {
                    Matrix::total=0;
                    system("cls");
                    BORDER;
                    Switch.box(3,90,39,12);
                    Format.gotoxy(45,14);
                    std::cout<<"RESTORATION SUCCESSFULLY, PRESS ANY KEY TO GET BACK TO PREVIOUS MENU";
                        getch();
                        Redirect.options();
                        Note.Events(77);
                        }break; //Successful Exit through Quit Menu
        case 'Y' :  {
                    Matrix::total=0;
                    system("cls");
                    BORDER;
                    Switch.box(3,90,39,12);
                    Format.gotoxy(45,14);
                    std::cout<<"RESTORATION SUCCESSFULLY, PRESS ANY KEY TO GET BACK TO PREVIOUS MENU";
                        getch();
                        Redirect.options();
                        Note.Events(77);
                        }break; //Successful Exit through Quit Menu
        case 'n' : Redirect.options(); Note.Events(76); break; //exit failure returning to main screen
        case 'N' : Redirect.options(); Note.Events(76); break;
        default  :{ Switch.box(3,60,55,12);
                    Format.gotoxy(60,14);
                    std::cout<<"INCORRECT CHOICE...!!! REDIRECTING TO PREVIOUS MENU";
                    Note.Events(73); //Error choice, redirected to main screen from quit screen
                   Format.delay(9999999);
                   Redirect.options(); }
    }
}
void Settings::Default_Color()
{
    Note.Events(78);
    system("cls");
    BORDER;
     Switch.box(3,15,75,2);
     Format.gotoxy(78,4);
     std::cout<<"DEFAULT";
      Switch.box(30,95,35,6);
      Format.gotoxy(65,8);
     std:: cout<<"CASE SENSITIVE";
      Format.gotoxy(37,10);
      std::cout<<"Below is the List of Hexadecimal digits, which Corresponds to Respective Colors.";
      Format.Table(16,36,42,12,2,8);
      Format.Table(16,36,87,12,2,8);
      int flag(0);
      for(int k(0);k<16;k+=2)
      {Format.gotoxy(51,13+k);
      std::cout<<flag; flag++;}
      flag=0;
      for(int k(0);k<4;k+=2)
      {Format.gotoxy(96,13+k);
      std::cout<<flag+8; flag++;}
      Format.gotoxy(96,17);std::cout<<"A";
      Format.gotoxy(96,19);std::cout<<"B";
      Format.gotoxy(96,21);std::cout<<"C";
      Format.gotoxy(96,23);std::cout<<"D";
      Format.gotoxy(96,25);std::cout<<"E";
      Format.gotoxy(96,27);std::cout<<"F";
      Format.gotoxy(109,17);std::cout<<"LIGHT GREEN";
      Format.gotoxy(109,19);std::cout<<"LIGHT AQUA";
      Format.gotoxy(109,21);std::cout<<"LIGHT RED";
      Format.gotoxy(109,23);std::cout<<"LIGHT PURPLE";
      Format.gotoxy(109,25);std::cout<<"LIGHT YELLOW";
      Format.gotoxy(109,27);std::cout<<"BRIGHT WHITE";
      Format.gotoxy(109,15);std::cout<<"LIGHT BLUE";
      Format.gotoxy(112,13);std::cout<<"GREY";
      Format.gotoxy(67,17);std::cout<<"GREEN";
      Format.gotoxy(67,19);std::cout<<"AQUA";
      Format.gotoxy(67,21);std::cout<<"RED";
      Format.gotoxy(67,23);std::cout<<"PURPLE";
      Format.gotoxy(67,25);std::cout<<"YELLOW";
      Format.gotoxy(67,27);std::cout<<"WHITE";
      Format.gotoxy(67,15);std::cout<<"BLUE";
      Format.gotoxy(67,13);std::cout<<"BLACK";
      Format.gotoxy(37,34);
      std::cout<<"WRITE THE TWO COMBINATIONS WITHOUT ANY GAP IN BETWEEN, FIRST INDEX WILL CHANGE BACKGROUND";
      Switch.box(3,95,35,37);
      Chooser Choice;
      Choice.call(38,39);
      char Hexcode[3];
      std::cin>>Hexcode;
      if(Hexcode[0]==Hexcode[1])
        {Redirect.options();
        Note.Events(27); //failed to customize
        }
        strcpy(Hexa_Value,"COLOR ");
        strcat(Hexa_Value,Hexcode);
        changeit.changer(Hexcode);
        SetCurrentInfo(Matrix::total);
        Redirect.welcome();

}

void Settings::Help()
{
    Note.Events(82); // dev info
    system("cls");
    BORDER;
    Switch.box(3,15,75,2);
     Format.gotoxy(78,3);
     std::cout<<"HELP AND SUPPORT";
     std::cout<<"The Sources where you can find the help regarding the application are listed below : ";
     std::cout<<"https://github.com/coder3101/Matrix_Calculator";

    INBOX;
        Format.gotoxy(35,39);
        Note.Events(16); //Logs Presented, seeking any key to terminate
       std:: cout<<"\t   \tPRESS ANY KEY TO RETURN TO PREVIOUS MENU";
     getch();
     Note.Events(83);
     Redirect.options();




}
void Settings::About_Me()
{

}
void Settings::SetCurrentInfo(unsigned long long int buffer)
{
    bool Exit_Status;
    if(Load.GetCurrentInfo()==Matrix::total)
        Exit_Status=true;
    else
        Exit_Status=false;
    std::ofstream setter;
    setter.open("Database.txt");
    if(setter.is_open())
    {
        setter.seekp(0);
        setter<<buffer<<"\n"<<Hexa_Value<<"\n"<<Exit_Status;
        setter.close();
    }
}
