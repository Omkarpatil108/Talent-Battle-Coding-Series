// #include <iostream>
// using namespace std;
// void check(int,int,int);

// int main()
// {
//     check(2,4,6);
// }

// void check(int a,int b,int c)
// {
//     int sum=a*a*a+b*b*b+c*c*c;
//     if(a*a*a+b*b*b+c*c*c==sum)
//     {
//         cout<<"armstrong";
//     }
//     else{
//         cout<<endl<<"not";
//     }
    
// }


































#include <iostream>
using namespace std;
void fun(int numbr);

void main()
{
int num, originalNum, remainder, result = 0;
cout << "Enter a three-digit integer: ";
cin >> num;
fun(num);
}
void fun(int numbr)
{
int originalNum, remainder, result = 0;
originalNum = numbr;
while (originalNum != 0) {

// here remainder contains the last digit

remainder = originalNum % 10;



result += remainder * remainder * remainder;



// it will removing last digit from the orignal number

originalNum /= 10;

}



if (result == numbr)

cout << numbr << " is an Armstrong number.";

else

cout << numbr << " is not an Armstrong number.";

}
