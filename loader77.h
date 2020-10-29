#ifndef LOADER77_H
#define LOADER77_H
#include <file77.h>

class Loader77
{
public:
    Loader77();
    File77 loadFrom(File77 file);
    void saveTo(File77 file);
};

#endif // LOADER77_H
