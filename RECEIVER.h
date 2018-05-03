#include <iostream>
#include <string.h>
    #include <stdio.h>
     #include <stdlib.h>
       //#include <conio.h>
        #include <fstream>
#pragma once

using namespace std;

class receiver
{
private:
    string receiverCont;
    string receiverCnic;

    double amountReceive;

    public:

    receiver();
    receiver(string,string,double);


    void setRecCont(string);
    void setRecCnic(string);
    void setAmountRec(double);


    string getRecCont();
    string getRecCnic();
    double getAmountRec();

    void printRecAmt();

    void getallreceivings();
    void recbal(string,double);


};
