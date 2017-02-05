#include <iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include "Storage.h"
#include "Equipments.h" // includes matrix writer, random, terminator and  box  with navigator also
using namespace std;
int main()
{
    Logger Log;
    std::ifstream File;
    char Hexa_Color_Value[9];
    system("del Current_Log.txt");
    Log.Loginfo();
    Navigate Navigator;// user defined data type for navigation across the program
    Log.Events(1); //Launch Event
    cout<<"Please Do not Delete the \"Database.txt\" file, as it Contains Your Settings.\n\n Maximize this Window Please, then press any character.\n\n ";
    Log.Events(2); //Window maximized
    getch();
    File.open("Database.txt");
    if(File.is_open())
    {
        char buffer[10];
        File.seekg(std::ios::beg);
        File.getline(buffer,10);
        File.getline(buffer,10);
        strcpy(Hexa_Color_Value,buffer);
        File.close();
    }
    system(Hexa_Color_Value);
    Log.Events(3); //Default color Set
    Log.Events(4); // staring Welcome screen
    Navigator.welcome();
    getch();
    Log.Events(5);//Exiting from main success
    system("del Current_Log.txt");
    return EXIT_SUCCESS;
}
