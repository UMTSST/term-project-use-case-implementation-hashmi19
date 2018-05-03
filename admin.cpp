#include <iostream>
#include <string.h>
    #include <stdio.h>
     #include <stdlib.h>
       //#include <conio.h>
        #include <fstream>
        #include "Admin.h"

        using namespace std;


  admin::admin()
  {
      admpass="";
      admphone="";


  }

  admin::admin(string Aphone,string Apass)
  {
      admpass=Apass;
      admphone=Aphone;


  }


  void admin::setphone(string Aphone)
  {
      admphone=Aphone;


  }

  void admin::setpass(string Apass)
  {
      admpass=Apass;


  }


  string admin::getphone()
  {
      return admphone;
  }

   string admin::getpass()
  {
      return admpass;
  }


  bool admin::setflag(bool val)
  {
      flag=val;
  }


  bool admin::getflag()
  {
      return flag;
  }
  bool admin::searchAdmin(string admincont,string adminpass)
  {

              bool flag=false;
                     string data;
                      ifstream read;
                       read.open("Admin.txt");
                        if(!read){cout<<"File not exist"<<endl;}
                         else{
                          while(!read.eof()){
                            fflush(stdin);
                             getline(read,data);
                              if(data==""){break;}
                                int i=0;
                                 admphone="";
                                  admpass="";

                                  while(data[i]!='-'){admphone=admphone+data[i];i++;}i++;
                                   while(data[i]!='\0'){admpass=admpass+data[i];i++;}i++;


                                    if(admphone==admincont && admpass==adminpass){
                                     flag=true;
                                     break;}}




                                if(flag==true){
                                return setflag(true);
                                }

                                else{cout <<"Incorrect phone or password! enter Again";
                                return setflag(false);}read.close();}}



        void admin::adduser(string contact,string pass){
               ofstream file;


                file.open("User.txt",ios::app);
                 file<<contact<<"-"<<pass<<endl;
                  file.close();}



        void admin::adduserMob_Bal(string ucontact,double ubal)

       {
               ofstream file;


                file.open("UserContBal.txt",ios::app);
                 file<<ucontact<<"-"<<ubal<<endl;
                  file.close();}


