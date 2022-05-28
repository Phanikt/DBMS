#include <iostream>
#include <fstream>
using namespace std;

static int totrec=0;

int main()
{
    int choice;
    while(1)
    {
        cout<<"nChoose your choice :: n";
        cout<<"1) Add New Recordn";
        cout<<"2) Append New recordsn";
        cout<<"3) Modifying or Append new recordsn";
        cout<<"4) Display recordsn";
        cout<<"5) Exitn";
        cout<<"nEnter your choice :: ";
        cin>>choice;

        switch (choice)
        {
          case 1 :
                {
                     ofstream outfile;
                     outfile.open("C:UsersacerDocumentsfile4.txt",ios::out);
                     cout<<"nnPlease Enter Details :: n";
                     cout<<"nEnter the name :: ";
                     char name[20];
                     cin>>name;
                     outfile<<name<<endl;
                     cout<<"nEnter Age :: ";
                     int age;
                     cin>>age;
                     outfile<<age<<endl;
                     cout<<"nEnter programming language known :: ";
                     char lang[25];
                     cin>>lang;
                     outfile<<lang<<endl;
                     totrec= totrec + 1;
                     outfile.close();
                }
                 break;

          case 2 :
                {
                     ofstream outfile;
                     outfile.open("C:UsersacerDocumentsfile4.txt",ios::app);
                     cout<<"nnPlease Enter Details :: n";
                     cout<<"nEnter the name :: ";
                     char name[20];
                     cin>>name;
                     outfile<<name<<endl;
                     cout<<"nEnter Age :: ";
                     int age;
                     cin>>age;
                     outfile<<age<<endl;
                     cout<<"nEnter programming language known :: ";
                     char lang[25];
                     cin>>lang;
                     outfile<<lang<<endl;
                     totrec= totrec + 1;
                     outfile.close();
                 }
                 break;

          case 3 :
                {
                     ofstream outfile;
                     outfile.open("C:UsersacerDocumentsfile4.txt",ios::ate);
                     cout<<"nWant to add new record ::nEnter y or n ? ";
                     char ans;
                     cin>>ans;
                     if(ans=='y' || ans=='Y')
                     {
                         cout<<"nnPlease Enter Details :: n";
                         cout<<"nEnter the name :: ";
                         char name[20];
                         cin>>name;
                         outfile<<name<<endl;
                         cout<<"nEnter Age :: ";
                         int age;
                         cin>>age;
                         outfile<<age<<endl;
                         cout<<"nEnter programming language known :: ";
                         char lang[25];
                         cin>>lang;
                         outfile<<lang<<endl;
                         totrec= totrec + 1;
                     }
                     outfile.close();
                }
                 break;

          case 4 :
                {
                     ifstream infile;
                     infile.open("C:UsersacerDocumentsfile4.txt",ios::in);
                     const int size=80;
                     char line[size];
                     int counter=totrec;
                     while(counter > 0)
                     {
                     infile.getline(line,size);
                     cout<<"nnNAME     : "<<line<<endl;
                     infile.getline(line,size);
                     cout<<"AGE      : "<<line<<endl;
                     infile.getline(line,size);
                     cout<<"LANGUAGE : "<<line<<endl;
                     counter--;
                     }
                     infile.close();
                }
                    break;

         case 5  :
                exit(0);

          default :
                cout<<"nInvalid ChoicenTRY AGAIN.......n";
          }
    }
    return 0;
}
