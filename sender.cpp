#include <iostream>
#include"sender.h"
#include<string.h>
using namespace std;


sender::sender(){

 senderContact="";
   recCnic="";
     senderCnic="";
     amount2send=0;
}
sender::sender(string c,string i,string rc,double a){

 senderContact=c;
     senderCnic=i;
     amount2send=a;
     recCnic=rc;
}
void sender::setContact(string c){
senderContact=c;
}
void sender::setrecCnic(string rc){
recCnic=rc;
}
string sender::getrecCnic(){
return recCnic;
}
 void sender::setCnic(string i)
 {
     senderCnic=i;
 }
 void sender::setAmount(double a){
 amount2send=a;}

 string sender::getContact(){return senderContact;}
 string sender::getCnic(){return senderCnic;}
 double sender::getAmount(){return amount2send;}

 void sender::print(){
 cout<<"senderContact"<<senderContact<<endl;
 cout<<"senderCnic"<<senderCnic<<endl;
 cout<<"amount"<<amount2send<<endl;
  cout<<"receiver Cnic"<<recCnic<<endl;
 }

  bool sender::setflag4(bool val){flag4=val;}
  bool sender::getflag4(){return flag4;}

  void sender::send(string mob,double amt)
  {

         ofstream file;


                file.open("Receiver.txt",ios::app);
                 file<<mob<<"-"<<amt<<endl;
                  file.close();



  }

  void sender::sendbal(string c, double balll)
  {
      ofstream file;


                file.open("Receiver1.txt",ios::app);
                 file<<c<<"-"<<balll<<endl;
                  file.close();
  }

 void sender::storesendings(string m,string s,double b,string rc,int p)
 {


 cout<<m<<"-"<<s<<"-"<<b<<"-"<<rc<<"-"<<p<<endl;
     ofstream file;
      file.open("Sender.txt",ios::app);
                 file<<m<<"-"<<s<<"-"<<b<<"-"<<rc<<"-"<<p<<endl;
                  file.close();




 }


void sender::showsendings(string s, string r, double v)
{
    fstream read;
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

                              int i=0;

                               s="";
                               r="";
                                v=0;

         cout<<"\nSent From\t\t Sent to \t\tAmount sent "<<endl;
           while(data[i]!='-'){s=s+ data[i];i++;}i++;

                   while(data[i]!='-'){r=r+data[i];i++;}

                   while(data[i]!='\0'){v=v+data[i];i++;}


                        if(flag=true){


                        cout<<"\t"<<s<<"\t\t\t"         <<r<<"\t\t    "<<v<<endl;}}}
                        if(flag==false){cout<<"\nNo Record Found in the File. "<<endl;}
                          read.close();





}













