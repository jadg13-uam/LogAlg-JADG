#include <iostream>
using namespace std;

#define MAX_REG 100


typedef struct PRODUCT
{
    string code;
    string name;
    double price;
    int stock;    
};

PRODUCT products[MAX_REG];
int pos = 0;
