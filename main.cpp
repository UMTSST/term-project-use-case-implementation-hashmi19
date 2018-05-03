#include <iostream>
#include <string.h>
    #include <stdio.h>
     #include <stdlib.h>
       #include <conio.h>
        #include <fstream>
  #include "Admin.h"
  #include "user.h"
  #include "sender.h"
  #include "RECEIVER.h"
  #include "file.h"
#include<cstdlib>
#include<ctime>


using namespace std;

int main()
{
    int login,v1;
    string userContact,recCnic;
    string pass;
    double balance;
    string admincont;
    string adminpass;
    int choice,choice1,choice3;
    user obj2;
 file obj4;
   receiver obj6;
    admin obj1;
    sender obj5;
     int choose;
     string recMob,yourMob;
        string num1;double amt1;
                        double amount2send;


        main:
       cout <<"\n\t\t\tWelcome to Main Menu of EasyPaisa System " <<endl;

          cout<<"\n\nPress 1 to login As Admin"<<endl;
           cout <<"\n\nPress 2 to Login as User"<<endl;
           cin>>choice;

           system("CLS");


          switch(choice)
          {
              case 1:
                   {

                  label:
                  cout<<"\n\n\tWelcome to Admin Menu" <<endl;
                  cout<<"\n\nEnter Here Admin Mobile Number:"<<endl;
                    fflush(stdin);
                    getline(cin,admincont);

                cout<<"\n\nEnter Here Admin Password:"<<endl;
                    fflush(stdin);
               getline(cin,adminpass);
               system("CLS");

               obj1.searchAdmin(admincont,adminpass);
               obj1.getflag();
               if(obj1.getflag()==1)

               {
                   label1:
                cout<<"\nPress 1 to Add A user"<<endl;
                fflush(stdin);
                cin>>choice3;
                if(choice3==1){

                   cout<<"\nEnter User Contact Number: "<<endl;
                   fflush(stdin);getline(cin,userContact);
                   cout<<"\nEnter User Password: "<<endl;
                   fflush(stdin);getline(cin,pass);
                   cout<<"Enter User Balance:"<<endl;
                   cin>>balance;
                   obj1.adduser(userContact,pass);
                   obj1.adduserMob_Bal(userContact,balance);
                    system("CLS");}
                    else if(choice3!=1)
                        {goto label1;}
               }
                else if(obj1.getflag()!=1)
                   {
                        cout<<"\nWrong choice! select again"<<endl;
                        goto label;
                   }


               break; }

              case 2:

                {
                    label2:
                    cout<<"\n\n\tWelcome to User Menu" <<endl;
                  cout<<"\n\nEnter Here Your Mobile Number:"<<endl;
                    fflush(stdin);
                    getline(cin,userContact);
                    cout<<"\n\nEnter Here Your Password:"<<endl;
                    fflush(stdin);
                    getline(cin,pass);
                    system("CLS");

                    obj2.searchuser(userContact,pass);
                    obj2.getflag1();
               if(obj2.getflag1()==1)
               {
                   here:
                   cout<<"\nYou Are Logged In"<<endl;
                   cout<<"\nPress 1 to Send Money"<<endl;
                   cout<<"\nPress 2 to Receive Money"<<endl;
                   cout<<"\nPress 3 to send Balance" <<endl;
                   cout<<"\nPress 4 to Show All Transactions"<<endl;
                   cout<<"\nPress 5 to Exit"<<endl;
                   cin>>choose;
                   system("cls");
                   switch(choose)
                   {
                   case 1:
                    {

                        galat:
                        cout<<"\nEnter Mobile Number of Receiver:"<<endl;
                        fflush(stdin);
                        getline(cin,recMob);


                        obj4.searchinfo(recMob);

                        obj4.getflag3();

                        if(obj4.getflag3()==true)
                       //bool flag=true;
                       //if (flag==true)
                        {
                            cout<<"\nEnter Your Mobile:"<<endl;
                        fflush(stdin);
                        getline(cin,yourMob);

                          cout<<"\nEnter Your receiver CniC:"<<endl;
                          fflush(stdin);
                        getline(cin,recCnic);
                       cout<<"\nEnter Amount to Send:"<<endl;
                        cin>>amount2send;
srand (time(NULL));
    v1 = rand() % 1000;


                        obj5.send(yourMob,amount2send);
                        obj5.setrecCnic(recCnic);
                        obj6.setAmountRec(amount2send);
                        obj5.storesendings(yourMob,recMob,amount2send,recCnic,v1);
                        obj6.setRecCont(yourMob);
                        cout<<"\nAmount Sent:"<<endl;
                        cout<<"\nPress Y to back to User Menu"<<endl;
                        char b;
                        cin>>b;
                        system("cls");
                        if(b=='y'||b=='Y')
                        {
                            goto here;
                        }
                        else {
                            exit;
                        }

                        }
                        else if(obj4.getflag3()==false)
                         {
                            goto galat;
                         }


                          break;}


                   case 2:
                       {



                           obj6.getallreceivings();



                           cout<<"\n        Top up Menu"<<endl;
                           obj6.recbal(num1,amt1);
                           break;

                       }


                   case 3:
                    {
                        cout<<"\nEnter Mobile Number where to Send Balance:"<<endl;

                        fflush(stdin);
                        getline(cin,num1);
                        cout<<"\nEnter Load:"<<endl;
                        cin>>amt1;
                        system("cls");

                        obj5.sendbal(num1,amt1);

                        break;



                    }

                   case 4:
                    {

                            cout<<"\n\tFrom Sending Side:"<<endl;
                            obj5.showsendings(yourMob,recMob,amount2send);
                            cout<<"\n\tFrom Receiving side:"<<endl;
                            obj6.getallreceivings();



                    }


                   }


               }

                 else if(obj2.getflag1()!=1)
                   {
                        cout<<"\nWrong choice! select again"<<endl; goto label2;
                   }


                   case 5:
                    {
                        exit;


                    }


          break;}


              default:
                {
                     cout<<"\nWrong choice! select again"<<endl;
                     goto main;
                }

              }


    return 0;
}
