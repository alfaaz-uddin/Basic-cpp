#include <iostream>
using namespace std;

class PlaneTicket
{
private:
    int bookingId;
    string fromLocation;
    string toLocation;

public:
    PlaneTicket(int id, string f, string t)
    {
        bookingId=id;
        fromLocation= f;
        toLocation= t;
    }
    void showDetails()
    {
        cout<<"Booking iD: "<<bookingId<<endl;
        cout<<"Traveling from: "<<fromLocation<<endl;
        cout<<"Destination: "<<toLocation<<endl;
    }

    void showSeatType(double ticketPrice)
{
    if (ticketPrice>=10000)
        cout<<"First Class seat."<<endl;
    else if(ticketPrice<10000 && ticketPrice>=7000)
        cout<<"Business Class seat."<<endl;
    else if(ticketPrice<7000)
        cout<<"Economy seat."<<endl;
}

};



int main()
{
    PlaneTicket ticket(101,"Dhaka", "Cox's Bazar");

    ticket.showDetails();

    cout<<endl;//<<endl;

    double tp;

    cout<<"Enter Ticket Price: ";
    cin>>tp;
    ticket.showSeatType(tp);

}
