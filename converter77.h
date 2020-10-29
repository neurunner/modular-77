#ifndef CONVERTER77_H
#define CONVERTER77_H
#include <string>
using namespace std;

class Converter77
{
public:
    Converter77();
    void /* Here be Binary type instead void. */ toBinary();
    string toString(/* All types and binary type too.*/);
    void /* Need array function type */ toArray(/*All types*/);
    /* Also for each element in the arrays. */
    int secondToMinute(/* All types */); // Here should be function and not void
};

#endif // CONVERTER77_H
