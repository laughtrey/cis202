#include<iostream>
#include<cstdlib>

class DivideByZeroErr : public std::logic_error
{
        public:
                DivideByZeroErr(const char *reason) : std::logic_error(reason){

                }
};
class Divider
{
        int numerator;
        int denominator;
        public:
                Divider(int a, int b);
                int doit();

};

Divider::Divider(int a, int b){

        numerator = a;
        if( b != 0)
        denominator = b;
        else
                throw DivideByZeroErr("Divider::Divider Divison by 0 error");
}

int Divider::doit(){
        return numerator/denominator;
}

int main(){
        try
        {
        Divider d(10,0);
        std::cout << d.doit() << std::endl;
        }
        catch(DivideByZeroErr &e) {
                std::cerr << e.what() << std::endl;
                exit(1);
        }
        return 0;
}
