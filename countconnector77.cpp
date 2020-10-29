#include "countconnector77.h"

CountConnector77::CountConnector77()
{

}

void CountConnector77::connect() {

}

void CountConnector77::test_connect() {
    file.setName("file77");
    file.setFormat("bin");
    file.setContent("text content text content");
    file.setPath("test:/path");
    file.setSize("2 KB");
    console.manipulate(file);
}


