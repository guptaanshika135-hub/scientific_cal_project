#include<iostream>
#include<cmath>
// #include<cstdlib>
#include<iomanip>
using namespace std;
const double PI = 3.14159265358979323846;
// you can either gave a space or enter so that compiler can identify the two numbers.

void addition(){
    cout<<"you choose addition operation "<<endl;
    cout<<"In this addition operation you entered two or more numbers for addition ... but if you want to terminate then press -1 for it"<<endl;
    double num;
    double sum = 0;
    cout<<"Enter numbers \n";
    while(1){
        cin>>num; 
        if(num>0)
            sum+=num;
        else if(num == -1)
            break;
        else if(num<0)
            break;
    }
    cout<<"addition of this numbers ans is = "<<sum<<endl;
}
void subtraction(){
    cout<<"you choose subtraction operation "<<endl;
    cout<<"In this subtraction operation you entered one or more numbers but if you want to terminate then press 0 for it"<<endl;
    double num;
    double sub = 0;
    cout<<"Enter numbers \n";
    while(1){
        cin>>num; 
        if(num>0)
            sub-=num;
        else if(num == 0)
            break;
        else if(num<0)
            break;
    }
    cout<<"subtraction of this number ans is = "<<sub<<endl;
}
void multiplication(){
    cout<<"you choose multiplication operation "<<endl;
    cout<<"In this multiplication operation you entered  one or more numbers but if you want to  stop then press -1 for it"<<endl;

    long double num;
    long double multi = 1;
    cout<<"Enter numbers \n";
    while(1){
        cin>>num; 
        if(num>0)
            multi*=num;
        else if(num == -1)
            break;
        else if(num<0)
            break;
    }
    cout<<"multiplication of this numbers  = "<<fixed<<setprecision(0)<<multi<<endl;
    // cout<<"you want to do multiplication operation "<<endl;
    // double num1;
    // cout<<"Enter a 1st number = ";
    // cin>>num1;
    // double num2;
    // cout<<"enter a 2nd number = ";
    // cin>>num2;
    // cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
}
void Division(){
    cout<<"you want to do division operation "<<endl;
    double num1;
    cout<<"Enter a 1st number = ";
    cin>>num1;
    double num2;
    cout<<"enter a 2nd number = ";
    cin>>num2;
    cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
}
void Modullus(){
    cout<<"this function give the remainder "<<endl;
    int num1,num2;
    cout<<"enter first number -> ";
    cin>>num1;
    cout<<"Enter second number -> ";
    cin>>num2;
    cout<<"remainder is = "<<num1%num2<<endl;
}
void Square(){
    cout<<"you want to do square operation "<<endl;
    double num;
    cout<<"Enter the number for get squaring number = ";
    cin>>num;
    cout<<"Square of "<<num<<" is = "<<num*num<<endl;
}
void Power(){
    double base, exponent, result;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    result = pow(base, exponent);   // built-in power function from cmath header file
    cout<<base<<" raise to the power "<<exponent<<" is = "<<endl;
}
void Cube(){
    cout<<"you want to do cube operation "<<endl;
    double num;
    cout<<"Enter the number for get cubing number  = ";
    cin>>num;
    cout<<"cube of "<<num<<" is = "<<num*num*num<<endl;
}
void Squareroot(){
    double num;
    cout<<"Enter a number -> ";
    cin>>num;
    if(num<0){
        cout<<"Square root of a negative number is not real. "<<endl;
    }else{
        double result = sqrt(num);
        cout<<"Square root of "<<num<<"is -> "<< result<<endl;
    }
}

double deg2rad(double deg) {
    return deg * (PI / 180.0);
}

void sin_func(){
    double angleDeg, angleRad, result;
    cout << "Enter angle in degrees: ";
    cin >> angleDeg;

    angleRad = deg2rad(angleDeg); // convert in radians
    
    result = sin(angleRad);
    cout << "sin(" << angleDeg << ") = " << result << endl;
}
void cos_func(){
    double angleDeg, angleRad, result;
    cout << "Enter angle in degrees: ";
    cin >> angleDeg;

    angleRad = deg2rad(angleDeg); // convert in radians
    
    result = cos(angleRad);
    cout << "cos(" << angleDeg << ") = " << result << endl;
}
void tan_func(){
    double angleDeg, angleRad, result;
    cout << "Enter angle in degrees: ";
    cin >> angleDeg;

    angleRad = deg2rad(angleDeg); // convert in radians
    
    if (fmod(angleDeg, 180.0) == 90) {
        cout << "tan(" << angleDeg << ") is undefined!" << endl;
    } else {
        result = tan(angleRad);
        cout << "tan(" << angleDeg << ") = " << result << endl;
    }
}
void cot_func(){
    double angleDeg, angleRad, result;
    cout << "Enter angle in degrees: ";
    cin >> angleDeg;

    angleRad = deg2rad(angleDeg); // convert in radians
    
    if (fmod(angleDeg, 180.0) == 0) {
        cout << "cot(" << angleDeg << ") is undefined!" << endl;
    } else {
        result = 1.0 / tan(angleRad);
        cout << "cot(" << angleDeg << ") = " << result << endl;
    }     
}
void sec_func(){
    double angleDeg, angleRad, result;
    cout << "Enter angle in degrees: ";
    cin >> angleDeg;

    angleRad = deg2rad(angleDeg); // convert in radians
    
    if (fmod(angleDeg, 180.0) == 90) {
        cout << "sec(" << angleDeg << ") is undefined!" << endl;
    } else {
        result = 1.0 / cos(angleRad);
        cout << "sec(" << angleDeg << ") = " << result << endl;
    }
}
void cosec_func(){
    double angleDeg, angleRad, result;
    cout << "Enter angle in degrees: ";
    cin >> angleDeg;

    angleRad = deg2rad(angleDeg); // convert in radians
    
    if (fmod(angleDeg, 180.0) == 0) {
        cout << "cosec(" << angleDeg << ") is undefined!" << endl;
    } else {
        result = 1.0 / sin(angleRad);
        cout << "cosec(" << angleDeg << ") = " << result << endl;
    }
}
void Factorial(){
    cout<<"you want to do factorial operation "<<endl;
    int num1;
    cout<<"Enter the number between range(0-99) = ";
    cin>>num1;
    long double ans = 1;
    if(num1==0||num1==1){
        cout<<"Factorial is 1"<<endl;
    }else{
        for(int i = num1;i>=1;i--){
            ans = ans*i;
        }
    }
  
    cout<<"factorial of "<<"number"<<" is = "<<fixed<<setprecision(0)<<ans<<endl;
}
long double factorial(int n) {
    long double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
void permutation(){
    cout<<"you want to do permutation operation "<<endl;
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    
    if (r > n) {
        cout << "Invalid input! r cannot be greater than n." << endl;
    }
    long double nPr = factorial(n) / factorial(n - r);
    cout << "Permutation (nPr): " << nPr << endl;
}
void combination(){
    cout<<"you want to do combination operation "<<endl;
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if (r > n) {
        cout << "Invalid input! r cannot be greater than n." << endl;
    }
    long double nCr = factorial(n) / (factorial(r) * factorial(n - r));
    cout << "Combination (nCr): " << nCr << endl;
}
void absolute(){
    cout<<"you want the absoulte number "<<endl;
    int num;
    cout<<"Enter number -> "<<endl;
    cin>>num;
    if(num<0)
        cout<<"Absolute number of this number is -> "<<(-num)<<endl;
    else    
        cout<<"Absolute number of this number is -> "<<(num)<<endl;
}
void convert_celsius_to_fahrenheit(){
    cout<<"you want to do conversion celsius to fahrenheit operation "<<endl;
    double celsius,fahrenheit;
    cout<<"Fahrenheit to celsius\n";
    cout<<"Enter temperature in Celsius : ";
    cin>>celsius;
    fahrenheit = (celsius*9.0/5.0)+32;
    cout<<"Temperature in fahrenheit = "<< fahrenheit << "°F" <<endl;
}
void convert__fahrenheit_to_celsius(){
    cout<<"you want to do conversion fahrenheit to celsius operation "<<endl;
    double celsius,fahrenheit;
    cout<<"celsius to fahrenheit\n";
    cout<<"Enter temperature in fahrenheit : ";
    cin>>celsius;
    celsius = (fahrenheit-32)*5.0/9.0;
    cout<<"Temperature in celsius = "<< celsius << "°c" <<endl;
}
void Wupper(){
    cout<<"\n\t\t\t\t\t\t\t\t\t";
    for(int i = 1;i<=20;i++)
        cout<<"~ ";
}
void Wdown(){
    cout<<"\n\t\t\t\t\t\t\t\t\t";
    for(int i = 1;i<=20;i++)
        cout<<"~ ";
}
int main (){
    Wupper();
    cout<<"\n\t\t\t\t\t\t\t\t\t   WELCOME TO THE SCIENTIFIC CALCULATOR ";
    Wdown();
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\tPlz ,, select the operation which you have to perform on it ...using below instructions"<<endl<<endl;
    cout<<"1. BASIC AIRTHMETIC OPERATIONS\t\t2.POWER & ROOT FUNCTIONS\t\t3.TRIGONOTMETRY FUNCTIONS\t\t4.FACTORIAL & COMBINATIONS\t\t5).temperature convertor\n\n";
    cout<<"Enter 1 for Addition\t\t\tEnter 6 for square\t\t\tEnter 10 for sin\t\t\tEnter 16 for Factorial\t\tEnter 20 for celcius to farhenit converion."<<endl;
    cout<<"Enter 2 for Subtraction\t\t\tEnter 7 for power\t\t\tEnter 11 for cos\t\t\tEnter 17 for permutation\tEnter 21 for celcius to farhenit converion."<<endl;
    cout<<"Enter 3 for multiplication\t\tEnter 8 for cube\t\t\tEnter 12 for tan\t\t\tEnter 18 for combination"<<endl;
    cout<<"Enter 4 for Division\t\t\tEnter 9 for square_root\t\t\tEnter 13 for cot\t\t\tEnter 19 for abosolute value"<<endl;
    cout<<"Enter 5 for modulus\t\t\t\t\t\t\t\tEnter 14 for sec"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\tEnter 15 for cosec"<<endl;

    cout<<"\n\t\t******Enter 0 to quit this calculator program*****\n"<<endl;
    cout<<"NOTE -> you can either gave a space or enter so that compiler can identify the two numbers or more."<<endl;

while(1){
    int operation;
    cout<<"\nEnter the operation number which you want to do: ";
    cin>>operation;
    
    double angleDeg, angleRad, result;
    switch(operation){
        case 1: addition();
                break;
        case 2: subtraction();
                break;
        case 3: multiplication();
                break;
        case 4: Division();
                break;
        case 5: Modullus();
                break;
        case 6: Square();
                break;
        case 7: Power();
                break;
        case 8: Cube();
                break;
        case 9: Squareroot();
                break;
        case 10:sin_func();
                break;
        case 11: cos_func();
                break;
        case 12: tan_func();
                break;
        case 13: cot_func();
                break;
        case 14: sec_func();
                break; 
        case 15: cosec_func();
                break;
        case 16: Factorial();
                break;
        case 17: permutation();
                break;
        case 18: combination();
                break;
        case 19: absolute();
                break;
        case 20: convert_celsius_to_fahrenheit();
                break;
        case 21: convert__fahrenheit_to_celsius();
                break;
        case 0: 
                cout<<"Thanks for coming and using this calculator "<<endl;
                exit(0);
        default:
                cout<<"\n\n******Wrong choice,Enter valid choice*******\n\n";
                break;
    }
}
    return 0;
    
}