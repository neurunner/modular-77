#ifndef COUNTCONNECTER77_H
#define COUNTCONNECTER77_H
#include <console77.h>
#include <file77.h>
#include <loader77.h>
#include <converter77.h>
#include <math77.h>

class CountConnector77
{
public:
    CountConnector77();
    void connect();
    void test_connect();
private:
    Console77 console;
    File77 file;
    Loader77 loader;
    Converter77 converter;
    Math77 math;
};

#endif // COUNTCONNECTER77_H
