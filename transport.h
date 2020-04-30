
#ifndef PR1_1_TRANSPORT_H
#define PR1_1_TRANSPORT_H

#include <iostream>
#include <fstream>
#include "planes.h"
#include "train.h"
#include "ship.h"

enum T_type {
    PLANES=1,
    TRAIN=2,
    SHIP=3
};

struct transport {
    T_type tr_type;
    int speed;
    int distance;
    union{
        planes pl;
        train tr;
        ship sh;
    } u;
};

transport* Read_Transport(std::ifstream&stream);
void Out_Transport(std::ofstream& stream, transport*tran);

#endif //PR1_1_TRANSPORT_H
