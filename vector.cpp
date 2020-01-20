#include"vector.hpp"
#include<iostream>

//Constructors
vectorInt::vectorInt(int size){
    vectorInt::data = new int[size];
    
    for (int i = 0; i < size; i++)
    {
        vectorInt::data[i] = 0;
    }
    vectorInt::actual_append_index = 0;
    vectorInt::size = size;
    vectorInt::item_size = sizeof(size);
}

//Destructors
vectorInt::~vectorInt(){
    int *data = static_cast<int *>(vectorInt::data); 
    if (data[0]){
        delete(data) ;
    }
    delete(this);
}

//Function Members return 1 if is ok
int vectorInt::append(int &num) {
    if (vectorInt::actual_append_index >= vectorInt::size)
        vectorInt::size++;    
    
    int *new_data = new int[vectorInt::size];

    for (int i = 0; i < vectorInt::size; i++)
    {
        new_data[i] = vectorInt::data[i];
    }
    
    new_data[vectorInt::actual_append_index] = num;
    vectorInt::actual_append_index++;
    
    delete(vectorInt::data);
    vectorInt::data = new_data;
    
    return 1;
}

int vectorInt::remove(int &index){
    if(index >= vectorInt::size) return 0;
    int *new_data = new int[vectorInt::size - 1];

    int j = 0;
    for (int i = 0; i < vectorInt::size; i++)
    {
        if(i == index) continue;
        new_data[j] = vectorInt::data[i];
        j++;
    }
    
    vectorInt::size--;
    
    delete(vectorInt::data);
    vectorInt::data = new_data;
    
    return 1;
}

int & vectorInt::operator[](int &index) const{
    return static_cast<int *>(vectorInt::data)[index];
}

vectorInt vectorInt::operator+(const vectorInt &vec) const{    
    if (vectorInt::size != vec.size) return vectorInt(1);
    
    vectorInt newVec = vectorInt(1);
    
    for (size_t i = 0; i < vectorInt::size; i++)
    {
        int num = (vectorInt::data[i] + vec.data[i]);
        newVec.append(num);
    }
    
    return newVec;
}

vectorInt & vectorInt::operator=(vectorInt &vec){
    std::cout<<"criustpo";
    
    vectorInt::data = vec.data;
    vectorInt::item_size = vec.item_size;
    vectorInt::size = vec.size;
    vectorInt::actual_append_index = vec.actual_append_index;

    return *this;
}
