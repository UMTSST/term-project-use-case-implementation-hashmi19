#include <iostream>
#include<string.h>
  #include <stdio.h>
     #include <stdlib.h>
       //#include <conio.h>
        #include <fstream>

using namespace std;


class sender
{
    private:
    string senderContact;
    string senderCnic;
    string recCnic;
    double amount2send;
    bool flag4;


public:
    sender();
    sender(string,string,string,double);
    void setContact(string);
    void setCnic(string);
     void setrecCnic(string);
    void setAmount(double);
     double getAmount();
    string getContact();
    string getrecCnic();
    string getCnic();
    bool setflag4(bool);
     bool getflag4();


    void print();
    void send(string,double);
    void searchRec(string);

    void storesendings(string,string ,double,string ,int);

    void sendbal(string,double);
    void showsendings(string ,string ,double);




};
