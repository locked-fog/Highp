#include "highp.h"
using namespace highpmath;
using namespace std;

Highp::Highp(){
    this->digitNum=0;
    this->num.push_back(0);
    this->base=10;
    this->_IS_NEGA=false;
}

Highp::Highp(short &_base){
    this->digitNum=0;
    this->num.push_back(0);
    this->base=_base;
    this->_IS_NEGA=false;
}

short Highp::getBase(){
    return this->base;
}

int Highp::getDigit(){
    return this->digitNum;
}

bool Highp::_NEGA_CHECK(){
    return this->_IS_NEGA;
}

void Highp::setBase(short &_base){
    short srcBase=this->getBase(),aimBase=_base;
    if(srcBase==aimBase)return;
    if(srcBase>aimBase){
        
    }else{

    }
}

Highp Highp::operator=(Highp &_num){

}
