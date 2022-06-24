#include<iostream>
using namespace std;
int total_amount=0;
void check_balance(){
    cout<<"this is your current balance:"<<total_amount<<endl;

}
void deposit(){
    int deposit;
    cout<<"we have this special offer going on if you add 10000 rupees or more than you will get 400 rupees add by the bank"<<endl;
    cout<<"how much are you gonna deposit sir/mam please enter the amount here:";
    cin>>deposit;
    if(deposit>=10000){
        cout<<"congratulation the amount just got added!"<<endl;
        deposit+=400;
        
    }
    total_amount+=deposit;
    
}
void withdraw(){
    int withdraw;
    cout<<"how much are you gonna withdraw sir/mam please enter the amount here:";
    cin>>withdraw;
    if(total_amount-withdraw>0){
        cout<<"you have successfully withdraw the amount:"<<withdraw<<"from bank!"<<endl;
        total_amount-=withdraw;


    }
    else{
        cout<<"sorry you don't have that much amount you only have"<<total_amount<<"in bank!"<<endl;

    }

}

int main()
{
    cout<<"Welcome to the national bank of india"<<endl;
    m:
    cout<<"what would you like to do?"<<endl;
    int choice;
    cout<<"\n\n1->check balance";
    cout<<"\n2->withdraw";
    cout<<"\n3->Deposit";
    cout<<"\n4->exit";
    cout<<"\nwhat would you like to choose:";
    cin>>choice;
    switch(choice){
        case 1:
            check_balance();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            deposit();
            break;
        case 4:
            cout<<"Thanks for visiting i hope you come back soon!";
            exit(0);
        default:
            cout<<"You press the wrong button try pressing the right button!";
            break;
        

        
    }
    goto m;

}