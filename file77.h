#ifndef FILE77_H
#define FILE77_H
#include <string>
using namespace std;

class File77
{
public:
    File77();
    string getName() const;
    string getFormat() const;
    string getContent() const;
    string getPath() const;
    string getSize() const;
    void setName(string name);
    void setFormat(string format);
    void setContent(string content);
    void setPath(string path);
    void setSize(string size);
private:
    string name;
    string format;
    string content;
    string path;
    string size;
};

#endif // FILE77_H
