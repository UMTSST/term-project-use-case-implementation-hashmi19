#include <iostream>
#include <string.h>
    #include <stdio.h>
     #include <stdlib.h>
       #include <conio.h>
        #include <fstream>

  #include "user.h"
  #include "sender.h"
  #include "RECEIVER.h"
  #include "file.h"


  using namespace std;




 bool file::setflag3(bool val1)
 {
     flag3=val1;
 }


 bool file::getflag3()
 {
     return flag3;
 }


  bool file::searchinfo(string recMob)
  {

              bool flag=false;
                     string data;
                      ifstream read;
                       read.open("DB.txt");
                        if(!read){cout<<"File not exist"<<endl;}
                         else{
                          while(!read.eof()){
                            fflush(stdin);
                             getline(read,data);
                              if(data==""){break;}
                                int i=0;
                                 srec="";


                                  while(data[i]!='-'){srec=srec+data[i];i++;}i++;



                                    if(srec==recMob){
                                     flag=true;
                                     break;}}




                                if(flag==true){
                                return setflag3(true);

                                }

                                else{cout <<"Incorrect phone or password! enter Again";
                                return setflag3(false);}
                                read.close();}}






