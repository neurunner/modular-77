#include "console77.h"

Console77::Console77() { }

void Console77::manipulate(File77 file){
    print(file);
}

void Console77::print(File77 file) {
    cout << " >>> "
            + file.getName()
            + "."
            + file.getFormat()
            + " >>> "
            +'\n' ;
    cout << '\n';
    cout << file.getContent() + '\n';
    cout << '\n';
    cout << " >>> '" + file.getPath() + "' >>> " + file.getSize() + " >>> ";
}

void Console77::edit(string content) {
}
