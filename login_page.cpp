#include<iostream>
#include<string>
#include<sstream>
#include<fstream>
using namespace std;
void login();
void Register();
void forgot();


int main(){
    int c;
    cout<<"\t\t_____________________________________________________\n\n ";
    cout<<"\t\t________________Welcome to login page________________\n";
    cout<<"\t\t___________________     Menu    _________________\n";
    cout<<"";
    cout<<"\t|  Press 1 to login                      |"<<endl;
    cout<<"\t|  Press 2 to Register                   |"<<endl;
    cout<<"\t|  Press 3 if you forget you password    |"<<endl;
    cout<<"\t|  Press 4 to exit                       |"<<endl;
    cout<<"please enter your choice here:";
    cin>>c;
    switch(c){
        case 1:
            login();
            break;
        case 2:
            Register();
            break;
        case 3: 
            forgot();
            break;
        case 4:
            cout<<"Thanks visit again!"<<endl;
            exit(0);
        default:
            system("cls");
            cout<<"You pressed the wrong number!"<<endl;
            main();
        
    }

}
void login(){
    int count=0;
    string UserId,passwd,id,pass;
    system("cls");
    cout<<"Please enter the username and password"<<endl;
    cout<<"Username:";
    cin>>UserId;
    cout<<"Password:";
    cin>>passwd;
    ifstream input("record.txt");
    while(input>>id>>pass){
        if(id==UserId && pass==passwd){
            count++;
            system("cls");
        }


    }
    input.close();
    if(count==1){
        cout<<UserId<<" Your Login is successful \n thanks for logging in!\n";
        main();

    }
    else{
        cout<<"\n login error \n Please check your username and password!\n";
        main();


    }



}
void Register(){
    string ruserid,rpasswrd,rid,rpass;
    system("cls");
    cout<<"Enter the Userid:";
    cin>>ruserid;
    cout<<"Enter the password:";
    cin>>rpasswrd;

    ofstream os("record.txt",ios::app);
    os<<ruserid<<" "<<rpasswrd<<endl;
    system("cls");
    cout<<"\n\t Registration is successfull!\n";
    main();







}
void forgot(){
    int choice=0;
    cout<<"\t You forgot the password? No worries \n";
    cout<<"Press 1 to search id by username "<<endl;
    cout<<"Press 2 to go back to the main menu"<<endl;
    cout<<"\t enter your choice:";
    cin>>choice;
    switch(choice){
        case 1:
        {
            int count=0;
            string sUserId,sId,sPass;
            cout<<"\n\t Enter the username which you remembered:";
            cin>>sUserId;
            ifstream f1("record.txt");
            while(f1>>sId>>sPass){
                if(sId==sUserId){
                    count++;
                }

            }
            f1.close();
            if(count==1){
                cout<<"\n Your account is found!";
                cout<<"\n Your password is:"<<sPass;
                main();

            }
            else{
                cout<<"Sorry Your account was not found!"<<endl;
                main();

            }
            break;
        }
        case 2:
            main();

        default:
            cout<<"you pressed a wrong number please try again!"<<endl;
            forgot();
                    
        

        
   
        
    
        
    }
    
}