#ifndef SOMETHING_HPP
#define SOMETHING_HPP
#include <iostream>


class Something
{
private:
    int m_nID;
public:
    Something(int nID);
    ~Something();
    int getID();
};

#endif // SOMETHING_HPP
