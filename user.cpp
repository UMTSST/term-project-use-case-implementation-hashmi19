#include <iostream>
#include <string.h>
    #include <stdio.h>
     #include <stdlib.h>
       //#include <conio.h>
        #include <fstream>
#include "user.h"

using namespace std;


user::user()
{

    userC="";
    userP="";

}

user::user(string userContact, string pass)
{
    userC=userContact;
    userP=pass;
}


void user::setUserC(string userContact)
{
    userC=userContact;
}


void user::setUpass(string pass)
{
    userP=pass;
}

string user::getuserC()
{return userC; }

string user::getUpass()
{return userP; }

     bool user::setflag1(bool val1)
  {
      flag1=val1;
  }


  bool user::getflag1()
  {
      return flag1;
  }



 bool user::searchuser(string userContact,string pass)
  {

              bool flag=false;
                     string data;
                      ifstream read;
                       read.open("User.txt");
                        if(!read){cout<<"File not exist"<<endl;}
                         else{
                          while(!read.eof()){
                            fflush(stdin);
                             getline(read,data);
                              if(data==""){break;}
                                int i=0;
                                userC="";
                                 userP="";

                                  while(data[i]!='-'){userC=userC+data[i];i++;}i++;
                                   while(data[i]!='\0'){userP=userP+data[i];i++;}i++;


                                    if(userC==userContact && userP==pass){
                                     flag=true;
                                     break;}}




                                if(flag==true){
                                return setflag1(true);
                                }

                                else{cout <<"Incorrect phone or password! enter Again";
                                return setflag1(false);}read.close();}}
