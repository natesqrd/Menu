#ifndef Integer_h
#define Integer_h
class Integer
{
private:
    int Int;
public:
    int toInt();

    void equals(int i);
    int add(Integer i);
    int sub(Integer i);
    int mul(Integer i);
    int div(Integer i);

    //Overloaded Functions
    int add(int i);
    int sub(int i);
    int mul(int i);
    int div(int i);

    //Constructors
    Integer();
    Integer(Integer &i);
    Integer(int i);
};

#endif


