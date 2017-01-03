#ifndef EQUIPMENTS_H
#define EQUIPMENTS_H


class Equipments
{
    public:
        void MatrixWriter();
        int random(int);
        void terminator(int);
        void box(int,int,int,int,bool pk=false);
    protected:

    private:
};
class Navigate : protected Equipments
{
public:
    void start();
    void agreement();
    void quit();
    void options();
    void customize();
    void welcome();
};
class Chooser : private Equipments
{   public:
    void call(int,int);
};

#endif // EQUIPMENTS_H
