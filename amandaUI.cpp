#include <iostream>
using namespace std;

void login()
{
    cout << "                                                                     _                                              _" << endl;
    cout << "                                                                  __| |____________________________________________| |__" << endl;
    cout << "                                                                 (__   ____________________________________________   __)" << endl;
    cout << "                                                                    | |                                            | |" << endl;
    cout << "                                                                    | |                                            | |" << endl;
    cout << "                                                                    | |     < Welcome to Osaka Travel Agency >     | |" << endl;
    cout << "                                                                    | |                                            | |" << endl;
    cout << "                                                                    | |                Are you...?                 | |" << endl;
    cout << "                                                                    | |                                            | |" << endl;
    cout << "                                                                    | |                 1. Admin                   | |" << endl;
    cout << "                                                                    | |                 2. User                    | |" << endl;
    cout << "                                                                    | |                                            | |" << endl;
    cout << "                                                                  __| |____________________________________________| |__" << endl;
    cout << "                                                                 (__   ____________________________________________   __)" << endl;
    cout << "                                                                    |_|                                            |_|" << endl;
    cout << endl;
}

void mainPage()
{
    cout << "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" << endl;
    cout << "                                                                 .---------------------------------------------." << endl;
    cout << "                                                                 | .------------------------------------------. |" << endl;
    cout << "                                                                 | |                                          | |" << endl;
    cout << "                                                                 | |    < Welcome to Osaka Travel Agency >    | |" << endl;
    cout << "                                                                 | |                                          | |" << endl;
    cout << "                                                                 | |       How may I assist you today?        | |" << endl;
    cout << "                                                                 | |                                          | |" << endl;
    cout << "                                                                 | |           1. Travel Packages             | |" << endl;
    cout << "                                                                 | |           2. Shopping Cart               | |" << endl;
    cout << "                                                                 | |           3. Exit                        | |" << endl;
    cout << "                                                                 | |                                          | |" << endl;
    cout << "                                                                 | |_________________________________________ | |" << endl;
    cout << "                                                                 |___________________________________________oo_|" << endl;
    cout << "                                                                                 ______)___(______," << endl;
    cout << "                                                                                |_________________| 8\n" << endl;
}

void invalid()
{
    cout << endl;
    cout << "                                                                     _______________________________________ " << endl;
    cout << "                                                                    !                                       !" << endl;
    cout << "                                                                    !            Invalid Choice!!           !" << endl;
    cout << "                                                                    !_______________________________________!" << endl;
}

void thankyou()
{
    cout << endl;
    cout << "                                                                + ---------------------------------------------- + " << endl;
    cout << "                                                                |                                                |" << endl;
    cout << "                                                                |    Thanks for choosing Osaka Travel Agency!    |" << endl;
    cout << "                                                                |                                                |" << endl;
    cout << "                                                                + ---------------------------------------------- +" << endl;
}

void addCart()
{
    cout << endl;
    cout << "                                                                   ===========================================" << endl;
    cout << "                                                                   |                                         |" << endl;
    cout << "                                                                   |         Package added to cart!          |" << endl;
    cout << "                                                                   |                                         |" << endl;
    cout << "                                                                   ===========================================" << endl;
}

void removeCart()
{
    cout << endl;
    cout << "                                                                   ===========================================" << endl;
    cout << "                                                                   |                                         |" << endl;
    cout << "                                                                   |       Package removed from cart!        |" << endl;
    cout << "                                                                   |                                         |" << endl;
    cout << "                                                                   ===========================================" << endl;
}

void invalidTP()
{
    cout << endl;
    cout << "                                                                     _______________________________________ " << endl;
    cout << "                                                                    !                                       !" << endl;
    cout << "                                                                    !                                       !" << endl;
    cout << "                                                                    !        Invalid Travel Package!        !" << endl;
    cout << "                                                                    !                                       !" << endl;
    cout << "                                                                    !_______________________________________!" << endl;
}

void emptyCart()
{
    cout << endl;
    cout << "                                                                       ___________________________________" << endl;
    cout << "                                                                      /                                   \\" << endl;
    cout << "                                                                     |                                     |" << endl;
    cout << "                                                                     |     Your cart is still empty...     |" << endl;
    cout << "                                                                     |                                     |" << endl;
    cout << "                                                                      \\___________________________________/\n" << endl;
}

void cartMenu()
{
    cout << endl;
    cout << "                                                                   > > > > > > > > > > > > > > > > > > > > > >" << endl;
    cout << "                                                                   ^                                         ^" << endl;
    cout << "                                                                   ^       1.  Remove Travel Package         ^" << endl;
    cout << "                                                                   ^                                         ^" << endl;
    cout << "                                                                   ^       2.  Payment                       ^" << endl;
    cout << "                                                                   ^                                         ^" << endl;
    cout << "                                                                   ^       3.  Return to Main Menu           ^" << endl;
    cout << "                                                                   ^                                         ^" << endl;
    cout << "                                                                   > > > > > > > > > > > > > > > > > > > > > >" << endl;
    cout << endl;
}

void adminMenu()
{
    cout << "\n--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n" << endl;
    cout << "                                                          _.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._" << endl;
    cout << "                                                        .-'---      - ---     --     ---   -----   - --       ----  ----   -     ---`-." << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (                                                                             )" << endl;
    cout << "                                                        )                         < Osaka Travel Agency >                           (" << endl;
    cout << "                                                       (                                                                             )" << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (                      1. Add Travel Package                                  )" << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (                      2. Display Current Travel Packages                     )" << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (                      3. Edit Travel Package                                 )" << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (                      4. Delete Travel Package                               )" << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (                      5. Back to Main Menu                                   )" << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (                      6. Exit                                                )" << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (                                                                             )" << endl;
    cout << "                                                        )                                                                           (" << endl;
    cout << "                                                       (___       _       _       _       _       _       _       _       _       ___)" << endl;
    cout << "                                                           `-._.-' (___ _) (__ _ ) (_   _) (__  _) ( __ _) (__  _) (__ _ ) `-._.-'" << endl;
    cout << "                                                                   `-._.-' (  ___) ( _  _) ( _ __) (_  __) (__ __) `-._.-'" << endl;
    cout << "                                                                           `-._.-' (__  _) (__  _) (_ _ _) `-._.-'" << endl;
    cout << "                                                                                   `-._.-' (_ ___) `-._.-'" << endl;
    cout << "                                                                                           `-._.-'" << endl;
    cout << endl;
}

void TPnotFound()
{
    cout << endl;
    cout << "                                                                     _______________________________________ " << endl;
    cout << "                                                                    !                                       !" << endl;
    cout << "                                                                    !                                       !" << endl;
    cout << "                                                                    !       Travel Package not found !      !" << endl;
    cout << "                                                                    !                                       !" << endl;
    cout << "                                                                    !_______________________________________!" << endl;
}

void editMenu()
{
    cout << endl;
    cout << "                                                                   =============================================" << endl;
    cout << "                                                                   |                                           |" << endl;
    cout << "                                                                   |  < Which value would you like to edit? >  |" << endl;
    cout << "                                                                   |                                           |" << endl;
    cout << "                                                                   |      1.  Edit Country                     |" << endl;
    cout << "                                                                   |                                           |" << endl;
    cout << "                                                                   |      2.  Edit State                       |" << endl;
    cout << "                                                                   |                                           |" << endl;
    cout << "                                                                   |      3.  Edit Duration                    |" << endl;
    cout << "                                                                   |                                           |" << endl;
    cout << "                                                                   |      4.  Edit Cost                        |" << endl;
    cout << "                                                                   |                                           |" << endl;
    cout << "                                                                   |      5.  Previous Menu                    |" << endl;
    cout << "                                                                   |                                           |" << endl;
    cout << "                                                                   =============================================" << endl;
    cout << endl;
}

void changed()
{
    cout << endl;
    cout << "                                                                   ============================================" << endl;
    cout << "                                                                   |                                          |" << endl;
    cout << "                                                                   |      You have changed successfully !     |" << endl;
    cout << "                                                                   |                                          |" << endl;
    cout << "                                                                   ============================================" << endl;
}

void invalidAdmin()
{
    cout << endl;
    cout << "                                                                          _______________________________________ " << endl;
    cout << "                                                                         !                                       !" << endl;
    cout << "                                                                         !        Incorrect credentials !        !" << endl;
    cout << "                                                                         !_______________________________________!" << endl;
    cout << endl;
}