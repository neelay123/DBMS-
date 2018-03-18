#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
    ifstream ifm;
	ofstream ofs;
	char x,ch,y,b,uname[30],name[30],IDcode[10],IDcode1[10],IDcode2[10],pass[10], email[31];
	int age,k,i,j,age1,a;
 cout<<"\n\n\n\n\n\n\t\t\tusername : ";
 cin.getline(uname,30);
 cout<<"\n\t\t\tPassword : ";
 cin.getline(pass,10);
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\t\t\t\tLOADING";
 for(i=0;i<7;i++)
 {
     cout<<".";
     for(j=0;j<=60000000;j++)
     {

     }
 }
 system("cls");
 if((strcmp(uname,"neelay")==0)&&(strcmp(pass,"cybernet")==0))
{for(j=0;j<2;j++)
 {
     for(i=0;i<78;i++)
     {
        cout<<"*";
     }
     cout<<"\n";
 }
 cout<<"                             IIII CYBERNET IIII                                 ";
 for(j=0;j<2;j++)
 {
     for(i=0;i<78;i++)
     {
        cout<<"*";
     }
     cout<<"\n";
 }
 cout<<"\n\n\n\n\n\n\n\n\t\t\t\tWELCOME\n\n\t\t\t\t";
  for(j=0;j<=100000000;j++)
 {

 }
 cout<<uname;
 for(j=0;j<=100000000;j++)
 {

 }                                                          //***need to make it uppercase**
 cout<<"\n\n\t\t\t";
 system("pause");
 system("cls");
 start:
 for(j=0;j<2;j++)
 {
     for(i=0;i<78;i++)
     {
        cout<<"*";
     }
     cout<<"\n";
 }
 cout<<"                             IIII CYBERNET IIII                                 ";
 for(j=0;j<2;j++)
 {
     for(i=0;i<78;i++)
     {
        cout<<"*";
     }
     cout<<"\n";
 }
 cout<<"\n\n\n1. Enter data \n2. View data";
 cout<<"\nWhat would you like to do ? : ";
 cin>>k;
 fflush(stdin);
 switch(k)
   {case 1:  fi:
             system("cls");
             for(j=0;j<2;j++)
             {
                for(i=0;i<78;i++)
                {
                   cout<<"*";
                }
             cout<<"\n";
             }
             cout<<"                             IIII CYBERNET IIII                                 ";
             for(j=0;j<2;j++)
             {
                for(i=0;i<78;i++)
                {
                   cout<<"*";
                }
             cout<<"\n";
             }
             cout<<"\n\nEnter the IDcode: ";
             cin.getline(IDcode2, 10);
	         fflush(stdin);
	          ifm.open("details.txt", ios::in);
	          while(!ifm.eof())
                           {
		                      ifm>>IDcode>>name>>age>>email;
			                  if(strcmp(IDcode, IDcode2)==0)
                              {
                                  cout<<"\n\n\n\t\t\tEntered IDcode already exist \n\n\t\t\t";
                                  system("pause");
                                  ifm.close();
								  goto fi;
                              }

                           }
             ifm.close();
             cout<<"\nEnter the name: ";
             cin.getline(name, 30);
             fflush(stdin);
             cout<<"Enter the age: ";
	         cin>>age;
	         fflush(stdin);
             cout<<"Enter the email id: ";
	         cin.getline(email, 31);
	         fflush(stdin);
          	 ofs.open("details.txt", ios::app);
			 ofs<<IDcode2<<" "<<name<<" "<<age<<" "<<email<<"\n";
	         cout<<"Successfully saved!!!";
	         ofs.close();
	         system("cls");
             for(j=0;j<2;j++)
             {
                for(i=0;i<78;i++)
                {
                   cout<<"*";
                }
             cout<<"\n";
             }
             cout<<"                             IIII CYBERNET IIII                                 ";
             for(j=0;j<2;j++)
             {
                for(i=0;i<78;i++)
                {
                   cout<<"*";
                }
             cout<<"\n";
             }
			 cout<<"\n\n\ndo you want to continue ?(y/n) : ";
	         cin>>x;
	         fflush(stdin);
	         if(x=='y'||x=='Y')
	         {
	            goto fi;
             }
             break;

	case 2 : system("cls");
	         for(j=0;j<2;j++)
             {
                for(i=0;i<78;i++)
                {
                   cout<<"*";
                }
             cout<<"\n";
             }
             cout<<"                             IIII CYBERNET IIII                                 ";
             for(j=0;j<2;j++)
             {
                for(i=0;i<78;i++)
                {
                   cout<<"*";
                }
             cout<<"\n";
             }
	         ifm.open("details.txt", ios::in);
             if(!ifm)
		     {
		        printf("File is empty !!!!!!");
	     	 }
		     else
		     {  cout<<"\n\n\n1. Search details of a single employee \n2. View entire database ";
                cout<<"\nWhat would you like to do ? : ";
                cin>>a;
                fflush(stdin);
		        cout<<"\n";
	            switch(a)
		        {  case 1: system("cls");
                           for(j=0;j<2;j++)
                           {
                              for(i=0;i<78;i++)
                              {
                                 cout<<"*";
                              }
                              cout<<"\n";
                           }
                           cout<<"                             IIII CYBERNET IIII                                 ";
                           for(j=0;j<2;j++)
                           {
                              for(i=0;i<78;i++)
                              {
                                 cout<<"*";
                              }
                              cout<<"\n";
                           }
                           cout<<"\n\n\nEnter the IDcode : ";
			               cin.getline(IDcode1,10);
			               fflush(stdin);
	          	           while(!ifm.eof())
                           {
		                      ifm>>IDcode>>name>>age>>email;
			                  if(strcmp(IDcode, IDcode1)==0)
                              {
                                  cout<<"\t\t\tIDcode : "<<IDcode<<"\n\n\t\tname : "<<name<<"\t\t\t\tAge : "<<age<<"\n\n\t\tEmail : "<<email<<"\n\n\n\n";
                                  break;
                              }
                           }
			               break;
		           case 2: system("cls");
		                   for(j=0;j<2;j++)
                           {
                              for(i=0;i<78;i++)
                              {
                                 cout<<"*";
                              }
                              cout<<"\n";
                           }
                           cout<<"                             IIII CYBERNET IIII                                 ";
                           for(j=0;j<2;j++)
                           {
                              for(i=0;i<78;i++)
                              {
                                 cout<<"*";
                              }
                              cout<<"\n";
                           }
                           cout<<"\n\n";
		                   while(ifm>>IDcode>>name>>age>>email)
                           {
                              cout<<"\t\t\tIDcode : "<<IDcode<<"\n\n\t\tname : "<<name<<"\t\t\t\tAge : "<<age<<"\n\n\t\tEmail : "<<email<<"\n\n\n\n";
		                   }
                           break;
		          default: cout<<"Invalid input !!!";
			               break;
                }
             ifm.close();
		     }
             break;

    default: cout<<"Invalid input !!!";
             break;
   }
 cout<<"\n\nDo you want to exit ?(y/n) : ";
 cin>>b;
 if(b=='n'||b=='N')
 {   system("cls");
     goto start;
 }
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tSAVING";
 for(i=0;i<7;i++)
 {
     cout<<".";
     for(j=0;j<=55000000;j++)
     {

     }
 }
 system("cls");
 cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tSHUTTING DOWN";
 for(i=0;i<7;i++)
 {
     cout<<".";
     for(j=0;j<=60000000;j++)
     {

     }
 }
 cout<<"\n\n\n\n\n\n\n\n";
 }
 else
    if(strcmp(pass,"infotech")==0)
	{
	         for(j=0;j<2;j++)
             {
                 for(i=0;i<78;i++)
                 {
                    cout<<"*";
                 }
                 cout<<"\n";
             }
             cout<<"                             IIII CYBERNET IIII                                 ";
             for(j=0;j<2;j++)
             {
                 for(i=0;i<78;i++)
                 {
                    cout<<"*";
                 }
                 cout<<"\n";
             }
             cout<<"\n\n\n\n\n\n\n\n\t\t\t\tWELCOME\n\n\t\t\t\t";
             for(j=0;j<=100000000;j++)
             {

             }
             cout<<uname;
             for(j=0;j<=100000000;j++)
             {

             }                                                           //***need to make it uppercase**
             cout<<"\n\n\t\t\t";
             system("pause");
	         first:
	         system("cls");
	         for(j=0;j<2;j++)
             {
                for(i=0;i<78;i++)
                {
                   cout<<"*";
                }
             cout<<"\n";
             }
             cout<<"                             IIII CYBERNET IIII                                 ";
             for(j=0;j<2;j++)
             {
                for(i=0;i<78;i++)
                {
                   cout<<"*";
                }
             cout<<"\n";
             }
	         ifm.open("details.txt", ios::in);
             if(!ifm)
		     {
		        printf("File is empty !!!!!!");
	     	 }
		     else
		     {  cout<<"\n1. Search details of a single employee \n2. View entire database ";
                cout<<"\nWhat would you like to do ? : ";
                cin>>a;
                fflush(stdin);
		        cout<<"\n";
	            switch(a)
		        {  case 1: system("cls");
                           for(j=0;j<2;j++)
                           {
                              for(i=0;i<78;i++)
                              {
                                 cout<<"*";
                              }
                              cout<<"\n";
                           }
                           cout<<"                             IIII CYBERNET IIII                                 ";
                           for(j=0;j<2;j++)
                           {
                              for(i=0;i<78;i++)
                              {
                                 cout<<"*";
                              }
                              cout<<"\n";
                           }
                           cout<<"\n\nEnter the IDcode : ";
			               cin.getline(IDcode1,10);
			               fflush(stdin);
	          	           while(!ifm.eof())
                           {
		                      ifm>>IDcode>>name>>age>>email;
			                  if(strcmp(IDcode, IDcode1)==0)
                              {
                                  cout<<"\t\t\tIDcode : "<<IDcode<<"\n\n\t\tname : "<<name<<"\t\t\t\tAge : "<<age<<"\n\n\t\tEmail : "<<email<<"\n\n\n\n";
                                  break;
                              }
                           }
			               break;
		           case 2: system("cls");
		                   for(j=0;j<2;j++)
                           {
                              for(i=0;i<78;i++)
                              {
                                 cout<<"*";
                              }
                              cout<<"\n";
                           }
                           cout<<"                             IIII CYBERNET IIII                                 ";
                           for(j=0;j<2;j++)
                           {
                              for(i=0;i<78;i++)
                              {
                                 cout<<"*";
                              }
                              cout<<"\n";
                           }
		                   cout<<"\n\n";
		                   while(ifm>>IDcode>>name>>age>>email)
                           {
                              cout<<"\t\t\tIDcode : "<<IDcode<<"\n\n\t\tname : "<<name<<"\t\t\t\tAge : "<<age<<"\n\n\t\tEmail : "<<email<<"\n\n\n\n";
		                   }
                           break;
		          default: cout<<"Invalid input !!!";
			               break;
                }
             ifm.close();
		     }
		     cout<<"\n\nDo you want to exit ?(y/n) : ";
             cin>>b;
             if(b=='n'||b=='N')
             {   system("cls");
                 goto first;
             }
             system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tSAVING";
             for(i=0;i<7;i++)
             {
                 cout<<".";
                 for(j=0;j<=55000000;j++)
                 {

                 }
             }
             system("cls");
             cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\tSHUTTING DOWN";
             for(i=0;i<7;i++)
             {
                cout<<".";
                for(j=0;j<=60000000;j++)
                {

                }
             }
             cout<<"\n\n\n\n\n\n\n\n";
	}
  else cout<<"\n\n\n\n\n\n\n\n\t\t\t\tInvalid input !!!\n\n\n\n\n\n\n\n";
  return 0;
}
