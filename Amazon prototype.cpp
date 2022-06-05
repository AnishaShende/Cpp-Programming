#include <iostream>
#include <string>
#include <string.h>
#define SIZE 600
#include <bits/stdc++.h>
using namespace std;
char enQueue(std::string const &element);
string items[SIZE];
string k[50];
string p[50];
int front, rear, j = 0, i3 = 0, z;
int ch1,ch2;

/*void cart()
{
    front = -1;
    rear = -1;
}*/
// Check if the queue is ful
std::string products[100] = {"Rice", "Wheat", "Dal", "Cooking_Oil", "Milk", "Butter", "Paneer", "Cheese", "Brinjal", "Lady-finger", "Mango", "Banana", "Laptop-Bag", "Rucksack", "School-Bag", "Briefcases", "Trolley-bags", "Garment-bags", "Clutch", "Wallet", "Hobo","Dress","Saree","Jeans","Sweatshirt","T-shirt","Jeans","Shirt","Kurta","Polo/T-shirt","Bodysuit","Jumpsuit","Jogger","Oppo-phone","Samsung-phone","IPhone","Mixer-Grinder","Cooker","Microwave","Telivision","Refrigerator","Air-conditioner"};

void choice();
class groceries
{

public:
    int choice1, choice2, choice3, choice4;
    float price, quantity;

    groceries()
    {
        cout << endl
             << "*****************************************\n";
        cout << "---- Welcome to the Grocery Section ----" << endl;
        cout << "*****************************************\n";
        do
        {
            cout << endl
                 << "1.Essentials\n2.Dairy Products\n3.Fruits and Vegetables\n4.Exit" << endl;
            cout << endl
                 << "Enter the product you want :";
            cin >> choice1;
            if (choice1 == 1)
            {
                cout << "The following Essentials are available: " << endl;
                cout << endl
                     << "1.Rice\n2.Wheat\n3.Dal/Lentils\n4.Cooking Oil" << endl;
                cout << endl
                     << "Enter the product you want:";
                cin >> choice2;
                if (choice2 == 1)
                {
                    price = 100;
                    cout << "Price of 1 kg rice = " << price << endl;
                    cout << "Enter the quantity of rice you want to buy in kgs:";
                    cin >> quantity;
                    cout << "Total amount = Rs." << price * quantity << endl;
                    j = 0;
                    i3 = 0;
                    choice();
                }
                else if (choice2 == 2)
                {
                    price = 140;
                    cout << "Price of 1 kg wheat = " << price << endl;
                    cout << "Enter the quantity of wheat you want to buy in kgs:";
                    cin >> quantity;
                    cout << "Total amount = Rs." << price * quantity << endl;
                    j = 1;
                    i3 = 1;
                    choice();
                }
                else if (choice2 == 3)
                {
                    price = 80;
                    cout << "Price of 1 kg Dal = " << price << endl;
                    cout << "Enter the quantity of Dal you want to buy in kgs:";
                    cin >> quantity;
                    cout << "Total amount = Rs." << price * quantity << endl;
                    j = 2;
                    i3 = 2;
                    choice();
                }
                else if (choice2 == 4)
                {
                    price = 200;
                    cout << "Price of 1 litre Cooking oil = " << price << endl;
                    cout << "Enter the quantity of Cooking oil you want to buy in litres:";
                    cin >> quantity;
                    cout << "Total amount = Rs." << price * quantity << endl;
                    j = 3;
                    i3 = 3;
                    choice();
                }
                else
                {
                    cout << "Invalid choice! Please re-enter a valid choice" << endl;
                }
            }
            else if (choice1 == 2)
            {
                cout << endl
                     << "The following Dairy Products are available: " << endl;
                cout << endl
                     << "1.Milk\n2.Butter\n3.Paneer\n4.Cheese" << endl;
                cout << endl
                     << "Enter the product you want:";
                cin >> choice3;
                if (choice3 == 1)
                {
                    price = 60;
                    cout << endl
                         << "Price of 1 litre milk = " << price << endl;
                    cout << endl
                         << "Enter the quantity of milk you want to buy in litres:";
                    cin >> quantity;
                    cout << endl
                         << "Total amount = Rs." << price * quantity << endl;
                    j = 4;
                    i3 = 4;
                    choice();
                }
                else if (choice3 == 2)
                {
                    price = 100;
                    cout << endl
                         << "Price of 1 packet of butter = " << price << endl;
                    cout << endl
                         << "Enter how many packets of butter you want to buy:";
                    cin >> quantity;
                    cout << endl
                         << "Total amount = Rs." << price * quantity << endl;
                    j = 5;
                    i3 = 5;
                    choice();
                }
                else if (choice3 == 3)
                {
                    price = 70;
                    cout << endl
                         << "Price of 1 kg of paneer = " << price << endl;
                    cout << endl
                         << "Enter the quantity of paneer you want to buy in kgs:";
                    cin >> quantity;
                    cout << endl
                         << "Total amount = Rs." << price * quantity << endl;
                    j = 6;
                    i3 = 6;
                    choice();
                }
                else if (choice3 == 4)
                {
                    price = 70;
                    cout << endl
                         << "Price of 1 packet of cheese = " << price << endl;
                    cout << endl
                         << "Enter how many packets of cheese you want to buy:";
                    cin >> quantity;
                    cout << endl
                         << "Total amount = Rs." << price * quantity << endl;
                    j = 7;
                    i3 = 7;
                    choice();
                }
                else
                {
                    cout << "Invalid choice!Please re-enter a valid choice" << endl;
                }
            }
            else if (choice1 == 3)
            {
                cout << endl
                     << "The following fruits and vegetables are available:" << endl;
                cout << endl
                     << "1.Brinjal\n2.Lady-finger\n3.Mango\n4.Banana" << endl;
                cout << endl
                     << "Enter the product you want:";
                cin >> choice4;
                if (choice4 == 1)
                {
                    price = 10;
                    cout << endl
                         << "Price of 1 kg Brinjal= " << price << endl;
                    cout << endl
                         << "Enter the quantity of brinjal you want to buy in kgs:";
                    cin >> quantity;
                    cout << endl
                         << "Total amount = Rs." << price * quantity << endl;
                    j = 8;
                    i3 = 8;
                    choice();
                }
                else if (choice4 == 2)
                {
                    price = 30;
                    cout << endl
                         << "Price of 1 kg lady-finger = " << price << endl;
                    cout << endl
                         << "Enter the quantity of lady-finger you want to buy in kgs:";
                    cin >> quantity;
                    cout << endl
                         << "Total amount = Rs." << price * quantity << endl;
                    j = 9;
                    i3 = 9;
                    choice();
                }
                else if (choice4 == 3)
                {
                    price = 50;
                    cout << endl
                         << "Price of 1 kg Mango = " << price << endl;
                    cout << endl
                         << "Enter the quantity of Mango you want to buy in kgs:";
                    cin >> quantity;
                    cout << endl
                         << "Total amount = Rs." << price * quantity << endl;
                    j = 10;
                    i3 = 10;
                    choice();
                }
                else if (choice4 == 4)
                {
                    price = 40;
                    cout << endl
                         << "Price of 1 kg banana = " << price << endl;
                    cout << endl
                         << "Enter the quantity of banana you want to buy in kgs:";
                    cin >> quantity;
                    cout << endl
                         << "Total amount = Rs." << price * quantity << endl;
                    j = 11;
                    i3 = 11;
                    choice();
                }
                else
                {
                    cout << "Invalid choice!Please re-enter a valid choice" << endl;
                }
            }
            else if (choice1 == 4)
            {
                cout<<endl<<"#### Thank You for shopping from the Groceries Section! ####"<<endl;
            }
            else
            {
                cout << "Invalid choice!Please re-enter a valid choice" << endl;
            }
        } while (choice1 != 4);
    }
};
class luggage
{
    public:
    int c1, c2, c3, c4;
    float price1, quantity1;
    luggage()
    {
        cout<<endl<<"******************************************\n";
        cout<<"---- Welcome to the Luggage Section ----"<<endl;
        cout<<"******************************************\n";
        do
        {
            cout<<endl<<"1.Backpacks\n2.Suitcases\n3.Handbags\n4.Exit"<<endl;
            cout<<endl<<"Enter the category you want to shop from:";
            cin>>c1;
            if(c1==1)
            {
                cout<<"The following Backpacks are available: "<<endl;
                cout<<endl<<"1.Laptop Bag\n2.Ruckasack\n3.School Bag"<<endl;
                cout<<endl<<"Enter the Backpack you want to buy:";
                cin>>c2;
                if(c2==1)
                {
                    cout<<endl<<"Details = Travex 14 inch Laptop Tote Bag"<<endl;
                    price1=950;
                    cout<<"Price  = Rs."<<price1<<endl;
                    cout<<"Enter the number of bags you want:";
                    cin>>quantity1;
                    cout<<"Total amount = Rs."<<price1*quantity1<<endl;
                    j=12;
                    i3=12;
                    choice();
                }
                else if(c2==2)
                {
                    cout<<endl<<"Details = Wildcraft 45 Ltrs Grey and Orange Rucksack"<<endl;
                    price1=2500;
                    cout<<"Pricev= Rs."<<price1<<endl;
                    cout<<"Enter the number of rucksacks you want to buy:";
                    cin>>quantity1;
                    cout<<"Total amount = Rs."<<price1*quantity1<<endl;
                    j=13;
                    i3=13;
                    choice();
                }
                else if(c2==3)
                {
                    cout<<endl<<"Details = BLUTECH Polyester 36 Liters Waterproof Royal Blue School Bag"<<endl;
                    price1=1050;
                    cout<<"Price = Rs."<<price1<<endl;
                    cout<<"Enter the number of school bags you want to buy:";
                    cin>>quantity1;
                    cout<<"Total amount = Rs."<<price1*quantity1<<endl;
                    j=14;
                    i3=14;
                    choice();
                }
                else
                {
                    cout<<"Invalid choice! Please re-enter a valid choice"<<endl;
                    cin>>c2;
                }
            }
            else if(c1==2)
            {
               cout<<endl<<"The following Suitcases are available: "<<endl;
               cout<<endl<<"1.Breifcases\n2.Trolley Bags\n3.Garment Bags"<<endl;
               cout<<endl<<"Enter the bag you want:";
               cin>>c3;
               if(c3==1)
               {
                   cout<<endl<<"Details = American Tourister Ivy Spinner 77 cms PP Black Suitcase"<<endl;
                   price1=6500;
                   cout<<"Price = Rs."<<price1<<endl;
                   cout<<"Enter the number of briefcases you wish to buy:";
                   cin>>quantity1;
                   cout<<endl<<"Total amount = Rs."<<price1*quantity1<<endl;
                   j=15;
                   i3=15;
                   choice();
               } 
               else if(c3==2)
                {
                    cout<<endl<<"Details: Skybags Trick 4W Polyester 69 cms Softsided Medium Luggage Trolley Bags (Blue)"<<endl;
                    price1=8500;
                    cout<<"Price = Rs."<<price1<<endl;
                    cout<<"Enter the number of Trolley Bags you wish to buy:";
                    cin>>quantity1;
                    cout<<endl<<"Total amount = Rs."<<price1*quantity1<<endl;
                    j=16;
                    i3=16;
                    choice();
                }
                else if(c3==3)
                {
                    cout<<endl<<"Details = Victorinox Werks Traveler 5.0 Wt East/west Garment Bag"<<endl;
                    price1=3000;
                    cout<<"Price = Rs. "<<price1<<endl;
                    cout<<"Enter the number of Garment Bags you wish to buy:";
                    cin>>quantity1;
                    cout<<endl<<"Total amount = Rs."<<price1*quantity1<<endl;
                    j=17;
                    i3=17;
                    choice();
                }
                else
                {
                    cout<<"Invalid choice!Please re-enter a valid choice"<<endl;
                    cin>>c3;
                }
            }
            else if(c1==3)
            {
                cout<<endl<<"The following Handbags are available:"<<endl;
                cout<<endl<<"1.Clutch\n2.Wallet\n3.Hobo"<<endl;
                cout<<endl<<"Enter the Handbag you want:";
                cin>>c4                                                                                                                                                                                                                                     ;
                if(c4==1)
                {
                    cout<<endl<<"Details = Baggit Black Synthetic Clutch"<<endl;
                    price1=600;
                    cout<<"Price = Rs. "<<price1<<endl;
                    cout<<"Enter the number of cluthes you wish to buy:";
                    cin>>quantity1;
                    cout<<endl<<"Total amount = Rs."<<price1*quantity1<<endl;
                    j=18;
                    i3=18;
                    choice();
                }
                else if(c4==2)
                {
                    cout<<endl<<"Details: URBAN FOREST Oliver Black RFID Blocking Leather Wallet"<<endl;
                    price1=500;
                    cout<<"Price = Rs. "<<price1<<endl;
                    cout<<"Enter the number of wallets you wish to buy:";
                    cin>>quantity1;
                    cout<<endl<<"Total amount = Rs."<<price1*quantity1<<endl;
                    j=19;
                    i3=19;
                    choice();
                }
                else if(c4==3)
                {
                    cout<<endl<<"Details: Caprese Women's Hobo (Beige)"<<endl;
                    price1=800;
                    cout<<"Price = Rs."<<price1<<endl;
                    cout<<"Enter the number of Hobos you wish to buy:";
                    cin>>quantity1;
                    cout<<endl<<"Total amount = Rs."<<price1*quantity1<<endl;
                    j=20;
                    i3=20;
                    choice();
                }
                else
                {
                    cout<<"Invalid choice!Please re-enter a valid choice"<<endl;
                    cin>>c4;
                }
            }
            else if(c1==4)
            {
                cout<<endl<<"#### Thank You for Shopping from the Luggage Section! ####"<<endl;
                break;
            }
            else
            {
                cout<<"Invalid choice!Please re-enter a valid choice"<<endl;
                cin>>c1;
            }
        } while (c1!=4);
        
    }
};
class clothing
{
    public:
    int choice1,choice2,choice3,choice4,price,quantity;
    clothing()
    {
        cout<<endl<<"*********************************"<<endl;
        cout <<"Welcome to the Clothing section!"<<endl;
        cout<<"*********************************"<<endl;
        do
        {
            cout <<endl<<"Select your category:" << endl;
            cout << "1) Women" << endl
                 << "2) Men" << endl
                 << "3) Kids" << endl
                 << "4) Exit" << endl;
            cout<<endl<<"Enter the category you want to shop from: ";
            cin>>choice1;

            switch (choice1)
            {
            case 1:
                cout << "\n \n";
                cout << "Clothing for Womens are as follows : " << endl;
                cout << "1) Dresses" << endl;
                cout << "2) Sarees" << endl;
                cout << "3) Bottomware" << endl;
                cout << "4) Hoodies & Sweatshirts" << endl;
                cout << "5) Exit" << endl;
                cout << "\n ";
                cout<<endl<<"Enter the product you want :";
                cin>>choice2;
                    if(choice2==1)
                    {
                        price=1200.00;
                        cout << "Chain Bodycon Dress" << endl;
                        cout<<"Deal of the Day price is = "<<price<<endl;
                        cout<<"Enter the quantity :";
                        cin>>quantity;
                        cout<<"Total amount = Rs."<<price*quantity<<endl;
                        j=21;
                        i3=21;
                        choice();
                    }
                    else if(choice2==2)
                    {
                        price=839.00;
                        cout << "Womanista Women's Georgette Sarees" << endl;
                        cout<<"Deal of the Day price is = "<<price<<endl;
                        cout<<"Enter the quantity :";
                        cin>>quantity;
                        cout<<"Total amount = Rs."<<price*quantity<<endl;
                        j=22;
                        i3=22;
                        choice();
                    }
                    else if(choice2==3)
                    {
                        price=1432.00;
                        cout << "Ripped Wide Leg Jeans" << endl;
                        cout<<"Deal of the Day price is = "<<price<<endl;
                        cout<<"Enter the quantity :";
                        cin>>quantity;
                        cout<<"Total amount = Rs."<<price*quantity<<endl;
                        j=23;
                        i3=23;
                        choice();
                    }
                    else if(choice2==4)
                    {
                        price=990.00;
                        cout << "Pocket Pullover Sweatshirt" << endl;
                        cout<<"Deal of the Day price is = "<<price<<endl;
                        cout<<"Enter the quantity :";
                        cin>>quantity;
                        cout<<"Total amount = Rs."<<price*quantity<<endl;
                        j=24;
                        i3=24;
                        choice();
                    }
                    else
                    {
                        cout<<"Sorry, Invalid choice ! Please re-enter your choice !"<<endl;
                        cin>>choice2;
                    }
                break;
            case 2:
                cout << "\n \n";
                cout << "Clothing for Mens are as follows : " << endl;
                cout << "1) T-shirts" << endl;
                cout << "2) Jeans" << endl;
                cout << "3) Shirts" << endl;
                cout << "4) Kurta" << endl;
                cout << "5) Exit" << endl;
                cout << " \n";
                cout<<endl<<"Enter the product you want:";
                cin>>choice3;
                    if(choice3==1)
                    {
                        price=999.00;
                        cout << "\n \n";
                        cout << "Cotton Full Sleeve T-Shirt for Men" << endl;
                        cout<<"Deal of the Day price is = "<<price<<endl;
                        cout<<"Enter the quantity :";
                        cin>>quantity;
                        cout<<"Total amount = Rs."<<price*quantity<<endl;
                        j=25;
                        i3=25;
                        choice();
                    } 
                    else if(choice3==2)
                    {
                        price=609.00;
                        cout << "\n \n";
                        cout << "Men's Relaxed Fit Jeans" << endl;
                        cout<<"Deal of the Day price is = "<<price<<endl;
                        cout<<"Enter the quantity :";
                        cin>>quantity;
                        cout<<"Total amount = Rs."<<price*quantity<<endl;
                        j=26;
                        i3=26;
                        choice();
                    }
                    else if(choice3==3)
                    {
                        price=599.00;
                        cout << "\n \n";
                        cout << "Men's Solid Regular Fit Formal Shirt" << endl;
                        cout<<"Deal of the Day price is = "<<price<<endl;
                        cout<<"Enter the quantity :";
                        cin>>quantity;
                        cout<<"Total amount = Rs."<<price*quantity<<endl;
                        j=27;
                        i3=27;
                        choice();
                    }
                    else if(choice3==4)
                    {
                        price=649.00;
                        cout << "\n \n";
                        cout << "Ethnic Pure Cotton Men's Kurta" << endl;
                        cout<<"Deal of the Day price is = "<<price<<endl;
                        cout<<"Enter the quantity :";
                        cin>>quantity;
                        cout<<"Total amount = Rs."<<price*quantity<<endl;
                        j=28;
                        i3=28;
                        choice();
                    }
                    else if(choice3==5){
                        break;
                    }
                    else
                    {
                        cout<<"Sorry, Invalid choice ! Please re-enter your choice !"<<endl;
                        cin>>choice3;
                    }
                break;
            case 3:
                cout << "\n \n";
                cout << "Clothing for Kids are as follows : " << endl;
                cout << "1) T-shirts & Polos" << endl;
                cout << "2) Rompers & Bodysuits" << endl;
                cout << "3) Dresses & Jumpsuits" << endl;
                cout << "4) Joggers" << endl;
                cout << "5) Exit" << endl;
                cout<<endl<<"Enter the product you want:";
                cin>>choice4;
                    if(choice4==1)
                    {
                        price=1418.00;
                    cout << "\n \n";
                    cout << "Max Boy's Regular T-Shirt" << endl;
                    cout<<"Deal of the Day price is = "<<price<<endl;
                    cout<<"Enter the quantity :";
                    cin>>quantity;
                    cout<<"Total amount = Rs."<<price*quantity<<endl;
                    j=29;
                    i3=29;
                    choice();
                    }
                    else if(choice4==2)
                    {
                        price=849.00;
                    cout << "\n \n";
                    cout << "Bodysuit For Toddler Half Sleeve White" << endl;
                    cout<<"Deal of the Day price is = "<<price<<endl;
                    cout<<"Enter the quantity :";
                    cin>>quantity;
                    cout<<"Total amount = Rs."<<price*quantity<<endl;
                    j=30;
                    i3=30;
                    choice();
                    }
                    else if(choice4==3)
                    {
                        price=1499.00;
                    cout << "\n \n";
                    cout << "Girls Square Neck Patch Work jumpsuit" << endl;
                    cout<<"Deal of the Day price is = "<<price<<endl;
                    cout<<"Enter the quantity :";
                    cin>>quantity;
                    cout<<"Total amount = Rs."<<price*quantity<<endl;
                    j=31;
                    i3=31;
                    choice();
                    }
                    else if(choice4==4)
                    {
                        price=2999.00;
                    cout << "\n \n";
                    cout << "Kidsville Boy's Regular Joggers" << endl;
                    cout<<"Deal of the Day price is = "<<price<<endl;
                    cout<<"Enter the quantity :";
                    cin>>quantity;
                    cout<<"Total amount = Rs."<<price*quantity<<endl;
                    j=32;
                    i3=32;
                    choice();
                    }
                    else if(choice2==5){
                        break;
                    }
                    else
                    {
                        cout<<"Sorry, Invalid choice ! Please re-enter your choice !"<<endl;
                    }
                break;
            case 4:
                cout<<endl<<"#### Thank You for shopping from the Clothing Section! ####"<<endl;
                break;
            default:
                cout<<"Sorry, Invalid choice ! Please re-enter your choice !"<<endl;
                break;
            }
        } while (choice1!=4);
    }

};
class electronics
{
    public:
    int c1, c2, c3, c4;
    float price1;
    electronics()
    {
        cout<<endl<<"******************************************\n";
        cout<<"---- Welcome to the Electronics Section ----"<<endl;
        cout<<"******************************************\n";
        do
        {
            cout<<endl<<"1.Mobiles\n2.Kitchen Appliances\n3.Home Appliances\n4.Exit"<<endl;
            cout<<endl<<"Enter the category you want to shop from:";
            cin>>c1;
            if(c1==1)
            {
                cout<<"The following Mobiles are available: "<<endl;
                cout<<endl<<"1.Oppo\n2.Samsung\n3.Apple"<<endl;
                cout<<endl<<"Enter the mobile you want to buy:";
                cin>>c2;
                if(c2==1)
                {
                    cout<<endl<<"OPPOF21 AMOLED Display 6.5 Inches MOBILE PHONE"<<endl;
                    price1=20000;
                    cout<<"Price  = Rs."<<price1<<endl;
                    j=33;
                    i3=33;
                    choice();
                }
                else if(c2==2)
                {
                    cout<<endl<<"SAMSUNG M31 AMOLED Display 7 Inches FOLDABLE PHONE"<<endl;
                    price1=50000;
                    cout<<"Price = Rs."<<price1<<endl;
                    j=34;
                    i3=34;
                    choice();
                }
                else if(c2==3)
                {
                    cout<<endl<<"IPHONE13 PRO XDR 6.7 Inches 60MP CAMERA PHONE"<<endl;
                    price1=110000;
                    cout<<"Price = Rs."<<price1<<endl;
                    j=35;
                    i3=35;
                    choice();
                }
                else
                {
                    cout<<"Invalid choice! Please re-enter a valid choice"<<endl;
                    cin>>c2;
                }
            }
            else if(c1==2)
            {
               cout<<endl<<"The following Kitchen Appliances are available: "<<endl;
               cout<<endl<<"1.Mixer-Grinder\n2.Cooker\n3.Microwave"<<endl;
               cout<<endl<<"Enter the Kitchen Appliance you wish to buy:";
               cin>>c3;
               if(c3==1)
               {
                   cout<<endl<<"BAJAJ REX 750W MIXER-GRINDER WITH TWO YEARS SERVICEABLE ONSITE WARRANTY"<<endl;
                   price1=3000;
                   cout<<"Price = Rs."<<price1<<endl;
                   j=36;
                   i3=36;
                   choice();
               } 
               else if(c3==2)
                {
                   cout<<endl<<"PRESTIGE SVACHH ANODISED ALUMINUM PRESSURE COOKER"<<endl;
                   price1=5000;
                   cout<<"Price = Rs."<<price1<<endl;
                   j=37;
                   i3=37;
                   choice();
                }
                else if(c3==3)
                {
                   cout<<endl<<"PANASONIC SOLO 20L IRON MICROWAVE"<<endl;
                   price1=7000;
                   cout<<"Price = Rs."<<price1<<endl;
                   j=38;
                   i3=39;
                   choice();   
                }
                else
                {
                    cout<<"Invalid choice!Please re-enter a valid choice"<<endl;
                    cin>>c3;
                }
            }
            else if(c1==3)
            {
                cout<<endl<<"The following Home Appliances are available:"<<endl;
                cout<<endl<<"1.Telivision\n2.Refrigerator\n3.Air Conditioner"<<endl;
                cout<<endl<<"Enter the Home Appliance you wish to buy:";
                cin>>c4;
                if(c4==1)
                {
                    cout<<endl<<"LG Ultra HD Smart LED TV"<<endl;
                    price1=65000;
                    cout<<"Price = Rs. "<<price1<<endl;
                    j=40;
                    i3=40;
                    choice();
                }
                else if(c4==2)
                {
                    cout<<endl<<"Whirpool 190 L3 Star Direct-Cool Single Door Refrigerator"<<endl;
                    price1=105000;
                    cout<<"Price = Rs. "<<price1<<endl;
                    j=41;
                    i3=41;
                    choice(); 
                }
                else if(c4==3)
                {
                    cout<<endl<<"Croma 3 star Split Fixed Speed AC"<<endl;
                    price1=75000;
                    cout<<"Price = Rs. "<<price1<<endl;
                    j=42;
                    i3=42;
                    choice(); 
                }   
                else
                {
                    cout<<"Invalid choice!Please re-enter a valid choice"<<endl;
                    cin>>c4;
                }
            }
            else if(c1==4)
            {
                cout<<endl<<"#### Thank You for Shopping from the Electronics Section! ####"<<endl;
                //break;
            }
            else
            {
                cout<<"Invalid choice!Please re-enter a valid choice"<<endl;
                cin>>c1;
            }
        } while (c1!=4);
        
    }
};
bool isFull()
{
    if (front == 0 && rear == SIZE - 1)
    {
        return true;
    }
    if (front == rear + 1)
    {
        return true;
    }
    return false;
}
// Check if the queue is empty
bool isEmpty()
{
    if (front == -1)
        return true;
    else
        return false;
}
// Adding an element
char enQueue(std::string const &element)
{
    if (isFull())
    {
        cout << "Cart is full";
    }
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;

        k[j] = products[i3];

        cout <<endl<< k[j] << " is added to the cart" << endl;
    }

    return (*element.c_str());
}
// Removing an element
char deQueue()
{
    string element;
    if (isEmpty())
    {
        cout << "Cart is empty" << endl;
        return (-1);
    }
    else
    {
        element = items[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        // cart has only one element,
        // so we reset the queue after deleting it.
        else
        {
            front = (front + 1) % SIZE;
            cout << "The removed element is " << products[j] << endl;
        }
        return (element.c_str()[front]);
    }
}
void display()
{
    // Function to display status of Circular Queue
    int i;
    if (isEmpty())
    {
        cout << endl;
        cout << "Empty cart" << endl;
    }
    else
    {
        // cout << "Front -> " << front;
        cout << endl
             << "Items : ";
        for (i = front; i != rear; i = (i + 1) % SIZE)
            cout << items[i] << endl;
        cout << items[i] << endl;
        cout << endl;
        // << "Rear -> " << rear;
    }
}

/*int binarySearchString(string arr[], string x, int n)
{
    int lower = 0;
    int upper = n - 1;
    while (lower <= upper)
    {
        int mid = lower + (upper - lower) / 2;
        int res;
        if (x == (arr[mid]))
            res = 0;
        if (res == 0)
            return mid;
        if (x > (arr[mid]))
            lower = mid + 1;
        else
            upper = mid - 1;
    }
    return -1;
}*/
void buynow()
{
    int p, days;
    cout<<endl<<"1.Cash on Delivery\n2.Online Payment"<<endl;
    cout<<"\nEnter your payment method:";
    cin>>p;
    if(p==1)
    {
        
        if(j<=3)
        {
            //essentials
            days = 2;
            cout<<"\nYour order will be delivered in "<<days<<" days.\nThank you for shopping!"<<endl;
        }
        else if((j>3) && (j<=11))
        {
            //dairy and vegetables
            days=1;
            cout<<"\nYour order will be delivered in "<<days<<" day.\nThank you for shopping!"<<endl;
        }
        else if((j>11) && (j<=20))
        {
            //luggage
            days=5;
            cout<<"\nYour order will be delivered in "<<days<<" days.\nThank you for shopping!"<<endl;
        }
        else if((j>20) && (j<=32))
        {
            //Clothing
            days=3;
            cout<<"\nYour order will be delivered in "<<days<<" days.\nThank you for shopping! "<< endl;
        }
        else if((j>32) && (j<=41))
        {
            //electronics
            days=6;
            cout<<"\nYour order will be delivered in "<<days<<" days.\nThank you for shopping!"<< endl;;
        }
        else
        {
            cout<<"\nInvalid choice! Please re-enter your choice "<<endl;
        }
        
        
    }
    else if(p==2)
    {
        cout<<endl<<"UPI ID: 3425341@amazonworldbank\n";
        cout<<endl<<"You can Pay Online with the above UPI ID"<<endl;
        if(j<=3)
        {
            //essentials
            days = 2;
            cout<<"\nYour order will be delivered in "<<days<<" days.\nThank you for shopping!"<<endl;
        }
        else if((j>3) && (j<=11))
        {
            //dairy and vegetables
            days=1;
            cout<<"\nYour order will be delivered in "<<days<<" day.\nThank you for shopping!"<<endl;
        }
        else if((j>11) && (j<=20))
        {
            //luggage
            days=5;
            cout<<"\nYour order will be delivered in "<<days<<" days.\nThank you for shopping!"<<endl;
        }
        else if((j>20) && (j<=32))
        {
            //Clothing
            days=3;
            cout<<"\nYour order will be delivered in "<<days<<" dayss.\nThank you for shopping! "<< endl;
        }
        else if((j>32) && (j<=41))
        {
            //electronics
            days=6;
            cout<<"\nYour order will be delivered in "<<days<<" days.\nThank you for shopping!"<< endl;;
        }
        else
        {
            cout<<"\nInvalid choice! Please re-enter your choice "<<endl;
        }
    }
}
void choice()
{
    cout << "\n1.Buy now\n2.Add to cart\n3.Remove from cart\n4.Exit\n";
    cout<<endl<<"Enter your choice:";
    cin >> ch2;
    switch (ch2)
    {
    case 1:
        buynow();
        break;
    case 2:
        enQueue(k[j]);
        break;
    case 3:
        deQueue();
        break;
    case 4:
        cout <<endl<< "Thank You shopping from the Groceries Section!" << endl;
        break;
    default:
        cout << "Invalid Choice!" << endl;
    }
}
int main()
{
     cout<<endl;
    cout<<"**********************************"<<endl;
    cout<<"*                                *"<<endl;
    cout<<"*   --WELCOME TO MINI AMAZON--   *"<<endl;
    cout<<"*                                *"<<endl;
    cout<<"**********************************"<<endl;
    do
    {
    cout<<endl<<"*********************************************\n";
    cout<<" Following are the categories of MINI AMAZON:"<<endl;
    cout<<"*********************************************\n";
    cout<<endl<<"1.Groceries\n2.Luggage\n3.Clothing\n4.Electronics\n5.Go to Cart\n6.Exit"<<endl;
    cout<<"Enter the category you want to shop from: ";
    cin>>ch1;
    if(ch1==1)
    {
        groceries g;
    }
    else if(ch1==2)
    {
        luggage l;
    }
    else if(ch1==3)
    {
        clothing c;
    }
    else if(ch1==4)
    {
        electronics e;
    }
    else if(ch1==5)
    {
        display();
    }
    else if(ch1==6)
    {
        cout<<endl<<"Thank You for shopping with Mini Amazon!"<<endl;
        break;
    }
    else
    {
        cout<<"Invalid choice!"<<endl;
    }
    }while (ch1!=6);
   
    

    for (z = 0; z <= 4; z++)
    {
        k[j] = products[i3];

        j++;
        i3++;
        break;
    }
    return 0;
}
