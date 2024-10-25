#ifndef _HIGHP_H
#define _HIGHP_H
#include <iostream>
#include <vector>

namespace highpmath{
    
    //一个命名规则：传入数据使用_ARR标记

    class Highp{
    public:
        Highp();//will form a standard num with a max digit num of 1e9.
        Highp(short &_base);//specify a base

        //basic operation
        short getBase();
        int getDigit();
        void setBase(short &_base);
        bool _NEGA_CHECK();//true for negative

        //operator =
        Highp operator=(Highp &_num);
        Highp operator=(short &_num);
        Highp operator=(int &_num);
        Highp operator=(long &_num);
        Highp operator=(long long &_num);

        //operator +
        Highp operator+(Highp &_num);
        friend Highp operator+(Highp &_num, Highp &_selfNum);
        Highp operator+(short &_num);
        friend Highp operator+(short &_num, Highp &_selfNum);
        Highp operator+(int &_num);
        friend Highp operator+(int &_num, Highp &_selfNum);
        Highp operator+(long &_num);
        friend Highp operator+(long &_num, Highp &_selfNum);
        Highp operator+(long long &_num);
        friend Highp operator+(long long &_num, Highp &_selfNum);

        //operator -
        Highp operator-(Highp &_num);
        friend Highp operator-(Highp &_num, Highp &_selfNum);
        Highp operator-(short &_num);
        friend Highp operator-(short &_num, Highp &_selfNum);
        Highp operator-(int &_num);
        friend Highp operator-(int &_num, Highp &_selfNum);
        Highp operator-(long &_num);
        friend Highp operator-(long &_num, Highp &_selfNum);
        Highp operator-(long long &_num);
        friend Highp operator-(long long &_num, Highp &_selfNum);

        //operator *
        Highp operator*(Highp &_num);
        friend Highp operator*(Highp &_num, Highp &_selfNum);
        Highp operator*(short &_num);
        friend Highp operator*(short &_num, Highp &_selfNum);
        Highp operator*(int &_num);
        friend Highp operator*(int &_num, Highp &_selfNum);
        Highp operator*(long &_num);
        friend Highp operator*(long &_num, Highp &_selfNum);
        Highp operator*(long long &_num);
        friend Highp operator*(long long &_num, Highp &_selfNum);

        //operator /
        Highp operator/(Highp &_num);
        friend Highp operator/(Highp &_num, Highp &_selfNum);
        Highp operator/(short &_num);
        friend Highp operator/(short &_num, Highp &_selfNum);
        Highp operator/(int &_num);
        friend Highp operator/(int &_num, Highp &_selfNum);
        Highp operator/(long &_num);
        friend Highp operator/(long &_num, Highp &_selfNum);
        Highp operator/(long long &_num);
        friend Highp operator/(long long &_num, Highp &_selfNum);

        //operator []
        short operator[](int &_num);

        //operator iostream
        friend std::ostream &operator<<(std::ostream &output, const Highp &_num);
        friend std::istream &operator>>(std::istream &input, Highp &_num);

        //operator -num
        Highp operator-();

        //operator</>
        bool operator<(const Highp &_num);
        bool operator>(const Highp &_num);

        //operator ++ --
        Highp operator++();
        Highp operator++(int);
        Highp operator--();
        Highp operator--(int);

        //operator +=
        //TODO
        
        //operator -=
        //TODO

        //operator *=
        //TODO

        //operator /=
        //TODO
    
    private:
        int digitNum;
        std::vector<short> num;
        short base;
        bool _IS_NEGA;

        

        
    };

    

}


#endif