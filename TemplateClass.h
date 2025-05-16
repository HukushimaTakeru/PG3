#pragma once
#include <iostream>

//クラステンプレート
template <typename Type, typename Type2>

class TemplateClass{
public:
    // コンストラクタ
    TemplateClass(Type number1, Type2 number2) :
        Number1(number1), Number2(number2) {

    }

    Type Min()
    {
        if (Number1 < Number2)
            return static_cast<Type>(Number1);
        else
            return static_cast<Type>(Number2);
    }

private:
    Type Number1;
    Type2 Number2;
};


