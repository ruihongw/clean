//
//  main.cpp
//  clean
//
//  Created by Ruihongw on 2019/1/18.
//  Copyright © 2019 Ruihongw. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


class CalculateNumbers{
public:
    CalculateNumbers(int _num1,int _num2){
        num1=_num1;
        num2=_num2;
    }
    CalculateNumbers(int _num1){
        num1=_num1;
        num2=0;
    }
    
    int Add_Nums(){
        return num1+num2;
    }
    int Minus_Nums(){
        return num1-num2;
    }
    int Mult_Nums(){
        return num1*num2;
    }
    int Devi_Nums(){
        return num1/num2;
    }

private:
    int num1=0,num2=0;
};

int main(){
    CalculateNumbers instance1(1,2);
    CalculateNumbers* instance2=new CalculateNumbers(2);
    cout<<instance1.Add_Nums()<<endl;
    cout<<instance1.Minus_Nums()<<endl;
    cout<<instance1.Mult_Nums()<<endl;
    cout<<instance1.Devi_Nums()<<endl;
    cout<<instance2->Add_Nums()<<endl;
    return 0;
}
