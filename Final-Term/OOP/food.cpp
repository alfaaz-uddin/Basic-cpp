#include <iostream>
using namespace std;

struct Food
{
private:
    string name;
    double price;
    double quantity;
public:

    void setInfo(string n, double p, double q)
    {
        name = n;
        price = p;
        quantity = q;

    }

    void showInfo()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Quantity: "<<quantity<<endl;
    }

    void showBill()
    {
        cout<<"Total price: "<<(price*quantity)<<endl;
    }
};

int main()
{
    Food f1;
    f1.setInfo("Burger", 450, 3);
    f1.showInfo();
    f1.showBill();

}
