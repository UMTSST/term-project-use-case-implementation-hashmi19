#include <iostream>
#include <string.h>
    #include <stdio.h>
     #include <stdlib.h>
       //#include <conio.h>
        #include <fstream>
using namespace std;


class user
{
private:

    string userC;
    string userP;
    bool flag1;


public:

    user();

    user(string,string );

    void setUserC(string);
    void setUpass(string);

      bool setflag1(bool);
    string getuserC();
    string getUpass();
      bool getflag1();

    bool searchuser(string ,string);

};
