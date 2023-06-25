#ifndef ACOUNTING_H
#define ACOUNTING_H

#include "bike_management.h"

// Code goes below this line:

// Define the structure for a Client
typedef struct Client {
    char* name;
    char* address;
    char* phone;
    Purchase* purchases; // Array of purchases made by the client
} Client;

// Define the structure for a Purchase
typedef struct Purchase {
    Bike bike;
    char* date;
    float cost;
    float discount;
    Client* client; // Pointer to the client who made the purchase
} Purchase;

#endif


