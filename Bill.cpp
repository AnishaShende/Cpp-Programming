#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <string.h>
#include <cstring>
#include <bits/stdc++.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
using namespace std;

string ItemName[30];
int Qty[30], Price[30];
int num;
float Total[30];

// This class will be called after choosing generate bill option
class Billing
{
public:
    static int objectCount;

public:
    void Buy(string name, int qty, int price, float total, int i)
    {

        //int i = 0;
            num = i;
            ItemName[num] = name;
            Qty[num] = qty;
            Price[num] = price;
            Total[num] = total;
        //i++;
        // Billing itemArray[14] = {Billing(name, qty, price, total);
        cout << "Thanks for buying !" << endl;
        objectCount++;
    }

    static int getCount()
    {
        return objectCount;
    }
    // void getdata(){
        
    // }
    void putdata(int j){
        if(ItemName[j].size() != 0){
            cout
            << left
            << setw(25)
            // << obj[i].ItemCode
            << left
            << setw(50)
            << ItemName[j]
            << left
            << setw(10)
            << Qty[j]
            << left
            << setw(60)
            << Price[j]
            << left
            << setw(40)
            << Total[j]
            << left
            << setw(250)
            << endl;
        }
    }

    // string RItemName() { return ItemName; }
    // int RQty() { return Qty; }
    // int RPrice() { return Price; }
    // float RTotal() { return Total; }
};
int Billing::objectCount = 0;

class Clothing : public Billing
{
    int choice1, choice2, choice3, choice4, price, quantity, total, i;

public:
    void ClothingA()
    {
        cout << "\n\n";
        // WelcomehomeMessage::WelcomeMessage("Welcome to the Clothing section!");
        do
        {
            cout << "Which Sub-category do you want to search in ?" << endl;
            cout << "1) Women" << endl
                 << "2) Men" << endl
                 << "3) Kids" << endl
                 << "4) Go back to other section" << endl;
            cout << endl
                 << "Enter the category you want to shop from: ";
            cin >> choice1;

            switch (choice1)
            {
            case 1:
                cout << "\n \n";
                cout << "Clothing for Womens are as follows : " << endl;
                cout << "1) Dresses" << endl;
                cout << "2) Sarees" << endl;
                cout << "3) Hoodies & Sweatshirts" << endl;
                cout << "4) Bottomwear" << endl;
                cout << "5) Exit" << endl;
                cout << "\n ";
                cout << endl
                     << "Enter the product you want to buy:";
                cin >> choice2;
                if (choice2 == 1)
                {
                    price = 1200.00;
                    cout << "Chain Bodycon Dress" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 0;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Chain Bodycon Dress", quantity, price, total, i);
                }
                else if (choice2 == 2)
                {
                    price = 839.00;
                    cout << "Womanista Women's Georgette Sarees" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 1;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Womanista Women's Georgette Sarees", quantity, price, total, i);
                }
                else if (choice2 == 3)
                {
                    price = 1432.00;
                    cout << "Ripped Wide Leg Jeans" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i = 2;
                    Buy("Ripped Wide Leg Jeans", quantity, price, total, i);
                }
                else if (choice2 == 4)
                {
                    price = 990.00;
                    cout << "Pocket Pullover Sweatshirt" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 3;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Pocket Pullover Sweatshirt", quantity, price, total, i);
                }
                else
                {
                    cout << "Sorry, Invalid choice ! Please re-enter your choice !" << endl;
                }
                break;
            case 2:
                cout << "\n \n";
                cout << "Clothing for Mens are as follows : " << endl;
                cout << "1) T-shirts" << endl;
                cout << "2) Casual shirts" << endl;
                cout << "3) Formal shirts" << endl;
                cout << "4) Jeans" << endl;
                cout << "5) Exit" << endl;
                cout << " \n";
                cout << endl
                     << "Enter the product you wish to buy:";
                cin >> choice3;
                if (choice3 == 1)
                {
                    price = 999.00;
                    cout << "\n \n";
                    cout << "Cotton Full Sleeve T-Shirt for Men" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    cout << "Total amount = Rs." << total << endl;
                    i = 4;
                    Buy("Cotton Full Sleeve T-Shirt for Men", quantity, price, total, i);
                }
                else if (choice3 == 2)
                {
                    price = 609.00;
                    cout << "\n \n";
                    cout << "Men's Relaxed Fit Jeans" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 5;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Men's Relaxed Fit Jeans", quantity, price, total, i);
                }
                else if (choice3 == 3)
                {
                    price = 599.00;
                    cout << "\n \n";
                    cout << "Men's Solid Regular Fit Formal Shirt" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 6;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Men's Solid Regular Fit Formal Shirt", quantity, price, total, i);
                }
                else if (choice3 == 4)
                {
                    price = 649.00;
                    cout << "\n \n";
                    cout << "Ethnic Pure Cotton Men's Kurta" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 7;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Ethnic Pure Cotton Men's Kurta", quantity, price, total, i);
                }
                else if (choice2 == 5)
                {
                    break;
                }
                else
                {
                    cout << "Sorry, Invalid choice ! Please re-enter your choice !" << endl;
                }
                break;
            case 3:
                cout << "\n \n";
                cout << "Clothing for Kids are as follows : " << endl;
                cout << "1) Dresses & Jumpsuits" << endl;
                cout << "2) T-shirts & polos" << endl;
                cout << "3) Tops & tees" << endl;
                cout << "4) Rompers & Bodysuits" << endl;
                cout << "5) Exit" << endl;
                cout << endl
                     << "Enter the product you wish to buy:";
                cin >> choice4;
                if (choice4 == 1)
                {
                    price = 1418.00;
                    cout << "\n \n";
                    cout << "Max Boy's Regular T-Shirt" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 8;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Max Boy's Regular T-Shirt", quantity, price, total, i);
                }
                else if (choice4 == 2)
                {
                    price = 849.00;
                    cout << "\n \n";
                    cout << "Bodysuit For Toddler Half Sleeve White" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 9;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Bodysuit For Toddler Half Sleeve White", quantity, price, total, i);
                }
                else if (choice4 == 3)
                {
                    price = 1499.00;
                    cout << "\n \n";
                    cout << "Girls Square Neck Patch Work jumpsuit" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 10;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Girls Square Neck Patch Work jumpsuit", quantity, price, total, i);
                }
                else if (choice4 == 4)
                {
                    price = 2999.00;
                    cout << "\n \n";
                    cout << "Kidsville Boy's Regular Joggers" << endl;
                    cout << "Deal of the Day price is = " << price << endl;
                    cout << "Enter the quantity :";
                    cin >> quantity;
                    total = price * quantity;
                    i = 11;
                    cout << "Total amount = Rs." << total << endl;
                    Buy("Kidsville Boy's Regular Joggers", quantity, price, total, i);
                }
                else if (choice2 == 5)
                {
                    break;
                }
                else
                {
                    cout << "Sorry, Invalid choice ! Please re-enter your choice !" << endl;
                }
                break;
            case 4:
                break;
            default:
                cout << "Sorry, Invalid choice ! Please re-enter your choice !" << endl;
                break;
            }
        } while (choice1 != 4);
    }
    ~Clothing()
    {
        cout << "\n \n";
        cout << "Thank you for visiting the Clothing section !\n\n";
    }
};

int main()
{

    Clothing c;
    c.ClothingA();
    Billing obj[30];
    string custName, DelAdd;
    int n = 30,j;
    // int objc = obj3.getCount();
    // Billing obj[objc];
    time_t now = time(0);
    char *date_time = ctime(&now);
    // Billing *arr = (Billing *)malloc(sizeof(Billing) * N);
    //  for (int i = 0; i < 1; i++)
    //  {
    //      arr[i] = Buy(ItemCode, ItemName, Qty, Price, Total);
    //  }
    //  for (int i = 0; i < objc; i++)
    //  {
    //      obj[i].ItemName = Billing::ItemName;
    //      obj[i].Qty = Billing::Qty;
    //      obj[i].Price = Billing::Price;
    //      obj[i].Total = Billing::Total;
    //  }
    //  Billing* arr = (Billing*)malloc(sizeof(Billing) * objc);

    // calling constructor
    // for each index of array
    // for (int i = 0; i < objc; i++) {
    //     arr[i] = Billing(ItemName, Qty, Price, Total);
    // }
    // cout << "Enter the number of products you bought : ";
    // cin >> n;
    // cout<<"\n\n";
    // cout<<"Items in the array are : "<<endl;
    // for(int i = 0; i < n; i ++){
    //     cout<<"ItemName["<<i<<"]="<<ItemName[i]<<endl;
    //     cout<<"Qty["<<i<<"]="<<Qty[i]<<endl;
    //     cout<<"Price["<<i<<"]="<<Price[i]<<endl;
    //     cout<<"Total["<<i<<"]="<<Total[i]<<endl;
    cout << "Enter customer name : " << endl;
    getline(cin >> ws, custName);
    //getline(cin, custName);
    //cin >> custName;
    cout << "Enter delivery address : " << endl;
    getline(cin, DelAdd);
    //cin >> DelAdd;

    cout<<"Generating your invoice .";
    Sleep(2000);
    cout<<".";
    Sleep(2000);
    cout<<".";
    Sleep(4000);
    cout<<"\n\n";

    cout
        << left
        << setw(5)
        << "Customer Name : "
        << left
        << setw(20)
        << custName
        << setw(10)
        // << "Contact Number : "
        << left
        << setw(5)
        << "Date : " << date_time << "\n\n"
        << left
        << setw(25)
        // << "Item code"
        << left
        << setw(50)
        << "Item name"
        << left
        << setw(10)
        << "Qty"
        << left
        << setw(60)
        << "Price"
        << left
        << setw(3)
        << "Total"
        << left
        << setw(250)
        << endl;
    // Billing itemArray[14] = {Billing(354582, "Shoes", 5, 6000, 30000), Billing(768543, "Cookies", 10, 50, 500), Billing(248790, "Toaster", 1, 8000, 8000), Billing(198987, "Watermelon", 5, 80, 400)};
    // Billing obj[objc] = {Buy(ItemCode, ItemName, Qty, Price, Total), Billing(768543, "Cookies", 10, 50, 500), Billing(248790, "Toaster", 1, 8000, 8000), Billing(198987, "Watermelon", 5, 80, 400)};
    // Billing obj[1] = {Billing(obj.RItemName(), obj.RQty(), obj.RPrice(), obj.RTotal())};
    // for(int i = 0; i < n; i ++){
    //     cout<<endl;
    //     obj[i].getdata();
    //     cout<<"Hello"<<endl;
    // }
    for(int i = 0; i < n; i ++){
        //cout<<endl;
        j=i;
        obj[i].putdata(j);
        //cout<<"bye"<<endl;
    }
        /*cout
            << left
            << setw(25)
            // << obj[i].ItemCode
            << left
            << setw(50)
            << ItemName
            << left
            << setw(10)
            << Qty
            << left
            << setw(60)
            << Price
            << left
            << setw(40)
            << Total
            << left
            << setw(250)
            << endl;*/
    
    cout
        //<< "\n\n"
        << left
        << setw(5)
        << "Delivery Address : "
        << left
        << setw(20)
        << DelAdd
        << endl
        << right
        << setw(125)
        << "~Regards"
        << endl
        << right
        << setw(125)
        << "Amazon"
        << endl;

    cout<<"\n\n you bought "<<Billing::objectCount<< " products!"<<endl;
    return 0;
}
