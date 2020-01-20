#pragma once

struct vectorInt{

    vectorInt() = default;
    vectorInt(int size);

    ~vectorInt();

    int append(int &num);
    int remove(int &index);
    
    int & operator[](int &index)const;

    vectorInt operator+(const vectorInt &vec) const;

    vectorInt & operator=(vectorInt &vec);

private:
    size_t actual_append_index;
public:
    size_t item_size;
    size_t size;
    int* data;

};