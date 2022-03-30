// Write a program to compile al laboratory activities 
#include <iostream> // This is the directive for input and output 
using namespace std; // Use standard namespace 
#include <math.h> // Allow to use math function
int main() // Main function 
{ // To open the main function block 
	char option;
    bool end = false;
    do 
    { 
    cout << "\nMAIN MENU: Select Laboratory Activity " << endl; // display MAIN MENU: Select laboratory Activity
    cout << "[1] On Arithmetric Operators " << endl; // display Arithmetric Operators
    cout << "[2] Calculate Area and circumference of circle or Temperature Conversion " << endl; // display Calculate Area and circumference of circle or Temperature Conversion
    cout << "[3] aceept age, and name. If age is even print name 10 times. If odd, print name 5 times " << endl; // display aceept age, and name. If age is even print name 10 times. If odd, print name 5 times
    cout << "[4] accept the current temperature and display the following messages based on the range given on the table below. Validate user inputs " << endl; // display accept the current temperature and display the following messages based on the range given on the table below. Validate user inputs
    cout << "[5] On Prime and Composite " << endl;  // display Prime and Composite
    cout << "[6] to accept the exam score and count the total number of grades in each lettergrade category " << endl; // display accept the exam score and count the total number of grades in each lettergrade category
    cout << "[X] Exit" << endl; // display exit
    cout << "Your choose:"; // display choose 
    cin >> option; // accept the choice and store it in option
    switch (option)
    {
        case '1':
        {
            cout << "This program is accept num1, num2, num3 to calculate the sum product and average." << endl; // display This program is accept num1, num2, num3 to calculate the sum product and average
            int num1,num2,num3,sum,product,average; // declare variables num1,num2,num3, sum, product, average
            cout<<"Enter first number"; // display Enter the first number
            cin>>num1; // accept the number and store it in num 2
            cout<<"Enter second number"; // display Enter the second number
            cin>>num2; // accept the number and store it in num 2 
            cout<<"Enter third number"; // display Enter the third number
            cin>>num3; // accept the number and store it in num3 
            sum=num1+num2+num3;  // sum = num1 + num2 + num3
            product=num1*num2*num3; //product = num1 * num2 * num3
            average=sum/3; //average = sum/3 
            cout<<"\nThe sum of "<<num1<<","<<num2<<","<<num3<<" is = "<<sum; // display The sum of the num1, num2 , num3, is = sum
            cout<<"\nThe average of "<<num1<<","<<num2<<","<<num3<<" is = "<<average;  // display The sum of the num1, num2 , num3, is = average
            cout<<"\nThe product of "<<num1<<","<<num2<<","<<num3<<" is = "<<product;  // display The sum of the num1, num2 , num3, is = product
            break;
        }
        case '2':
         {
             bool done = false;
             char choices; // declare variable choices
                cout << "SELECT PROGRAMS"<< endl; 
                cout << "[A] Circumference and Area" << endl;
                cout << "[B] Temperature Conversion" << endl;
                cout << "[C] Go back to the main menu" << endl;
                cout << "Your choices:" ; // display Your choices:
                cin >> choices;  // accept the choice and store it in choices 
                switch (choices) // switch if condition in the choices options 
                { // open switch function 
                    do {
                    case 'A' : // case A
                    {
                        float r,area,circumference; // r for radius
                        cout<<"Enter radius "; // Ask the user to enter the radius
                        cin>>r; // Accept the radius
                        area = M_PI * r * r; // Formula of area of the circle 
                        circumference = 2 * M_PI * r; // Formula of circumference of the circle 
                        cout<<"\nThe area of the circle is "<<area; // tell us the area of the circle
                        cout<<"\nThe circumference of the circle is "<<circumference; // tell us the circumference of the circle
                        break;
                    }
                    case 'B':
                    {
                        float c,f,k; // c for celsius, f for fahrenheit and k for kelvin
                        cout<<"Enter degrees in celsius "; // ask the user to enter degrees in celsius
                        cin>>c; // accept the celsius
                        f = 9.0/5 * c + 32.0; // formula of fahrenheit
                        k = c + 273.0; // formula of kelvin 
                        cout<<"\nThe value of "<<c<<" degrees C in K is: "<<k; // tell us about the value of degrees C in K
                        cout<<"\nThe value of "<<c<<" degrees C in F is: "<<f; // tell us about the value of degrees C in F
                        break;
                    }
                    case 'C':
                    {
                        cout << "Go back to the main menu";
                        break;
                    }
                    default:
                    cout << "Invalid Inputs";
                    break;
                    } while (!done);
                }
                break;
            }
        case '3': 
        {
            cout << "Thus is a program to aceept age, and name. If age is even print name 10 times. If odd, print name 5 times." << endl;
            int age; // declare the age
            string name; // declare valuable for name
            int i ; // declare valuable i 
            cout<<"Enter name "; // ask the user to enter name
            cin>>name; // accept name
            cout<<"Enter age "; // ask the user to enter age
            cin>>age; // accept the age
            for( i=1 ; i<=10 ; ++i) // loop 10 times
            { // open the for function
                   if (age%2 == 0) // declare the condition
                   { // open the if function
                        cout<<"\n"<<name<<""; // tell us about the name
                   } // close the if function
            } // close the for function block
            for( i=1 ; i<=5 ; ++i) // loop 5 times 
            { // open the for function
                    if (age%2 == 1) // declare the condition
                    { // open the if function 
                       cout<<"\n"<<name<<""; // tell us about the name
                    } // close the function
            } // close the function
            break;
        }
        case '4':{
            cout << "This is a program to accept the current temperature and display the following messages based on the range given on the table below. Validate user inputs." << endl;
            int temperature; // define the temperature
            cout << " Enter the temperature "; // Ask the user to enter the temperature
            cin >> temperature;  // Accept the temperature
            if ( temperature > 54 )  // Declare the condition for temparature above 54
            {  // To open the if function block
                cout << " you are out of range "; // To print out the message for the user
            } // To close the if function block
                if ( temperature >= 41 and temperature <= 54) // Declare the condition for temparature above 41 and below 54
            {  // To open the if function block
                cout << " Stay hydrated "; // To print out the message for the user
            } // To close the if function block
                else if ( temperature >= 32 and temperature <= 40 ) // Declare the condition for temparature above 32 and below 40
            {  // To open the else if function block
                cout << "Stay cool and safe "; // To print out the message for the user 
            } // To close the else if function block
              else if ( temperature >= 26 and temperature <= 31 ) // Declare the condition for temparature above 26 and below 31
            {  // To open the else if function block
                cout << " Keep a sunblock handy "; // To print out the message for the user 
            } // To close the else if function block
                else if ( temperature >= 20 and temperature <= 25 ) // Declare the condition for temparature above 20 and below 25
            {   // To open the else if function block
                cout <<  " Always keep your cool! "; // To print out the message for the user
            } // To close the else if function block
                else if ( temperature < 20 ) // Declare the condition for temparature below 20
            {  // To open the else if function block
               cout <<  " Cool breeze in the air "; // To print out the message for the user
            } // To close the else if function block
            break;
        }
        case '5':
        {
            cout << "This is a program to accept a number and determine if it a prime or composite: " << endl;
            int num,divisor,i;        // declare variables 
            bool isprime = true;       // statement is true
            cout << "Enter the Number:"; // ask the user to enter the number
            cin >> num; // accept the number and store in num

            if (num < 1)            // condition number small than 1 
                cout << "Number needs to be greater than 1 "; // display "Number need to be greater than 1"
            else if (num==1)    // condition the number is equal to 1 
                cout << "1 is neither Prime nor Composite number" << endl;  // print 1 is neither prime nor composite number
            else            // other condition
            {               // open else function
                for (divisor =2; divisor <= (num/2); divisor++) // initialize divisor=2, condition divisor smaller or equal to num/2, take the value of divisor and then increments it
                {                       // open for functions
                    if (num % divisor ==0)    // condition remainder of num/divisor equal to 0
                    {                   // open if function
                        isprime = false;    // condition if boolean isprime is false
                        break;             // we move on
                    }                       // close if function
                }                           // close for functions
                if (isprime)                                       // if it is prime
                    cout << num << " is a Prime Number" << endl; // display that this is a prime number
                else                                            // other condition
                    cout << num << " is a Composite Number" << endl; // display that this is a composite number
                    cout << "The factors of " << num << " are :" << endl; // list the factors of the number
                for (i=1; i <= num; i++)                // initialize i=1, condition i<= num, 
                    {                       // open for function
                        if (num % i ==0)            // if num divide by i remainder = 0 
                        cout << i << " ";       // display i to the user
                    }                   // close for function
            }                       // to close else function
            break;
        }
        case '6': 
        {
            cout << "This is a program to accept the exam score and count the total number of grades in each lettergrade category " << endl; 
            int A =0;  // declare variable A
            int B =0;   // declare variable B
            int C =0;   // declare variable C
            int D =0;   // declare variable D
            int F =0;   // declare varaible F
            double examscore;           // decalre numeric varaible examscore
            cout << "Enter scores:";    // ask the user to enter the scores
            cin >> examscore;              // accept the score and store in the examscore
            while (examscore >=0 && examscore <=100)        // condition if the exam score range from 0-100
            {                                            // open while loop
                if (examscore > 89 && examscore <=100)      // condition for the examscore is bigger than 89 but smaller than 100
                {                                           // open if function
                    A++;                                    // A+1
                    cin >> examscore;                       // accept examscore
                }                                              // close if function
                else if (examscore >79 && examscore <=89)          // condition the examscore is bigger than 79 but smaller than 89 
                {                                              // open else if function
                    B++;                                    // B+1
                    cin >> examscore;                       // accept examscore
                }                                           // close else if function
                else if (examscore >69 && examscore <=79)       // condition if examscore bigger than 69 and less than or equal to 79
                {                                             // open else if function
                    C++;                                     // C+1
                    cin >> examscore;                       // accept examscore
                }                                           // close else if function
                else if (examscore >59 && examscore <=69)   // condition if examscore is smaller than 59 to smaller or equal to 69
                {                                           // open else if function
                    D++;                                    // D+1
                    cin >> examscore;                       // accept examscore
                }                                           // close else if function
                else if (examscore >=0 && examscore <=59)   // condition if examscore if bigger or equal to 0 to smaller or equal to 59
                {                                           // open else if function
                    F++;                                    // F+1
                    cin >> examscore;                       // accept examscore
                }                                           // close else if function
                else                                         // other condition
                {                                           // open else function
                    cout << "Invalid inputs" ;               // display invalid inputs to the user
                }                                           // close else function
            }                                            // close while loop
            cout << "Numbers of A's: " << A << endl;    // display the total numebr of A
            cout << "Numbers of B's: " << B << endl;    // display the total numebr of B
            cout << "Numbers of C's: " << C << endl;    // display the total numebr of C
            cout << "Numbers of D's: " << D << endl;    // display the total numebr of D
            cout << "Numbers of F's: " << F << endl;    // display the total numebr of F
            int total;                                  //declare varaible total
            total = A + B + C + D +F;                               // to calculate the total score of A,B,C,D and F
            cout << "Total number of scores: " << total << endl; // print the total number of scores
            break;
        }
        case 'X': 
            cout << "Exit";
            break;
            default:
            cout << "Invalid Input";
            break;
        }
    
    } 
    while (!end);
    return 0;
}