#include "file77.h"

File77::File77(){}
string File77::getName() const {return name;}
string File77::getFormat() const {return format;}
string File77::getContent() const {return content;}
string File77::getPath() const {return path;}
string File77::getSize() const {return size;}
void File77::setName(string name) {this -> name = name;}
void File77::setFormat(string format) {this -> format = format;}
void File77::setContent(string content) {this -> content = content;}
void File77::setPath(string path) {this -> path = path;}
void File77::setSize(string size) {this -> size = size;}


