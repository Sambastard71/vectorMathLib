#include<iostream>
#include"vector.hpp"

int main()
{
    
    vectorInt a = vectorInt(1);
    
    int num = 24;
    a.append(num);
    num = 7;
    a.append(num);
    num = 71;
    a.append(num);

    for (int i = 0; i < a.size; i++)
    {
        std::cout<<"i: "<<i<<" val: "<<a[i]<<std::endl;
    }
    
    // num = 2;
    // a.remove(num);
    
    // for (int i = 0; i < a.size; i++)
    // {
    //     std::cout<<"i: "<<i<<" val: "<<a[i]<<std::endl;
    // }

    vectorInt b = vectorInt(1);
    
    num = 1;
    b.append(num);
    num = 1;
    b.append(num);
    num = 1;
    b.append(num);
    
    for (int i = 0; i < b.size; i++)
    {
        std::cout<<"i: "<<i<<" val: "<<b[i]<<std::endl;
    }

    std::cout<<a.size<<std::endl<<b.size<<std::endl;
    
    //TODO:
    //Understand why the sum dont function;
    vectorInt c = (a + b);
    
    for (int i = 0; i < c.size; i++)
    {
        std::cout<<"i: "<<i<<" val: "<<c[i]<<std::endl;
    }
    return 0;
}