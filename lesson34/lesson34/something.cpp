#include "something.hpp"

Something::Something(int nID)
{
    std::cout << "Construct Smth " << nID << "\n";
    m_nID = nID;
}

Something::~Something()
{
    std::cout << "Destruct Smth " << m_nID << "\n";
}

int Something::getID() {
    return m_nID;
}
