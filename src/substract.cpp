#include "substract.h"

namespace basic_operations{

int substract(int a, int b){
    if(a>b){
        return a-b;
    }
    else{
        return b-a;
    }
}

}