// VEHICLE PARKING.
#include <iostream>

using namespace std;

int main()
{
   int c=0;
   int r=0;
   int b=0;
   int u_input;
   int amount=0,count=0;
   while(true)
   {

    cout <<"press 1 for the rickshaw"<<endl;
    cout <<"press 2 for the car"<<endl;
    cout <<"press 3 for the bus"<<endl;
    cout <<"press 4 to show the record"<<endl;
    cout <<"press 5 to delete the record"<<endl;
    cin>>u_input;

   if(u_input==1)
   {
       r=r+1;
       amount= amount+ 100;
       count=count + 1;
   }
   else if(u_input==2)
   {
       c=c+1;
       amount= amount+ 200;
       count=count + 1;
   }
   else if(u_input==3)
   {
       b=b+1;
       amount= amount+ 300;
       count=count + 1;
   }
   else if(u_input==4)
   {
       cout<<"************"<<endl;
       cout<<"the total amount="<<amount<<endl;
       cout<<"the total number of vehicles parked ="<<count<<endl;
       cout<<"the total number of rickshaw parked ="<<r<<endl;
       cout<<"the total number of car parked ="<<c<<endl;
       cout<<"the total number of bus parked ="<<b<<endl;
       cout<<"************"<<endl<<endl;


   }
   else if(u_input==5)
   {
       amount=0;
       count=0;
       r=0;
       c=0;
       b=0;
       cout<<"********"<<endl;
       cout<<"RECORD DELETED"<<endl;
       cout<<"********"<<endl<<endl;

   }
   else
   {
       cout<<"invalid number"<<endl;

   }
}

    return 0;
}
