#include <iostream>
#include "Home.h"

Home::Home(int c = 0, double n = 0)
    : rooms_cnt(c), size(n)
{
    std::cout << "\nCreating an object of type Home.";
}

Home::~Home()
{
    std::cout << "\nDestroying an object of type Home.";
}

int Home::getRoomsCnt() const
{
    return rooms_cnt;
}

int Home::getSize() const
{
    return size;
}

void Home::setRoomsCnt(int c)
{
    rooms_cnt = c;
}

void Home::setSize(double n) 
{
    size = n;
}

void Home::display() const
{
    std::cout << "\nNumber of rooms: " << rooms_cnt
        << "\nSize of room: " << size;
}
