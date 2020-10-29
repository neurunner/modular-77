#ifndef CONSOLE77_H
#define CONSOLE77_H
#include <file77.h>
#include <iostream>
using namespace std;

class Console77
{
public:
    Console77();
    void manipulate(File77 file);
    void print(File77 file);
    void print(string content);
    void edit(string content);
private:
    bool answer = true;
};

#endif // CONSOLE77_H
