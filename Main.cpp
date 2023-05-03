
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include <iomanip>
using namespace std;


int main()
{
   
   //create before/during boot
   //profile data
    struct profile {
        string name;
        string username;
        int PIN;
    }profile;
    // app select number
    int appSelect;
    //notepad varitable
    string Notepadtext;
   


 // Password slash Bootup Sequence
    cout << "__________" << endl;
    cout << "|         |" << endl;
    cout << "|  ______ |" << endl;
     int numone;
    int numtwo;
    string oper;
    cout << "| |    | |" << endl;
    cout << "| | Booting" << endl;
    cout << "| ------  |" << endl;
    cout << "----------" << endl;
    cout << "Inlnx V0.5 (Testing Phase)" << endl;
    



    int password;
    int createdPass;
    cout << "Create password." << endl;
    cin >> createdPass;
    cout << "Re-enter" << endl;
    cin >> profile.PIN;

   



    // Validates Password.
    if (profile.PIN == createdPass) {

        cout << "correct. Welcome" << endl;




        //  switch for home screen  
        cout << "Enter 1 for commands" << endl;
        
        
        
        cin >> appSelect;

        
        
        
            
         switch (appSelect) {
        case 1:
            cout << "Commands. 1=commands 2=Notepad 3=profile 4=Calculator" << endl;
            break;
        case 2:
            cout << "Welcome to notepad. press enter to get text repeated"<< endl;
            cin >> Notepadtext;
            cout << Notepadtext; 
            break;
        case 3:
            cout << "Enter first name" << endl;
            cin >> profile.name;
            cout << "Enter PIN" << endl;
            cin >> profile.PIN;
            cout << "Enter username" << endl;
            cin >> profile.username;
            cout <<"welcome" << profile.name << endl;
            cout << "Username =" << profile.username;
            //Validate Info
            if (profile.PIN == createdPass) {
            
                cout << "Correct";
            }
            else {
                cout << "incorrect"
            }
            
            
            break;
        case 4:
            cout << "Welcome to calculator" << endl;
            cout << "enter first number" << endl;
            cin >> numone
            cout << "enter second" << endl;
               
            break;
        case 5:
            cout << "Five" << endl;
            break;
        case 6:
            cout << "Six" << endl;
            break;
        case 7:
            cout << "Seven" << endl;
            break;
        case 8:
            cout << "Eight" << endl;
            break;
        case 9:
            cout << "Nine" << endl;
            break;
        case 10:
            cout << "ten" << endl;
            break;
        default:
            cout << "Error: App not found" << endl;
            break;
    }
}












    
          




    
    else {
        cout << "incorrrect. Reload to try again!";

    };

}
