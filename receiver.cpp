#include <iostream>
#pragma once
#include "RECEIVER.h"
#include <string.h>
    #include <stdio.h>
     #include <stdlib.h>
       //#include <conio.h>
        #include <fstream>


using namespace std;

receiver::receiver()
{
    receiverCont="";
    receiverCnic="";
    amountReceive=0;

}

receiver::receiver(string contR,string CnicR, double amount1)
{
    receiverCont=contR;
    receiverCnic=CnicR;
    amountReceive=amount1;

}

void receiver::setRecCont(string contR)
{
    receiverCont=contR;
}
void receiver::setRecCnic(string CnicR)
{
    receiverCont=CnicR;
}

void receiver::setAmountRec(double amount1)
{
    amountReceive=amount1;
}


string receiver::getRecCont()
{
    return receiverCont;
}

string receiver::getRecCnic()
{
    return receiverCnic;

}

double receiver::getAmountRec()
{
    return amountReceive;
}

void receiver::printRecAmt()
{
 cout<<"Received From: "<<getRecCont()<<endl;

 cout<<"AmountReceived: "<<getAmountRec()<<endl;


 }

void receiver::getallreceivings()
{
     ifstream read;
                  bool flag=false;
                  read.open("Sender.txt");
                   if(!read){
                    cout<<"\n\tFile not exist";}
                      else{

                        string data;
                          while(!read.eof()){
                           fflush(stdin);
                            getline(read,data);
                             if(data==""){break;}

                                string m, s, rc, p;
                                string b;

                              int i=0;
                              m="";
                              s="";
                              b="";
                              rc="";
                              p="";


         cout<<"\nSender Contacts\t\t Amount Received "<<endl;
           while(data[i]!='-'){m=m + data[i];i++;}i++;

                   while(data[i]!='-'){s=s+data[i];i++;}i++;
                   while(data[i]!='-'){b=b+data[i];i++;}i++;
                   while(data[i]!='-'){rc=rc+data[i];i++;}i++;
                   while(data[i]!='\0'){p=p+data[i];i++;}i++;


                        if(flag=true){


                        cout<<"\t"<<s<<"\t\t\t"         <<b<<endl;}}}
                        if(flag==false){cout<<"\nNo Record Found in the File. "<<endl;}
                          read.close();





}

  void receiver::recbal(string a,double b)
  {
      fstream read;
                  bool flag=false;
                  read.open("Receiver1.txt");
                   if(!read){
                    cout<<"\n\tFile not exist";}
                      else{

                        string data;
                          while(!read.eof()){
                           fflush(stdin);
                            getline(read,data);
                             if(data==""){break;}

                              int i=0;

                               a="";
                                b=0;

         cout<<"\nSender Contacts\t\t Balance Received "<<endl;
           while(data[i]!='-'){a=a + data[i];i++;}i++;

                   while(data[i]!='\0'){b=b+data[i];i++;}


                        if(flag=true){


                        cout<<"\t"<<a<<"\t\t\t"         <<b<<endl;}}}
                        if(flag==false){cout<<"\nNo Record Found in the File. "<<endl;}
                          read.close();
  }
