#ifndef _HIGHP_H
#define _HIGHP_H

namespace highpmath{
    
    //一个命名规则：传入数据使用_ARR标记

    class Highp{
    public:
        Highp();//will form a standard num with a max digit num of 1e9.
        Highp(short &_base);//specify a base
    private:
        int digitNum;
        short *num[0];
        short base;
        bool _IS_NEGA;

        

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
    };

    

}


#endif