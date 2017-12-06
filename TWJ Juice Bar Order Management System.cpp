#include <iostream>
#include <fstream>
#include <conio.h>
#include <vector>
using namespace std;


void addjuice();
void editjuice();
void deletejuice();
void viewjuice();
void searchjuice();
void savefile();

class juice {
public:
        int i;
        string orderno;
        string date;
        string fruit;

};
juice mb[100];

int menu()
{
    int option;
        cout<<"\nWhat would you like to do?"<<endl;
        cout<<"1. Add new order"<<endl;
        cout<<"2. Edit order"<<endl;
        cout<<"3. Delete order"<<endl;
        cout<<"4. View order details"<<endl;
        cout<<"5. Search order"<<endl;
        cout<<"6. Save file"<<endl;
        cout<<"7. Exit Application"<<endl;
        cout<<"\nAction :";
        cin>>option;

        switch (option){
        case 1: addjuice();
        break;
        case 2: editjuice();
        break;
        case 3: deletejuice();
        break;
        case 4: viewjuice();
        break;
        case 5: searchjuice();
        break;
        case 6: savefile();
        break;
        case 7: cout<<"\nThank you and have a nice day!"<<endl;
        break;
        default: cout<<"Invalid choice.";
        menu();
        break;}
}

void addjuice()
{
    char choice,fruittype;
    char ans;
    string word;
    int i=0,x=0;
    word=mb[x].fruit;
                while (word!="")
                {
                    word=mb[x].fruit;
                    x++;
                }

                if(i<x)
                {
                    i=x-1;
                }

                do{
                cout<<"Enter order number (e.g. A001): ";
                cin>>mb[i].orderno; //add order number

                cout<<"Enter order date (dd-mm-yyyy): ";
                cin>>mb[i].date; //add order date

                cout<<"Please choose one type of fruit: \n"
                <<"A. Apple\n"
                <<"B. Orange\n"
                <<"C. Pineapple\n"
                <<"D. Starfruit\n"
                <<"E. Carrot\n"
                <<"Enter your choice: ";
                cin>>fruittype;
                if(fruittype=='a' || fruittype == 'A')
                            {mb[i].fruit="Apple";
                           cout<<"\n-Order added successfully!-"<<endl;}
                else if(fruittype=='b' || fruittype == 'B')
                            {mb[i].fruit="Orange";
                            cout<<"\n-Order added successfully!-"<<endl;}
                else if(fruittype=='c' || fruittype == 'C')
                            {mb[i].fruit="Pineapple";
                            cout<<"\n-Order added successfully!-"<<endl;}
                else if(fruittype=='d' || fruittype == 'D')
                            {mb[i].fruit="Starfruit";
                            cout<<"\n-Order added successfully!-"<<endl;}
                else if(fruittype=='e' || fruittype == 'E')
                            {mb[i].fruit="Carrot";
                            cout<<"\n-Order added successfully!-"<<endl;}
                else
                {cout<<"Invalid choice."<<endl;}

                i++;
                cout<<"\nWould you like to add another new record?(Y/N): ";
                cin>>choice;}
                while (choice=='Y' ||choice=='y') ;
                cout<<"Back to main menu? (Y/N): ";
                cin>>ans;
            if (ans == 'Y'||ans == 'y')
                {
                menu();
                }
            else
                {
                cout<<"\nThank you and have a nice day!"<<endl;
                }
}

void editjuice()
{
char fruit;
int i=0;
int num=0;
string word;
char ans;
char answer;
        do{

                cout<<i+1<<".Order Number: "<<mb[i].orderno<<"    Date: "<<mb[i].date<<"    Fruit: "<<mb[i].fruit<<endl;

                i++;
                word=mb[i].orderno;
           }while(word!="");

do{
    cout<<"Choose the number to edit the record: ";
    cin>>num;
            cout<<"A. Apple\n"
                <<"B. Orange\n"
                <<"C. Pineapple\n"
                <<"D. Starfruit\n"
                <<"E. Carrot\n"
                <<"Enter fruit: ";
            cin>>fruit;                                             // fruit ( according to menu )
            if(fruit=='a' || fruit == 'A')
                            {mb[num-1].fruit="Apple";
                            cout<<"\n-Successfully edited-"<<endl;
                            }
            else if(fruit=='b' || fruit == 'B')
                            {mb[num-1].fruit="Orange";
                            cout<<"\n-Successfully edited-"<<endl;
                            }
            else if(fruit=='c' || fruit == 'C')
                            {mb[num-1].fruit="Pineapple";
                            cout<<"\n-Successfully edited-"<<endl;
                            }
            else if(fruit=='d' || fruit == 'D')
                            {mb[num-1].fruit="Starfruit";
                            cout<<"\n-Successfully edited-"<<endl;
                            }
            else if(fruit=='e' || fruit == 'E')
                            {mb[num-1].fruit="Carrot";
                            cout<<"\n-Successfully edited-"<<endl;
                            }
            else
                cout<<"-Edit unsuccessful-";

        cout<<"Would you like to edit another record?(Y/N): ";
        cin>>answer;
}
        while(answer=='Y' || answer=='y');
        cout<<"Back to main menu? (Y/N): ";
        cin>>ans;
            if (ans == 'Y'||ans == 'y')
                {
                menu();
                }
            else
                {
                cout<<"\nThank you and have a nice day!"<<endl;
                }

}
void deletejuice()
{
int i=0;
int num;

string word,del;
char answer;
char ans;
   do {

            cout<<i+1<<". Order Number: "<<mb[i].orderno<<"    Date: "<<mb[i].date<<"    Fruit: "<<mb[i].fruit<<endl;

            i++;
            word=mb[i].orderno;
      }while(word!="");
do{
    cout<<"Please select the number you want to delete: ";
    cin>>num;

    int c=0;
    for(int j=num-1;j<i-1;j++)
        mb[j]=mb[j+1];

    for(int j=0;j<i-1;j++)
        {
            c++;
        }

            mb[c].fruit="";
            mb[c].date="";
            mb[c].orderno="";

            cout<<"-Order successfully deleted!-\n"<<endl;


                cout<<"Would you like to delete another record?(Y/N): ";
                cin>>answer;

               } while(answer=='Y' || answer=='y');

            cout<<"Back to main menu? (Y/N): ";
            cin>>ans;
            if (ans == 'Y'||ans == 'y')
                {
                menu();
                }
            else
                {
                cout<<"\nThank you and have a nice day!"<<endl;
                }

}

void viewjuice()
{
int i=0;
char ans;
string num = mb[i].orderno;
   while(num!="")
    {

        cout<<i+1<<". Order Number: "<<mb[i].orderno<<"    Date: "<<mb[i].date<<"    Fruit: "<<mb[i].fruit<<endl;
        i++;
        num=mb[i].orderno;
    }
    cout<<"Back to main menu? (Y/N): ";
    cin>>ans;
            if (ans == 'Y'||ans == 'y')
                {
                menu();
                }
            else
                {
                cout<<"\nThank you and have a nice day!"<<endl;
                }

}

void searchjuice()
{
    string orderno;
    char answer,ans;

do{
    cout<<"Search by Order number: ";
    cin.ignore();
    getline(cin,orderno);


int i=0,record;
string num;

   do {
        num=mb[i].orderno;
            if(orderno == num)
                {
                    cout<<endl<<i+1<<". Order Number: "<<mb[i].orderno<<"    Date: "<<mb[i].date<<"    Fruit: "<<mb[i].fruit<<endl;
                    record=1;
                }

        i++;
      }while(num!="");


    if(record==0)
    {
        cout<<"\nNo record found."<<endl;
    }

    cout<<"\nWould you like to find another record? (Y/N): ";
    cin>>answer;
 }
 while(answer == 'Y'||answer == 'y');

        cout<<"Back to main menu? (Y/N): ";
        cin>>ans;
            if (ans == 'Y'||ans == 'y')
                {
                menu();
                }
            else
                {
                cout<<"\nThank you and have a nice day!"<<endl;
                }


}

void savefile(){
    char ans;
    int i=0;
        // open a file in write mode.
   ofstream fout;
   fout.open("juice.txt",ios::app);
if(fout.fail()){
    cout<<"Save unsuccessful!"<<endl;}

string num=mb[i].orderno;
while(num!="")
    {

        fout<<i+1<<". Order Number: "<<mb[i].orderno<<"    Date: "<<mb[i].date<<"    Fruit: "<<mb[i].fruit<<endl;

        i++;
        num=mb[i].orderno;
    }

   // close the opened file.
   fout.close();

   // open a file in read mode.
   ifstream fin;
   fin.open("juice.txt");

   // write the data at the screen.

   // again read the data from the file and display it.

   // close the opened file.
   fin.close();


    cout<<"\nSave success!\n\n";
    cout<<"Back to main menu? (Y/N): ";
    cin>>ans;
            if (ans == 'Y'||ans == 'y')
                {
                menu();
                }
            else
                {
                cout<<"\nThank you and have a nice day!"<<endl;
                }


}

int main(){

cout<<"* * * * * * * * * * * * * * * * \n";
cout<<" * * * * * * * * * * * * * * *  \n";
cout<<"   Welcome to TWJ Juice Bar\n";
cout<<"  \"Freshness you can taste.\""<<endl;
cout<<" * * * * * * * * * * * * * * *  \n";
cout<<"* * * * * * * * * * * * * * * * \n"<<endl;

string username, password = "";
char ch;
char cont;
do {
try{
  cout << "Username: ";
  getline(cin, username);
  cout << "Password: ";
  ch = _getch();
  while(ch != 13){
    password.push_back(ch);
    cout<<'*';
    ch= _getch();
  }
  cout<<"\n";
if (username == "twjadmin" && password =="admin"){
      throw password;}
else
  cout<<"Invalid username or password. Please try again."<<endl;

}
  catch(string password){
        if (username == "twjadmin")
            menu();
}
}
  while (username != "twjadmin" || password !="admin");
}
