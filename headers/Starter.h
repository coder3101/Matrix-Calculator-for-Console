#ifndef STARTER_H
#define STARTER_H


class Starter
{
    public:
    void start();
    void addsub();
    void mult();
    void xpo();
    void func();
    void cus();
    void inv();
    void adj();
    void detr();

};
class Matrix
{
  float elts[8][8];
  int row, cols;
public:

    static unsigned long long int total;
    Matrix(int r,int c,int x ,int y); // Matrix Location with x and y at last and first two as order of matrix, IT IS CONSTRUCTOR
    void push(int r,int c,int x, int y); // ROWS AND COLUMNS OF THE MATRIX
    void push(int elt,int index1,int index2);
    void pop(Matrix,int X,int Y);
    void pop(int x, int y); // to print this matrix
    Matrix(int r,int c); // constructor overloading
    Matrix(){++total;};// Null matrix overloaded constructor, for non ordered matrix swap
    Matrix operator+(Matrix &h); // Overloading
    Matrix operator-(Matrix &h);
    Matrix operator*(Matrix &h);
    void Adjoint(); //Adjoint
    void Tanspose();//Transpose of square
    void MatCpy(Matrix &,Matrix &);
    bool MatCmp(Matrix , Matrix);
    void MakeIdentity();
    void MakeNull();
    void power(unsigned int);
   long double detr(); // determinant returner
    friend Matrix PopMatrixFromFile(int);
    friend void PushMatrixToFile(Matrix);
    void MakeIdentity(int n);
    void SwapMatrix (Matrix &, Matrix &);
    void Set(int r, int c, bool log=true);
    int Seerow() const
    {
        return row;
    }
    int Seecols() const
    {
        return cols;
    }
    static void UpdateInfo()
    {
        (Matrix::total)--;
    }


};

#endif // STARTER_H
