#include <iostream>
#include <string.h>
    #include <stdio.h>
     #include <stdlib.h>
       //#include <conio.h>
        #include <fstream>

        using namespace std;

    class admin
    {
    private:
        string admphone;
        string admpass;
        bool flag;


         public:

       admin();
        admin(string,string);



        bool setflag(bool);
        void setphone(string);
        void setpass(string);

         bool getflag();
        string getphone();
        string getpass();

      bool searchAdmin(string,string);

      void adduser(string,string);
      void adduserMob_Bal(string,double);
      void adduserBal(double);



    }    ;
