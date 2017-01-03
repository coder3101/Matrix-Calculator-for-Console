#include "bada.h"
#include<windows.h>
#include<iostream>
using namespace std;
typedef long long int lamba;
COORD coord={0,0};
void bada:: gotoxy(int x, int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void bada:: delay(int j)
{
 for(lamba i(0);i<(j*100);i++);
    }
void bada::m(int x)
	{
	    gotoxy(x,2);
	    for(int i(0); i<=14 ; i++)
        {  if(i==0||i==3||i==14||i==11)
            {  if(i==0||i==14)
                 {
                  for(int k(0); k<6; k++)
                    {gotoxy(x+i-1,2+k); cout<<"|";}
                    }
                    else
                    {
                         for(int k(1); k<6; k++)
                   {gotoxy(x+i-1,2+k); cout<<"|";}
                    }

            }
            else
            { int flag1(0);
                for(int o(3); o<10; o++)
                {
                    if(o<6)
                    {
                        gotoxy(x+o,flag1+3);
                        cout<<"\\";
                        flag1++;
                    }
                     if(o>6)
                    {
                        gotoxy(x+o,flag1+2);
                        cout<<"/";
                        flag1--;
                    }
                }
            }
             gotoxy(x,1);cout<<"____";
             gotoxy(x+4,2); cout<<"\\";
             gotoxy(x+8,2); cout<<"/";
             gotoxy(x+5,3); cout<<"\\";
             gotoxy(x+7,3); cout<<"/";
             gotoxy(x,7); cout<<"__";
             gotoxy(x+6,5);cout<<"_";
             gotoxy(x+6,3); cout<<"_";
             gotoxy(x+9,1); cout<<"____";
             gotoxy(x+11,7); cout<<"__";

            }
	}
void bada::a(int x)
	{
	    gotoxy(x,2); int flag(x);
	    for(int k(0);k<6;k++)
        {
            gotoxy(--x,2+k);
            cout<<"/  /";
            gotoxy(++flag,2+k);
            cout<<"\\  \\";
        }
        gotoxy(x+6,1);cout<<"____";
        gotoxy(x+1,7); cout<<"__";
        gotoxy(x+13,7); cout<<"__";
        gotoxy(x+6,5); cout<<"____";
        gotoxy(x+7,4); cout<<"__";


	}
void bada::t(int x)
{
    for(int g(0);g<12;g++)
            {
               gotoxy(x+g,2); cout<<"_"; gotoxy(x+g,1);   cout<<"_";
            }
      for(int m(0); m<5;m++)
      {gotoxy(x+4,3+m);
      cout<<"|  |";}
      gotoxy(x+5,7);
      cout<<"__";
     gotoxy(x-1,2); cout<<"|";
      gotoxy(x+12,2);cout<<"|";



}
void bada::r(int x)
{
    gotoxy(x,2);
    for(int p(0) ; p<6;p++)
    { if(!p)
        {cout<<"|";}
      else
        { gotoxy(x,p+2);cout<<"|  |";}
    }
    gotoxy(x+1,1);cout<<"________";
    gotoxy(x+3,2); cout<<"_____";
    gotoxy(x+7,3); cout<<"/ /";
    gotoxy(x+6,4); cout<<"/ /";
    gotoxy(x+4,4); cout<<"____";
    gotoxy(x+9,2); cout<<"\\";
    gotoxy(x+4,3); cout<<"___";
    gotoxy(x+1,7); cout<<"__";
    for(int p(0); p<3;p++)
    {
        gotoxy(x+5+p,5+p);
        cout<<"\\  \\";
    }
    gotoxy(x+8,7); cout<<"__";


}
void bada::i(int x)
{
    gotoxy(x,2);
   for(int g(0);g<8;g++)
            {
               gotoxy(x+g,2); cout<<"_"; gotoxy(x+g,1);   cout<<"_";
            }
    for(int g(0);g<8;g++)
            {
               gotoxy(x+g,6); cout<<"_"; gotoxy(x+g,7);   cout<<"_";
            }
            gotoxy(x-1,2); cout<<"|";
            gotoxy(x-1,7); cout<<"|";
            gotoxy(x+8,2); cout<<"|";
            gotoxy(x+8,7); cout<<"|";
            for(int m(0); m<4;m++)
      {gotoxy(x+2,3+m);
      cout<<"|  |";}


}
void bada::x(int x)
{
    gotoxy(x,2);
    for(int p(0); p<6;p++)
    {
        gotoxy(x+p,2+p);
        cout<<"\\  \\";
    } int flag;
     for(int p(6); p>0;p--)
    {   flag=6-p;
        gotoxy(x+p-1,2+flag);
        cout<<"/  /";
    }
   gotoxy(x+6,7); cout<<"__";
   gotoxy(x+1,7); cout<<"__";
   gotoxy(x+1,1); cout<<"__";
   gotoxy(x+6,1); cout<<"__";

}
void bada::c(int x)
{
    gotoxy(x,10);
    for(int g(0);g<8;g++)
            {
               gotoxy(x+g,10); cout<<"_"; gotoxy(x+g,9);   cout<<"_";
            }
    for(int g(0);g<8;g++)
            {
               gotoxy(x+g,14); cout<<"_"; gotoxy(x+g,15);   cout<<"_";
            }
    for(int m(0); m<5;m++)
      {gotoxy(x,10+m);
      if(!m)
        cout<<"    ";
      else
        cout<<"|  |";}
       gotoxy(x+8,10);cout<<"|";
      gotoxy(x+8,15); cout<<"|";
       gotoxy(x+1,10);cout<<"/";
        gotoxy(x,9); cout<<"  ";
        gotoxy(x,15); cout<<"  ";
       gotoxy(x+1,15); cout<<"\\";

}
void bada::a(int x,int y) // fun. overloading
	{
	    gotoxy(x,10); int flag(x);
	    for(int k(0);k<6;k++)
        {
            gotoxy(--x,10+k);
            cout<<"/  /";
            gotoxy(++flag,10+k);
            cout<<"\\  \\";
        }
        gotoxy(x+6,9);cout<<"____";
        gotoxy(x+1,15); cout<<"__";
        gotoxy(x+13,15); cout<<"__";
        gotoxy(x+6,13); cout<<"____";
        gotoxy(x+7,12); cout<<"__";


	}
void bada::r(int x,int y) // overloading of functions
{
    gotoxy(x,10);
    for(int p(0) ; p<6;p++)
    { if(!p)
        {cout<<"|";}
      else
        { gotoxy(x,p+10);cout<<"|  |";}
    }
    gotoxy(x+1,9);cout<<"________";
    gotoxy(x+3,10); cout<<"_____";
    gotoxy(x+7,11); cout<<"/ /";
    gotoxy(x+6,12); cout<<"/ /";
    gotoxy(x+4,12); cout<<"____";
    gotoxy(x+9,10); cout<<"\\";
    gotoxy(x+4,11); cout<<"___";
    gotoxy(x+1,15); cout<<"__";
    for(int p(0); p<3;p++)
    {
        gotoxy(x+5+p,13+p);
        cout<<"\\  \\";
    }
    gotoxy(x+8,15); cout<<"__";


}
void bada::t(int x,int y) // overloading of functions
{
    for(int g(0);g<12;g++)
            {
               gotoxy(x+g,10); cout<<"_"; gotoxy(x+g,9);   cout<<"_";
            }
      for(int m(0); m<5;m++)
      {gotoxy(x+4,11+m);
      cout<<"|  |";}
      gotoxy(x+5,15);
      cout<<"__";
     gotoxy(x-1,10); cout<<"|";
      gotoxy(x+12,10);cout<<"|";



}
void bada::o(int x)
{
    gotoxy(x,10);
    for(int g(0);g<8;g++)
            {
               gotoxy(x+g,10); cout<<"_"; gotoxy(x+g,9);   cout<<"_";
            }
    for(int g(0);g<8;g++)
            {
               gotoxy(x+g,14); cout<<"_"; gotoxy(x+g,15);   cout<<"_";
            }
    for(int m(0); m<5;m++)
      {gotoxy(x,10+m);
      if(!m)
        cout<<"    ";
      else
        cout<<"|  |";
     gotoxy(x+6,10+m);
      if(!m)
        cout<<"    ";
      else
        cout<<"|  |";}
          gotoxy(x+1,10);cout<<"/";
        gotoxy(x,9); cout<<"  ";
        gotoxy(x,15); cout<<"  ";
       gotoxy(x+1,15); cout<<"\\";
       gotoxy(x+8,15);cout<<"/";
       gotoxy(x+8,10);cout<<"\\";


}
void bada::l(int x)
{
    gotoxy(x,10);
    for(int m(0); m<6;m++)
      {gotoxy(x,10+m);
        cout<<"|  |";}
        gotoxy(x+1,9); cout<<"__";
       gotoxy(x+4,14); cout<<"_____";
       gotoxy(x+1,15); cout<<"________";
       gotoxy(x+9,15); cout<<"|";

}
void bada::u(int x)
{
    gotoxy(x,10);
    for(int m(0); m<5;m++)
      {gotoxy(x,10+m);
        cout<<"|  |";
     gotoxy(x+7,10+m);
        cout<<"|  |";}
         for(int g(0);g<9;g++)
            {
                gotoxy(x+g+1,15);   cout<<"_";
            }
            gotoxy(x+1,15); cout<<"\\";
       gotoxy(x+9,15);cout<<"/";
       gotoxy(x+4,14); cout<<"___";
        gotoxy(x+1,9); cout<<"__";
         gotoxy(x+8,9); cout<<"__";


}
void bada::Table(int l, int b, int cdx, int cdy , int col, int rows)
{
        for(int k(0);k<l;k++)
    {
       gotoxy(cdx,cdy+k);
       cout<<"|";
      gotoxy(cdx+b,cdy+k);
       cout<<"|";

    }
    for(int bv(0);bv<=b;bv++)
    {
       gotoxy(cdx+bv,cdy);
       cout<<"_";
      gotoxy(cdx+bv,cdy+l);
       cout<<"_";
    }
       gotoxy(cdx,cdy+l);
      cout<<"|";
      gotoxy(cdx+b,cdy+l);
       cout<<"|";
       int rowwidth=(int)(l/rows);
       int colwidth=(int) (b/col);
        for(int p(cdy);p<=cdy+l;p+=rowwidth)
       { for(int k(0);k<b-1;k++)
           {gotoxy(cdx+k+1,p);
           cout<<"_";}
       }
       for(int p(cdx);p<=cdx+b;p+=colwidth)
       { for(int k(0);k<l;k++)
           {gotoxy(p,cdy+k+1);
           cout<<"|";}
       }


}
