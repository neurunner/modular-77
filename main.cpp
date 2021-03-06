//  Console-based file converter and editor with technology for parallelizing mathematical tasks.
//  Copyright (C) 2020  Danyyl Vasylev

//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.

//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.

//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.


/// Qmake compilation /////////////////////
//#include <QCoreApplication>           //
                                        //
//int main(int argc, char *argv[])      //
//{                                     //
//    QCoreApplication a(argc, argv);   //
                                        //
//    return a.exec();                  //
//}                                     //
//////////////////////////////////////////

/// Cmake compilation with omp ////////////
//#include <iostream>                   //
//using namespace std;                  //
                                        //
//int main()                            //
//{                                     //
//#pragma omp parallel                  //
//    cout << "hello world77!" << '\n'; //
//    return 0;                         //
//}                                     //
//////////////////////////////////////////


/// Modular77 includes /////////////////////
#include <countconnector77.h>

/// Cmake compilation //////////////////////
int main()
{
    CountConnector77 connector = CountConnector77();
    connector.test_connect();
    return 0;
}









