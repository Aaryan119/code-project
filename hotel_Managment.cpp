#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to the luxury hotel sir!"<<endl;
    int quantity;
    int choice;
    int qrooms=0,qpasta=0,qburger=0,qnoodles=0,qshake=0,qchicken=0;
    int Srooms=0,Spasta=0,Sburger=0,Snoodles=0,Sshake=0,Schicken=0;
    //price of the all rooms;
    int Trooms=0,Tpasta=0,Tburger=0,Tnoodles=0,Tshake=0,Tchicken=0;

    cout<<"\n Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>qrooms;
    cout<<"\n quantity of pasta available:";
    cin>>qpasta;
    cout<<"\n quantity of Burger available:";
    cin>>qburger;
    cout<<"\n quantity of noodles available:";
    cin>>qnoodles;
    cout<<"\n quantity of Shake available:";
    cin>>qshake;
    cout<<"\n quantity of Chicken available:";
    cin>>qchicken;


    m:
    cout<<"\n\n\n Please select the select from the option"<<endl;
    cout<<"\n 1->Rooms";
    cout<<"\n 2->Pasta";
    cout<<"\n 3->Burger";
    cout<<"\n 4->Noodles";
    cout<<"\n 5->Shake";
    cout<<"\n 6->Chicken";
    cout<<"\n 7->information regarding sales and collection";
    cout<<"\n 8->Exit";
    
    cout<<"\n\n\n Enter the choice :";
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"\n\n how many rooms you want:";
            cin>>quantity;
            if(qrooms-Srooms>=quantity){
                Srooms+=quantity;
                Trooms+=quantity*1900;
                cout<<"total rooms you booked are:"<<Srooms<<"\t the total price of the rooms are:"<<Trooms<<endl;



            }
            else{
                cout<<"we only have :"<<qrooms-Srooms<<"\tif you want you can select from these"<<endl;
                

            }
            break;
        case 2:
            cout<<"\n\n how many quantity of pasta you want:";
            cin>>quantity;
            if(qpasta-Spasta>=quantity){
                Spasta+=quantity;
                Tpasta+=quantity*100;
                cout<<"total pasta you booked are:"<<Spasta<<"\t the total price of the pasta are:"<<Tpasta<<endl;



            }
            else{
                cout<<"we only have :"<<qpasta-Spasta<<"\tquantity if you want you can select from these"<<endl;
                

            }
            break;
        
        case 3:
            cout<<"\n\n how many quantity of burger you want:";
            cin>>quantity;
            if(qburger-Sburger>=quantity){
                Sburger+=quantity;
                Tburger+=quantity*300;
                cout<<"total burger you booked are:"<<Spasta<<"\t the total price of the burger are:"<<Tburger<<endl;



            }
            else{
                cout<<"we only have :"<<qburger-Sburger<<"\tquantity if you want you can select from these"<<endl;
                

            }
            break;
        
        case 4:
            cout<<"\n\n how many quantity of noodles you want:";
            cin>>quantity;
            if(qnoodles-Snoodles>=quantity){
                Snoodles+=quantity;
                Tnoodles+=quantity*200;
                cout<<"total noodles you booked are:"<<Snoodles<<"\t the total price of the noodles are:"<<Tnoodles<<endl;



            }
            else{
                cout<<"we only have :"<<qnoodles-Snoodles<<"\tquantity if you want you can select from these"<<endl;
                

            }
            break;
        case 5:
            cout<<"\n\n how many quantity of shake you want:";
            cin>>quantity;
            if(qshake-Sshake>=quantity){
                Sshake+=quantity;
                Tshake+=quantity*800;
                cout<<"total shake you booked are:"<<Sshake<<"\t the total price of the shake are:"<<Tshake<<endl;



            }
            else{
                cout<<"we only have :"<<qshake-Sshake<<"\tquantity if you want you can select from these"<<endl;
                

            }
            break;
        case 6:
            cout<<"\n\n how many quantity of chicken you want:";
            cin>>quantity;
            if(qchicken-Schicken>=quantity){
                Schicken+=quantity;
                Tchicken+=quantity*1300;
                cout<<"total chicken you booked are:"<<Schicken<<"\t the total price of the chicken are:"<<Tchicken<<endl;



            }
            else{
                cout<<"we only have :"<<qchicken-Schicken<<"\tquantity if you want you can select from these"<<endl;
                

            }
            break;

        case 7:
            cout<<"\n\n details of collection and sales";
            cout<<"\n=================================================";
            cout<<"\n number of rooms we have:"<<qrooms;
            cout<<"\n number of rooms we sold:"<<Srooms;
            cout<<"\n number of rooms we have now:"<<qrooms-Srooms;
            cout<<"\n total rooms Collection of the day:"<<Trooms;

            cout<<"\n=================================================";
            cout<<"\n number of pasta we have:"<<qpasta;
            cout<<"\n number of pasta we sold:"<<Spasta;
            cout<<"\n number of pasta we have now:"<<qpasta-Spasta;
            cout<<"\n total pasta Collection of the day:"<<Tpasta;

            cout<<"\n=================================================";
            cout<<"\n number of burger we have:"<<qburger;
            cout<<"\n number of burger we sold:"<<Sburger;
            cout<<"\n number of burger we have now:"<<qburger-Sburger;
            cout<<"\n total burger Collection of the day:"<<Tburger;

            cout<<"\n=================================================";
            cout<<"\n number of noodles we have:"<<qnoodles;
            cout<<"\n number of noodles we sold:"<<Snoodles;
            cout<<"\n number of noodles we have now:"<<qnoodles-Snoodles;
            cout<<"\n total noodles Collection of the day:"<<Tnoodles;

            cout<<"\n=================================================";
            cout<<"\n number of shake we have:"<<qshake;
            cout<<"\n number of shake we sold:"<<Sshake;
            cout<<"\n number of shake we have now:"<<qshake-Sshake;
            cout<<"\n total shake Collection of the day:"<<Tshake;

            cout<<"\n=================================================";
            cout<<"\n number of chicken we have:"<<qchicken;
            cout<<"\n number of chicken we sold:"<<Schicken;
            cout<<"\n number of chicken we have now:"<<qchicken-Schicken;
            cout<<"\n total chicken Collection of the day:"<<Tchicken;
            cout<<"\n=================================================";



            break;
        
        case 8:
            cout<<"the total bill of your staying is:"<<Trooms+Tburger+Tpasta+Tchicken+Tshake+Tnoodles<<"\n Thank you and hope to see you again.";
            exit(0);

        default:
            cout<<"you pressed the wrong button please enter the correct number";
            break;

        }
       

    
    goto m;
   





}