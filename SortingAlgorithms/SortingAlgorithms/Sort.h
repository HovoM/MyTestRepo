#pragma once
class Sort
{
public:
    Sort(void);
    virtual ~Sort(void);

    virtual void sort(int ara[], const int& size) = 0;
};

