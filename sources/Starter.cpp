#include "Starter.h"
#include "Equipments.h"
#include "bada.h"
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include"Storage.h"
#include<conio.h>
#include<cctype>
using namespace std;
void FlushScreen();
Storage savedInstances;
void RandomTips();
unsigned long long int Matrix::total=savedInstances.GetCurrentInfo();
typedef unsigned short int Order;
Equipments tool; bada dtool; Navigate Mover;
#define BORDER tool.box(41,160,4,0)
#define INBOX tool.box(3,95,33,37)
#define HEADER tool.box(3,30,68,1)
int flager(0); Order R_order(0), C_order(0);
Logger Logs;
void Starter::start()
{
    Logs.Events(30);
    system("cls");
    BORDER;
    tool.box(3,95,33,2);
    dtool.gotoxy(56,4);
    Logs.Events(31);
    cout<<"SELECT YOUR ACTION WITH THE MATRIX FROM GIVEN LIST";
    dtool.Table(24,80,42,8,2,8);
    int index=1;
    for(int k(0); k<24;k+=3)
    {
    dtool.gotoxy(63,10+k);
    cout<<index;
    index++;
    }
    dtool.gotoxy(95,10); cout<<"ADDITION/SUBTRACTION";
    dtool.gotoxy(95,13); cout<<"MULTIPLICATION";
    dtool.gotoxy(95,16); cout<<"EXPONENTS";
    dtool.gotoxy(95,19); cout<<"DETERMINANT";
    dtool.gotoxy(95,22); cout<<"ADJOINT";
    dtool.gotoxy(95,25); cout<<"INVERSE";
    dtool.gotoxy(95,28); cout<<"FUNCTIONAL";
    dtool.gotoxy(95,31); cout<<"CUSTOM";
    unsigned int choice;
    Chooser cho;
    tool.box(3,95,33,34);
    dtool.gotoxy(73,39);
    cout<<"PRESS 0 TO GO BACK";
    cho.call(35,36);
    try{

            cin>>choice;
            if(choice==0)
                Mover.welcome();
            if(choice>8&&choice!='C')
                {throw 104;
                Logs.Events(32);
                }
            }
    catch (int)
        { flager++;
            if(flager==3)
                {
                    Logs.Events(33);
                    tool.terminator(104);} // Tries Exceeded with incorrect entries
          else
            start();
        }
    switch(choice)
        {
            Logs.Events(34);
        case 1: addsub(); break;
        case 2: mult(); break;
        case 3: xpo(); break;
        case 4: detr(); break;
        case 5: adj(); break;
        case 6: inv(); break;
        case 7: func(); break;
        case 8: cus(); break;
        }

}
void Starter::addsub(void)
{
    Logs.Events(35);
    int push(0);
    FlushScreen();
    cout<<"ADDITION AND SUBTRACTION";
    INBOX;
    dtool.gotoxy(35,39);
    Logs.Events(59);
    cout<<"ENTER THE ORDER OF THE MATRIX : ";
    cin>>R_order;
    dtool.gotoxy(70,39);
    cout<<"x ";
    cin>>C_order;
    if(R_order>7||C_order>7)
    {
        Logs.Events(36);
        tool.terminator(405); //Matrix Overflow
    }
    FlushScreen();Logs.Events(60);
    cout<<"ADDITION AND SUBTRACTION";
    do{
            INBOX;
            Logs.Events(37);
          RandomTips();
    Matrix m(R_order,C_order,18,6);
    if(push==0)
      {m.push(R_order,C_order,18,6);}
    else
    {m.pop(m,18,6);}
    char Operator ;
        dtool.gotoxy(80,36);
        cout<<"GIVE THE OPERATOR";
        dtool.gotoxy(84,15);
        Logs.Events(38);
        cin>>Operator;
        Logs.Events(39);
        if((Operator!='+')&&(Operator!='-'))
            {
                Logs.Events(40);
                tool.terminator(406);
                } //Invalid Operator
        Logs.Events(41);
    Matrix k(R_order,C_order,103,6);
    k.push(R_order,C_order,103,6);
    getch();
    Matrix res(R_order,C_order);
    Logs.Events(42);
    if(Operator=='+')
        res=k+m;
    else
        res=(m-k);
    FlushScreen();
    Logs.Events(43);
    cout<<"ADDITION AND SUBTRACTION";
    res.pop(res,(68-(3*(res.Seecols()-4))),7);
    INBOX;
    dtool.gotoxy(35,39);
        cout<<"PRESS ZERO TO GO BACK,\"C\" CHARACTER TO COPY MATRIX,OR OTHER KEYS TO DO MORE : ";
        Logs.Events(44);
        cin>>Operator;
        if(Operator=='0')
           {Logs.Events(63);
           break;}
        if(Operator=='c'||Operator=='C')
        {
            Logs.Events(45);
            dtool.gotoxy(35,39);
            cout<<"                                                                               ";
            PushMatrixToFile(res);
            dtool.gotoxy(40,39);
            cout<<"COPIED THE MATRIX TO CLIPBOARD, PRESS ANY KEY TO RETURN TO MAIN MENU";
            getch();
            break;
        }
    res.MatCpy(m,res);
    Matrix::UpdateInfo();
    push++;
    FlushScreen();
    cout<<"ADDITION AND SUBTRACTION";

    }while(1);
start();
}
void Starter::mult(void)
{
     Order R,C; Matrix NewResult;  int newindex;
    FlushScreen();
    cout<<"     MULTIPLICATION      ";
    INBOX;
    dtool.gotoxy(35,39);
    cout<<"ENTER THE ORDER OF THE MATRIX A : ";
    Logs.Events(59);
    cin>>R_order;
    dtool.gotoxy(72,39);
    cout<<"x ";
    cin>>C_order;
    dtool.gotoxy(60,39);
    cout<<"                                      "; // to clear this part of the screen
    if(R_order>7||C_order>7)
    {
        Logs.Events(61);
        tool.terminator(405); //matrix overflow
    }
    Logs.Events(60);
    dtool.gotoxy(35,39);
    cout<<"ENTER THE ORDER OF THE MATRIX B : ";
    Logs.Events(59);
    cin>>R;
    dtool.gotoxy(72,39);
    cout<<"x ";
    cin>>C;
    if((R_order>7||C_order>7))
    {
        Logs.Events(61);
        tool.terminator(405); // matrix overflow
    }
    if((C_order!=R))
    {
        Logs.Events(62);
        tool.terminator(402); // non square matrix
    }
    Logs.Events(60);
        INBOX;
        RandomTips();
        Matrix Result(R_order,C);
        Matrix m(R_order,C_order,18,6);
        m.push(R_order,C_order,18,6);
        Matrix k(R,C,103,6);
        k.push(R,C,103,6);
        getch();
        Result=m*k;
        Matrix::UpdateInfo();
        FlushScreen();
        cout<<"     MULTIPLICATION      ";
        Result.pop(Result,(68-(3*(Result.Seecols()-4))),7);
        INBOX; char Operator;
        dtool.gotoxy(35,39);
        cout<<"PRESS ZERO TO GO BACK,\"C\" CHARACTER TO COPY MATRIX,OR OTHER KEYS TO DO MORE : ";
        cin>>Operator;
 while(true)
    {
        if(Operator=='0')
          {
              Logs.Events(63);
           break;
          }
         if(Operator=='c'||Operator=='C')
        {
            Logs.Events(45);
            dtool.gotoxy(35,39);
            cout<<"                                                                               ";
            PushMatrixToFile(Result);
            dtool.gotoxy(40,39);
            cout<<"COPIED THE MATRIX TO CLIPBOARD, PRESS ANY KEY TO RETURN TO MAIN MENU";
            getch();
            break;
        }
         FlushScreen();
         cout<<"     MULTIPLICATION      ";
         Result.pop(Result,18,6);
         INBOX;
         dtool.gotoxy(35,39);
         cout<<"ENTER ONLY THE NUMBER OF COLUMNS IN SECOND MATRIX : ";
         Logs.Events(59);
         cin>>newindex;
         if(newindex>7)
            {
                Logs.Events(61);
                tool.terminator(410); // Order error
            }
            Logs.Events(60);
         INBOX;
         RandomTips();
         Matrix New(Result.Seecols(),newindex,103,6);
         New.push(Result.Seecols(),newindex,103,6);
         NewResult.Set(Result.Seerow(),newindex);
         NewResult=Result*New;
         Result.Set(NewResult.Seerow(),NewResult.Seecols());
         Result.MatCpy(Result,NewResult);
         FlushScreen();
         cout<<"     MULTIPLICATION      ";
         New.pop(Result,68,10);
         INBOX;
         Matrix::UpdateInfo();
         Matrix::UpdateInfo();
        dtool.gotoxy(35,39);
        cout<<"PRESS ZERO TO GO BACK,\"C\" CHARACTER TO COPY MATRIX,OR OTHER KEYS TO DO MORE : ";
        cin>>Operator;

    }
    start();
     }
void Starter::xpo(void)
{
    char Operator;
    Order row;
    FlushScreen();
    cout<<"       EXPONENTS         ";
    INBOX;
    dtool.gotoxy(35,39);
    cout<<"ENTER THE ORDER OF YOUR MATRIX : ";
    Logs.Events(59);
    cin>>row;
    if((row>7)||(!row))
    {
        Logs.Events(61);
        tool.terminator(405); //Matrix Overflow
    }
    Logs.Events(60);
    Matrix m(row,row,(68-(3*(row-4))),6);
    RandomTips();
    m.push(row,row,(68-(3*(row-4))),6);
    dtool.gotoxy(60,39);
    cout<<"                                               ";
    do{
    dtool.gotoxy(38,39);
    cout<<"                                                                                        ";
    dtool.gotoxy(35,39);
    cout<<"ENTER THE EXPONENT OF THE MATRIX : ";
    Order pow;
    cin>>pow;
    m.power(pow);
    FlushScreen();
    cout<<"       EXPONENTS         ";
    INBOX;
    m.pop((68-(3*(m.Seecols()-4))),7);
    dtool.gotoxy(38,39);
    cout<<"PRESS ZERO TO GO BACK OR \"C\" CHARACTER TO COPY THIS RESULT MATRIX, OTHER TO PROCEED : ";
    cin>>Operator;
     if(Operator=='c'||Operator=='C')
        {
            Logs.Events(45);
            dtool.gotoxy(35,39);
            cout<<"                                                                               ";
            PushMatrixToFile(m);
            dtool.gotoxy(40,39);
            cout<<"COPIED THE MATRIX TO CLIPBOARD, PRESS ANY KEY TO RETURN TO MAIN MENU";
            getch();
            break;
        }
    if(Operator=='0')
    {
        Logs.Events(63);
        break;
    }
    }while(Operator!='0');
start();
}
void Starter::detr(void)
{
    FlushScreen();
    cout<<"      DETERMINANTS       ";
    Order s;
    INBOX;
    dtool.gotoxy(35,39);
    Logs.Events(65);
    cout<<"ENTER THE NUMBER OF ROW IN YOUR MATRIX : ";
    cin>>s;
    if(s>7||s==0)
    {
        Logs.Events(61);
        tool.terminator(405); //Matrix Overflow
    }
    Logs.Events(60);
    Matrix p(s,s,(68-(3*(s-4))),6);
    INBOX;
    RandomTips();
    p.push(s,s,(68-(3*(s-4))),6);
    FlushScreen();
    cout<<"      DETERMINANTS       ";
    dtool.gotoxy(60,17);
    cout<<" The Determinant of the Last Matrix is : "<<p.detr();
    INBOX;
    dtool.gotoxy(35,39);
    cout<<"I JUST DID THAT FOR YOU, PRESS ANY KEY TO GO BACK TO OPERATION MENU ";
    getch();
    start();
}
void Starter::adj(void)
{
    FlushScreen();
    cout<<"        ADJOINT          ";
    Order s;
    INBOX;
    dtool.gotoxy(35,39);
    Logs.Events(65);
    cout<<"ENTER THE NUMBER OF ROW IN YOUR MATRIX : ";
    cin>>s;
    if(s>7||s==0)
    {
        Logs.Events(61);
        tool.terminator(405); //Matrix Overflow
    }
    Logs.Events(60);
    Matrix p(s,s,(68-(3*(s-4))),6);
    INBOX;
    RandomTips();
    p.push(s,s,(68-(3*(s-4))),6);
    FlushScreen();
    cout<<"        ADJOINT          ";
    INBOX;
    p.Adjoint();
    p.pop((68-(3*(p.Seecols()-4))),7);
    Matrix::UpdateInfo();
    char Choice;
    dtool.gotoxy(35,39);
        cout<<"PRESS ZERO TO GO BACK,\"C\" CHARACTER TO COPY MATRIX, OTHER KEYS TO DO IT AGAIN : ";
        cin>>Choice;
if(Choice=='0')
{
    Logs.Events(63);
    start();

}
if(Choice=='c'||Choice=='C')
{
    Logs.Events(45);
            dtool.gotoxy(35,39);
            cout<<"                                                                               ";
            PushMatrixToFile(p);
            dtool.gotoxy(40,39);
            cout<<"COPIED THE MATRIX TO CLIPBOARD, PRESS ANY KEY TO RETURN TO MAIN MENU";
            getch();
            start();
}
else{adj();}

}
void Starter::inv(void)
{
    FlushScreen();
    cout<<"        INVERSE          ";
    Order s;
    INBOX;
    dtool.gotoxy(35,39);
    Logs.Events(65);
    cout<<"ENTER THE NUMBER OF ROW IN YOUR MATRIX : ";
    cin>>s;
    if(s>7||s==0)
    {
        Logs.Events(61);
        tool.terminator(405); //Matrix Overflow
    }
    Logs.Events(60);
    Matrix p(s,s,(68-(3*(s-4))),6);
    INBOX;
    RandomTips();
    p.push(s,s,(68-(3*(s-4))),6);
    FlushScreen();
    cout<<"        INVERSE          ";
    INBOX;
    char Choice;
    int z=p.detr();
    if(z)
    {
        p.Adjoint();
    dtool.gotoxy(44,4*(p.Seerow()/2)+7);
    cout<<"1/"<<z<<" x ";
    p.pop((68-(3*(p.Seecols()-4))),7);
    Matrix::UpdateInfo();
    dtool.gotoxy(35,39);
        cout<<"PRESS ZERO TO GO BACK, OTHER KEYS TO PERFORM THE SAME ACTION AGAIN : ";
        cin>>Choice;
    }
    else{
            dtool.gotoxy(49,17);
            cout<<" The Determinant of the Last Matrix was ZERO, So No Inverse Exist...";
        dtool.gotoxy(35,39);
        cout<<"DETERMINANT IS ZERO, NO INVERSE OF THIS MATRIX EXIST. PRESS 0 TO GO BACK  : ";
        cin>>Choice;
    }
if(Choice=='0')
{
    Logs.Events(63);
    start();

}
else{inv();}

}
void Starter::func(void)
{
    bool again=false;
    FlushScreen();
    cout<<"       FUNCTIONAL        ";
    Order s;
    INBOX;
    dtool.gotoxy(35,39);
    Logs.Events(65);
    cout<<"ENTER THE NUMBER OF ROW IN YOUR MATRIX : ";
    cin>>s;
    if(s>7||s==0)
    {
        Logs.Events(61);
        tool.terminator(405); //Matrix Overflow
    }
    do{
    Logs.Events(60);
    Matrix p(s,s,(68-(3*(s-4))),6);
    INBOX;
    RandomTips();
    if(again)
    {
        p.pop((68-(3*(p.Seecols()-4))),6);
    }
    else
    {
        p.push(s,s,(68-(3*(s-4))),6);
    }
    dtool.gotoxy(35,39);
    cout<<"                                                                         ";
    dtool.gotoxy(35,39);
    cout<<"ENTER THE ORDER OF THE POLYNOMIAL : " ;
    unsigned short pk;
    cin>>pk;
    if(pk>6)
    {
         Logs.Events(64);
        tool.terminator(109);
    }
    const unsigned short degree=pk;
    int sk[degree+1];
    pk=degree+1;
    do
    {
        pk--;
        dtool.gotoxy(35,39);
    cout<<"                                                                         ";
    dtool.gotoxy(35,39);
    cout<<"ENTER COEFFICIENT ASSOCIATED WITH DEGREE "<<pk<<" : ";
    cin>>sk[pk];
    }while(pk!=0);
     Matrix *Result=new Matrix;
        Result->Set(p.Seecols(),p.Seecols());
        Result->MakeNull();
    for(unsigned short jh=0;jh<degree+1;jh++)
    {
        Matrix *mac=new Matrix;
        mac->Set(p.Seecols(),p.Seecols(),false);
        Matrix *identity=new Matrix;
        identity->Set(p.Seecols(),p.Seecols(),false);
        mac->MatCpy(*mac,p);
        mac->power(jh);
        identity->MakeIdentity(sk[jh]);
        *mac=(*mac)*(*identity);
        *Result=(*Result)+(*mac);
        delete mac;
        delete identity;

    }
    Result->MatCpy(p,*Result);
    delete Result;
    FlushScreen();
    cout<<"       FUNCTIONAL        ";
    p.pop((68-(3*(p.Seecols()-4))),6);INBOX;
    dtool.gotoxy(38,39);
    cout<<"PRESS ZERO TO GO BACK OR \"C\" CHARACTER TO COPY THIS RESULT MATRIX, OTHER TO CONTINUE : ";
    char Operator;
    cin>>Operator;
     if(Operator=='c'||Operator=='C')
        {
            Logs.Events(45);
            dtool.gotoxy(35,39);
            cout<<"                                                                               ";
            PushMatrixToFile(p);
            dtool.gotoxy(40,39);
            cout<<"COPIED THE MATRIX TO CLIPBOARD, PRESS ANY KEY TO RETURN TO MAIN MENU";
            getch();
            start();
        }
    if(Operator=='0')
    {
        Logs.Events(63);
        start();
    }
    else{
        FlushScreen();
        cout<<"       FUNCTIONAL        ";
        INBOX;
        again=true;
    }
    }
while(true);
}
void Starter::cus(void)
{
    FlushScreen();
    cout<<"    ALL CALCULATIONS     ";
    dtool.Table(18,36,8,2,2,6);
    dtool.Table(18,36,124,2,2,6);
    cout<<"Still in Development.. Have Patience..!!";
    getch();
}
Matrix::Matrix(int r,int c)
{
   row=r;
   cols=c; // overloaded ctor
   ++total;
}
Matrix::Matrix(int r, int c, int x, int y)
{
    ++total;
    row=r;
    cols=c;
    for(int k(0); k<r;k++)
    {
        for(int j(0);j<c;j++)
          tool.box(3,7,x+(8*j),y+(4*k));
    }
    tool.box((4*r+1),(8*c+3),x-2,y-1);
}
void Matrix::push(int r, int c,int x, int y)
{
    Logs.Events(57);
    int k,j;
     for(k=0; k<r;k++)
    {
        for(j=0;j<c;j++)
           {
               dtool.gotoxy(x+(8*j)+3,y+(4*k)+2);
                {cin>>elts[k][j];
                        }
                        }
    }
    Logs.Events(58);
}
void Matrix::push(int elt,int index1,int index2) // TO input the  value in a matrix by programing
{
    this->elts[index1][index2]=elt;
}
void Matrix::pop(Matrix s,int x,int y)
{
    Logs.Events(56);
     Matrix p(s.row,s.cols,x,y);
    int k,j;
     for(k=0; k<s.row;k++)
    {
        for(j=0;j<s.cols;j++)
           {
                dtool.gotoxy(x+(8*j)+3,y+(4*k)+2);
                cout<<s.elts[k][j];
                                 }
    }
}
void Matrix::pop(int x,int y)
{
    Logs.Events(56);
     Matrix p(this->row,this->cols,x,y);
    int k,j;
     for(k=0; k<this->row;k++)
    {
        for(j=0;j<this->cols;j++)
           {
                dtool.gotoxy(x+(8*j)+3,y+(4*k)+2);
                cout<<this->elts[k][j];
                                 }
    }
}
Matrix Matrix::operator+ (Matrix &b)
{
    Logs.Events(55);
    int k,j;  Matrix give(b.row,b.cols);
 for(k=0; k<b.row;k++)
    {
        for(j=0;j<b.cols;j++)
           {
                give.elts[k][j]=this->elts[k][j]+b.elts[k][j];
                                 }
    }
    return give;

}
Matrix Matrix::operator- (Matrix &b) //operator overloading
{
    Logs.Events(54);
    int k,j;  Matrix give(b.row,b.cols);
 for(k=0; k<b.row;k++)
    {
        for(j=0;j<b.cols;j++)
           {
                give.elts[k][j]=this->elts[k][j]-b.elts[k][j];
                                 }
    }
    return give;

}
void Matrix::power(unsigned int po)
{
    if(po>6)
    {
        Logs.Events(64);
        tool.terminator(109); //Incorrect Power of the matrix
    }
    Matrix * manage=new Matrix;
    manage->Set(this->Seecols(),this->Seerow(),true);
    manage->MakeIdentity();
    if(po==0)
       {
           INBOX;
           this->MakeIdentity();
       }
    else
        {
    for(unsigned int a=0;a<po;a++)
        *manage=(*this)*(*manage);
        }
        this->MatCpy(*this,*manage);
        delete manage;
}
void FlushScreen(void)
{
    Logs.Events(53);
    system("cls");
    BORDER;
    HEADER;
    dtool.gotoxy(71,3);
}
void Matrix :: MatCpy(Matrix &c,Matrix &o)
{
    Logs.Events(52);
    Matrix::UpdateInfo();
    for(int i(0);i<c.row;i++)
        for(int j(0);j<c.cols;j++)
         c.elts[i][j]=o.elts[i][j];

}
bool Matrix:: MatCmp(Matrix c,Matrix o)
{
    Logs.Events(51);
    if(c.cols!=o.cols||c.row!=o.row)
    return false;
    for(int i(0);i<c.row;i++)
       {
        for(int j(0);j<c.cols;j++)
         {if(c.elts[i][j]!=o.elts[i][j])
            return false;
            break;
            }
        }
    return true;
}
Matrix Matrix::operator* (Matrix &b) //operator overloading
{
    Logs.Events(50);
    int k,j;  Matrix give(this->row,b.cols);
 for(k=0; k<(this->row);k++)
    {
        for(j=0;j<b.cols;j++)
           { give.elts[k][j]=0;
                for(int t(0);t<b.row;t++)
                {
                    give.elts[k][j]+=this->elts[k][t]*b.elts[t][j];
                }
                                 }
    }
    return give;

}
void Matrix::SwapMatrix(Matrix &a, Matrix &b)
{
    Logs.Events(49);
    if(a.cols==b.cols&&a.row==b.row)
    {
    a=a+b;
    b=a-b;
    a=a-b;
    }
    else
    cout<<"INVALID SWAP CALLED";
}
void Matrix::Set(int r, int c, bool log)
{
    if(log)
    Logs.Events(48);
    row=r;
    cols=c;
}
void Matrix::Tanspose()
{
    if(this->Seecols()==this->Seerow())
    {
        Matrix * oh = new Matrix;
        oh->Set(this->Seecols(),this->Seerow(),false);
        for(int i(0);i<this->Seecols();i++)
            for(int k(0);k<this->Seecols();k++)
                oh->push(this->elts[i][k],k,i);
            this->MatCpy(*this,*oh);
            delete oh;
    }
}
void Matrix::MakeIdentity()
{
    Logs.Events(47);
    for(int i(0);i<(this->row);i++)
        for(int j(0);j<this->cols;j++)
         if(i==j)
            this->elts[i][j]=1;
         else
            this->elts[i][j]=0;
}
void Matrix::MakeNull()
{
    Logs.Events(67);
    for(int i=0;i<this->Seecols();i++)
        for(int j=0;j<this->Seecols();j++)
        this->elts[i][j]=0;
}
void Matrix::MakeIdentity(int n)
{
    Logs.Events(47);
    for(int i(0);i<(this->row);i++)
        for(int j(0);j<this->cols;j++)
         if(i==j)
            this->elts[i][j]=n;
         else
            this->elts[i][j]=0;
}
long  double Matrix::detr()
{
   long double mainresult=0;
    Order gk=this->Seecols();
    int flag=0,a=0,b=0;
    if(gk==1)
    {
        mainresult=this->elts[0][0];
        return mainresult;
    }
    if(gk==2)
        {
            long  double l=this->elts[0][0]*this->elts[1][1];
            long  double m=this->elts[1][0]*this->elts[0][1];
            mainresult=l-m;
                return mainresult;
            }
    if(gk>2)
    {
            for(;flag<gk;flag++)
            {
            Matrix *pointer=new Matrix; // Dynamic Memory Allocation
            pointer->Set(gk-1,gk-1,false);
            Matrix::UpdateInfo();
            for(int i=1;i<gk;i++)
            {
                for(int j=0;j<gk;j++)
                {
                 if(flag!=j)
                   {
                      long double pg=this->elts[i][j];
                       pointer->push(pg,a,b);
                       b++;
                    }
                }
                 a++;
                 b=0;
            }
            a=0;
            b=0;
           long double z=pointer->detr();
            mainresult+=(pow(-1,flag))*(this->elts[0][flag])*z;
            delete pointer;
            }
    }

return mainresult;
}
void Matrix::Adjoint()
{
    Order gk=this->Seecols();
    Matrix * jointer = new Matrix;
    jointer->Set(gk,gk);
    int flag,a=0,b=0;
    if(gk==2)
        {
            int buffer=this->elts[0][0];
            this->elts[0][0]=this->elts[1][1];
            this->elts[1][1]=buffer;
            this->elts[1][0]*=(-1);
            this->elts[0][1]*=(-1);
            buffer=this->elts[1][0];
            this->elts[1][0]=this->elts[0][1];
            this->elts[0][1]=buffer;
            this->Tanspose();

            }
    if(gk>2)
    {
        for(int o=0;o<gk;o++)
        {
            for(flag=0;flag<gk;flag++)
            {
                Matrix * pointer = new Matrix;
                pointer->Set(gk-1,gk-1);
        for(int i=0;i<gk;i++)
        {
            for(int j=0;j<gk;j++)
                {
                 if((flag!=j)&&(o!=i))
                   {
                      int pg=this->elts[i][j];
                       pointer->push(pg,a,b);
                       b++;
                    }
                }
                if(o!=i)
                      a++;
                 b=0;
            }
            int z=pointer->detr();
            delete pointer;
            jointer->elts[o][flag]=pow((-1),(o+flag))*(z);
            a=0;
            b=0;
            }
        }
        this->MatCpy(*this,*jointer);
        delete jointer;
        this->Tanspose();
    }

}
void RandomTips()
{
    Logs.Events(46);
    srand(time (0));
     int ui(rand()%5);
          dtool.gotoxy(35,39);
          switch(ui){
                    case 0 : cout<<"                THANKFUL TO MY CREATOR FOR LETTING ME DO WONDERS  "; break;
                    case 1 : cout<<"                DID YOU KNOW...?? I AM  DESIGNED TO DO MATRIX EASY     "; break;
                    case 2 : cout<<"                ALWAYS THERE WITH YOU TO HELP YOU SOLVE YOUR MATRIX      "; break;
                    case 3 : cout<<"                OHH THIS SEEMS TOUGH MATRIX, WORRY NOT I AM HERE DEAR "; break;
                    case 4 : cout<<"                DID YOU KNOW..? YOU CAN CUSTOMIZE ME IN \"LOOKS AND FEEL\""; break;
                    case 5 : cout<<"                YOU CAN ACCESS MANY FEATURES IN \"OPTION\" MENU " ;break; }
}

