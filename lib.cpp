//
// Created by oelsp on 01/12/2021.
//

#include <iostream>
#include "lib.h"
using namespace std;
bool conversione_lettere(char &a) {
    if (a >= 'A' && a <= 'Z'){

        a=a+32;
        return true;

    }else if(a>='a' && a<='z'){

        a=a-32;
        return true;

    }
    return false;
}