#include "Storage.h"
#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<time.h>
#include<string>
#include<iomanip>
using namespace std;

unsigned long long int Storage::GetCurrentInfo()
{
  ifstream place;
  place.open("Database.txt");
  unsigned long long int buffer;
  if(place.is_open())
  {
  place>>buffer;
  place.close();
  }
  else
    buffer=0;
  return buffer;
}
Matrix PopMatrixFromFile(int)
{

}
void PushMatrixToFile(Matrix dummy)
{
    ofstream input;
    input.open("Clipboard.txt",ios::out);
    if(input.is_open())
        {
    int i,l;
    for(i=0;i<(dummy.Seerow());i++)
        {for(l=0;l<(dummy.Seecols());l++)
        {
            input<<dummy.elts[i][l]; input<<" ";}
        if(i+1<dummy.Seerow())
            input<<"# ";}
    input.close();
}
}
TimeStamp::TimeStamp()
{
    time_t raw=time(0);
    time(&raw);
    strcpy(Time,ctime(&raw));
}
char* TimeStamp::GetTime()
{
    return Time+4;
}
void Logger::Events(unsigned int a)
{
   const char *pj;
    switch(a)
    {
        case 1: pj="Application was launched";break;
        case 2: pj="Window was Maximized";break;
        case 3: pj="Default Color was Chosen";break;
        case 4: pj="About to Open Welcome Screen From Main";break;
        case 5: pj="Exiting the Application Successfully";break;
        case 6: pj="Screen Cleared for Welcome";break;
        case 7: pj="Welcome Screen Presented to User";break;
        case 8: pj="About to Draw Matrix Logo";break;
        case 9: pj="Matrix Logo Drawn";break;
        case 10: pj="Menu About to Present";break;
        case 11: pj="Main Menu Presented to User";break;
        case 12: pj="Requested to Make a Choice";break;
        case 13: pj="Wrong Choice in Main Menu Terminated the Application ";break;
        case 14: pj="Clearing the Screen for Agreement Menu";break;
        case 15: pj="About to Present the Agreement Menu";break;
        case 16: pj="Presented, Waiting for User Response";break;
        case 17: pj="Returning Back to Main Menu";break;
        case 18: pj="Clearing Screen for Quit Menu";break;
        case 19: pj="Quit Menu Presented";break;
        case 20: pj="Waiting for Response";break;
        case 21: pj="Exit Response, Exiting the Application ";break;
        case 22: pj="Non-Exit Response, Returning to Main Menu";break;
        case 23: pj="Invalid Response, Returning to Main Menu from Quit Menu";break;
        case 24: pj="Clearing screen for Customization Menu";break;
        case 25: pj="Customization Menu Presented to User";break;
        case 26: pj="Choice Bar Presented";break;
        case 27: pj="Customization of Color Failed";break;
        case 28: pj="Customization of Color Succeeded";break;
        case 29: pj="Reflecting Application in New Menu";break;
        case 30: pj="Clearing Screen to Launch the Operation Menu"; break;
        case 31: pj="Presented the Operation Menu, waiting for Response"; break;
        case 32: pj="Invalid Response"; break;
        case 33: pj="3 invalid Responses Resulting in Termination of Program"; break;
        case 34: pj="Response accepted"; break;
        case 35: pj="Clearing Screen to Present the Addition-Subtraction Menu ";break;
        case 36: pj="Invalid Order Terminating the Program";break;
        case 37: pj="Random Tips Presented";break;
        case 38: pj="Seeking the Operator";break;
        case 39: pj="Got the Operator";break;
        case 40: pj="Invalid Operator, Terminating the Program";break;
        case 41: pj="Consistent operator Provided";break;
        case 42: pj="Calculating the Result";break;
        case 43: pj="Flushed the Screen Buffer, to Present the Result";break;
        case 44: pj="Waiting for Response";break;
        case 45: pj="Copy Command Found for the Matrix";break;
        case 46: pj="Generating Tips";break;
        case 47: pj="Identity Matrix Presenting";break;
        case 48: pj="Setting Matrix, Row and Column";break;
        case 49: pj="Matrix Swapping...";break;
        case 50: pj="Multiplying Matrix...";break;
        case 51: pj="Comparing Matrices... ";break;
        case 52: pj="Copying Matrix...";break;
        case 53: pj="Flushing Screen...";break;
        case 54: pj="Subtracting Matrices...";break;
        case 55: pj="Adding Matrices...";break;
        case 56: pj="Poped Matrix on Screen";break;
        case 57: pj="Seeking Matrix Values";break;
        case 58: pj="Matrix Values Set";break;
        case 59: pj="Waiting for Matrix Order Matrix Order";break;
        case 60: pj="Order Accepted, Generating a Matrix..";break;
        case 61: pj="Invalid Order,Matrix Overflow... Limit Exceeded, Terminating Application";break;
        case 62: pj="Non Compatible Matrix for Multiplication, Critical Error... Terminating Application";break;
        case 63: pj="Returning Back to Operation Menu..";break;
        case 64: pj="Exponential limit Exceeded, Terminating Program..";break;
        case 65: pj="Generating Determinant Environment... ";break;
        case 66: pj="Background Input of a Value by the Program..";break;
        case 67: pj="Making a Null Matrix.."; break;
        case 68: pj="Opening the Additional Settings..."; break;
        case 69: pj="Terminated because Incorrect Value Entered"; break;
        case 70: pj="Valid Value for Choice about to Open Respective Settings"; break;
        case 71: pj="Presenting the log to User"; break;
        case 72: pj="Deletion Command for Master Log, opted..";break;
        case 73: pj="Failure in Deleting Master Log, Invalid Response"; break;
        case 74: pj="Opted not to Delete the Logs, Returning back";break;
        case 75: pj="Reset Value for Matrix Count Requested"; break;
        case 76: pj="Values Restoration Failed, Invalid Response";break;
        case 77: pj="Matrix Count Value Restored Successfully.."; break;
        case 78: pj="Default Color Choosing Menu Presented"; break;
        case 79: pj="Successful in Setting Default Color";break;
        case 80: pj="Developer Information Presented to the Client";
        case 81: pj="Returning back to the Settings from Developer Info";
        case 82: pj="Presenting Help Page..";
        case 83: pj="Returning back to Settings from Help..";



    }
    NoteUp(pj);
}
void Logger::NoteUp(const char *pj)
{

    TimeStamp GiveTime;
    char Insight[22]={"["};
    ofstream logs, CLog;
    logs.open("logs.txt",ios::app);
    CLog.open("Current_Log.txt",ios::app);
    strcat(Insight,GiveTime.GetTime());
    Insight[21]=']';
    logs<<Insight<<": "<<pj<<"\n";
    CLog<<"\t\t\t\t\t   "<<Insight<<": "<<pj<<"\n";
    logs.close();
    CLog.close();
    delete pj;
}
void Logger::Loginfo()
{
    TimeStamp ap;
    ofstream logintro;
    logintro.open("logs.txt",ios::app);
    logintro<<"\n\nStarted the Logs at "<<ap.GetTime()<<"\n";
    logintro.close();
    ofstream This;
    This.open("Current_Log.txt",ios::app);
    This<<"\n\n\n\t\t\t\t\t\t\t\tStarted the Logs at "<<ap.GetTime()<<"\n\n";
    This.close();
}
