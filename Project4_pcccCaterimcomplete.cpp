/*
    Name: Nicolas Quiroz
    Class: Fund/Comp Sci I
    Date: Oct 17, 2023
    Program Name: Passaic County Catering & Convention Services Billing
    Billing Description: A computerized billing 
    system that Compute and prints a statement of
    charges for customers. It displays the companies name,
    customers name, costs and deposits.
*/ 

#include <iostream>
#include <iomanip>

using namespace std;


const double HALL_A = 100.00, HALL_B = 85.00, HALL_C = 75.00, HALL_D = 65.00, HALL_H = 0;
const double DELUXE_MEAL = 29.95, STANDARD_MEAL = 25.75;

void introduction();
void getadults(int&);
void getchildren(int&);
void gethall(double&);
void getweekend(bool&);
void getmeal(double&);
void getspeedy(bool&);
void getdeposit(double&);
void calculations(int, int, double, bool, double, bool, double,double);
void output();

int main(){

    int adultscount, childrencount;
    double hall, food, deposit,costpermealforadult,costpermealforchild;
    bool weekendcharge, speedy;

    introduction();
    getadults(adultscount);
    getchildren(childrencount);
    gethall(hall);
    getweekend(weekendcharge);
    getmeal(food);
    getspeedy(speedy);
    getdeposit(deposit);
    calculations(adultscount, childrencount,hall,weekendcharge,food,speedy,deposit,costpermealforadult,costpermealforchild)
    return 0;
}
void introduction(){
    cout << "WELCOME TO:\n"
    cout << "\tCaswell Catering and Convention Services\n";
    cout << "Please fill up the next information to continue:\n";
}
void getadults(int& adultscount){
    cout << "How many adults are invited?\n" ; cin >> adultscount;
}

void getchildren(int& childrencount){
    cout << "How many children are invited?\n" ; cin >> childrencount;
}

void gethall(double& hall){
    char letter;
    cout << "From the Selection:\n";
    cout << "\ta. Hall A = $100.00\n\tb. Hall B = $85.00 \n\tc. Hall C = $75.00 \n\td. Hall D = $65.00 \n\te. Hall H = is home\n" ;
    cout << "Please Enter the letter associated with the location of the party: \n";
    cin >> letter;
    char lowerletter = tolower(letter);
    switch (lowerletter){
        case 'a':
            hall = HALL_A;
            break;
        case 'b':
            hall = HALL_B;
            break;
        case 'c':
            hall = HALL_C;
            break;
        case 'd':
            hall = HALL_D;
            break;
        case 'e':
            hall = HALL_H;
            break;
    }
}
void getweekend(bool& weekendcharge){
    string day;
    char dayd;
    cout << "Will the even take place on a weekend?\n";
    cin >> day;
    dayd = day[0];
    char uperday = toupper(dayd);
    switch (uperday){
        case 'Y':
            weekendcharge = true;
            break;
        case 'N':
            weekendcharge = false;
            break;
    }
}

void getmeal(double& food){
    string meal;
    char mealc,mealcc;
    cout << "From the Selection:\n";
    cout << "\tDeluxe = $29.95\n\tStandard = $25.75\n" ;
    cout << "What type of food will you be ordering?\n";
    cin >> meal;
    mealc = meal[0];
    mealcc = toupper(mealc);
    switch (mealcc){
        case 'D':
            food = DELUXE_MEAL;
            break;
        case 'S':
            food = STANDARD_MEAL;
            break;
    }
}

void getspeedy(bool& speedy){
    string speed;
    cout << "Will you use speedy payment?\n";
    cin >> speed;
    char speedchar = speed[0]; 
    char upperspeed = toupper(speedchar);
    switch (upperspeed){
        case 'Y':
            speedy = true;
            break;
        case 'N':
            speedy = false;
            break;
    }
}

void getdeposit(double& deposit){
    cout << "Please enter your deposit amount\n";
    cout << "$"; 
    cin >> deposit;
}

void operations(int& adultscount,int& childrencount,double& hall,bool& weekendcharge,double& food,bool& speedy,double& deposit,double costpermealforadult,double costpermealforchild){
    costpermealforadult = ;
    costpermealforchild;
}
/*
weekendcharge = totalfoodcost * .10
weekendcharge = 0
void operations(){}
void out(){}

putchar changes 
getchar 
toupper 
tolower
switch expression cases always needs to break 
*/