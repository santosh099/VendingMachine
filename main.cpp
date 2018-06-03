#include <iostream>

using namespace std;

int num;
double amount = 0;
double purchase = 0;
double initial_amount;

void main_menu();
void drinks_menu();
void snack_menu();

int main()
{
    cout<<"Welcome to the UB vending machine"<<endl;
    cout<<"Enter the number of nickels you wish to insert: ";
    cin>>num;
    amount = num * 0.05;
    initial_amount = amount;
    cout<<"You inserted "<<amount<<" dollars"<<endl;
    main_menu();
    return 0;
}

void main_menu()
{
    int n1;
    do
    {
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"Main menu:"<<endl;
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"[1] Drinks"<<endl;
        cout<<"[2] Snacks"<<endl;
        cout<<"[3] Exit"<<endl;
        cout<<"Select an option <3 to exit>: ";
        cin>>n1;
        switch(n1)
        {
           case 1: drinks_menu();
                   break;

           case 2: snack_menu();
                   break;

           case 3: cout<<"----------------------------------------------------------"<<endl;
                   cout<<"Inserted amount: "<<initial_amount<<", total purchase: "<<purchase<<", change: "<<initial_amount-purchase<<endl;
                   cout<<"Good Bye!"<<endl;
                   cout<<"----------------------------------------------------------"<<endl;
                   break;

           default:cout<<"----------------------------------------------------------"<<endl;
                   cout<<"Invalid option!"<<endl;
                   cout<<"----------------------------------------------------------"<<endl;
        }
    }while(n1!=3);

}

void drinks_menu()
{
   char a;
   do
   {
       cout<<"----------------------------------------------------------"<<endl;
       cout<<"Drinks menu"<<endl;
       cout<<"----------------------------------------------------------"<<endl;
       cout<<"[W]ater   $0.75"<<endl;
       cout<<"[J]uice   $0.99"<<endl;
       cout<<"[S]oda    $1.39"<<endl;
       cout<<"Select a drink by entering the character inside the brackets"<<endl;
       cout<<" <X to exit to the main menu>"<<endl;
       cout<<"Drink option: ";
       cin>>a;
       switch(a)
       {
           case 'W': if(amount<0.75)
                     {
                         cout<<"you don't have enough money to buy water < "<<amount<<" 0.75 >"<<endl;
                     }
                     else
                     {
                         cout<<"----------------------------------------------------------"<<endl;
                         cout<<"Vending water, you have "<<amount-0.75<<" dollars left"<<endl;
                         cout<<"----------------------------------------------------------"<<endl;
                     }
                     amount = amount - 0.75;
                     purchase = purchase + 0.75;
                     break;

           case 'J': if(amount<0.99)
                     {
                         cout<<"you don't have enough money to buy juice < "<<amount<<" 0.99 >"<<endl;
                     }
                     else
                     {
                         cout<<"----------------------------------------------------------"<<endl;
                         cout<<"Vending juice, you have "<<amount-0.99<<" dollars left"<<endl;
                         cout<<"----------------------------------------------------------"<<endl;
                     }
                     amount = amount - 0.99;
                     purchase = purchase + 0.99;
                     break;

           case 'S': if(amount<1.39)
                     {
                         cout<<"you don't have enough money to buy soda < "<<amount<<" 0.99 >"<<endl;
                     }
                     else
                     {
                         cout<<"----------------------------------------------------------"<<endl;
                         cout<<"Vending soda, you have "<<amount-1.39<<" dollars left"<<endl;
                         cout<<"----------------------------------------------------------"<<endl;
                     }
                     break;
                     amount = amount - 1.39;
                     purchase = purchase + 1.39;

           case 'X': break;

           default: cout<<"----------------------------------------------------------"<<endl;
                    cout<<"Invalid option!"<<endl;
                    cout<<"----------------------------------------------------------"<<endl;
       }
   }while(a != 'X');
}

void snack_menu()
{
    char a;
    do
   {
       cout<<"----------------------------------------------------------"<<endl;
       cout<<"Snacks menu"<<endl;
       cout<<"----------------------------------------------------------"<<endl;
       cout<<"[C]hips    $0.99"<<endl;
       cout<<"[P]eanuts  $0.50"<<endl;
       cout<<"[G]um      $0.35"<<endl;
       cout<<"Select a snack by entering the character inside the brackets"<<endl;
       cout<<" <X to exit to the main menu"<<endl;
       cout<<"Snack option: ";
       cin>>a;
       switch(a)
       {
           case 'C': if(amount<0.99)
                     {
                         cout<<"you don't have enough money to buy chips < "<<amount<<" 0.99 >"<<endl;
                     }
                     else
                     {
                         cout<<"----------------------------------------------------------"<<endl;
                         cout<<"Vending chips, you have "<<amount-0.99<<" dollars left"<<endl;
                         cout<<"----------------------------------------------------------"<<endl;
                     }
                     amount = amount - 0.99;
                     purchase = purchase + 0.99;
                     break;

           case 'P': if(amount<0.50)
                     {
                         cout<<"you don't have enough money to buy peanuts < "<<amount<<" 0.50 >"<<endl;
                     }
                     else
                     {
                         cout<<"----------------------------------------------------------"<<endl;
                         cout<<"Vending juice, you have "<<amount-0.50<<" dollars left"<<endl;
                         cout<<"----------------------------------------------------------"<<endl;
                     }
                     amount = amount - 0.50;
                     purchase = purchase + 0.50;
                     break;

           case 'G': if(amount<0.35)
                     {
                         cout<<"you don't have enough money to buy gum < "<<amount<<" 0.35 >"<<endl;
                     }
                     else
                     {
                         cout<<"----------------------------------------------------------"<<endl;
                         cout<<"Vending gum, you have "<<amount-0.35<<" dollars left"<<endl;
                         cout<<"----------------------------------------------------------"<<endl;
                     }
                     amount = amount - 0.35;
                     purchase = purchase + 0.35;
                     break;

           case 'X': break;

           default: cout<<"----------------------------------------------------------"<<endl;
                    cout<<"Invalid option!"<<endl;
                    cout<<"----------------------------------------------------------"<<endl;
                    break;
       }
   } while (a != 'X');
}
