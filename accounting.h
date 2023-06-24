#ifndef ACOUNTING_H
#define ACOUNTING_H

#include "bike_management.h"

// Code goes below this line:

typedef struct Client Client;

typedef struct Purchase {
    Bike bike;
    char* date;
    float cost;
    float discount;
    Client* client;
} Purchase;

typedef struct Client {
    char* name;
    char* address;
    char* phone;
    Purchase* purchases;
    Bike* purchase_history;
} Client;

#endif

