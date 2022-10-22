#include <iostream>
#include <cmath>
#include <unistd.h>
#include <math.h>

 using namespace std;


//WRITTEN BY PATRICK DAVID// 
//Bug Fixes//

int 
main () 
{
    //Solving Quadratic Equations (b^ - 4(a,c))//
    
    //Holding our quadratic values//
  int ax, bx, c;
    //Other values//
  int x;
cout << "Enter standard form values." << "\n";

cout << "Enter the value of (a)\n";
cin >> ax;
cout << "Enter the value of (b)\n";
cin >> bx;
cout << "Enter the value of (c)\n";
cin >> c;
  
 //The code will now perform squaring the value "b"//
cout << "Squaring the value (b)..." << "\n";
  
int newbx;
newbx = bx * bx;
cout << "(b) is now " << newbx << "." << "\n";
//FLAG - Equation update!//
cout << "Our equation is now " << newbx << " - 4 (" << ax << "," << c << ")" << "\n";
//Explanation//
cout << "The code squared the given value of (b)\n" << "So b(" << bx << ") is (" << bx << " x " << bx << " = " << newbx << ")\n";
//This code will multiply the values of the right side of the equation//
cout << "Proceeding to solve the right side of the equation...\n";
  
int optr;
optr = 4;
int bsqoptr;
bsqoptr = optr * ax;
cout << optr << " x a(" << ax << ") is " << bsqoptr << ".\n";
int bsqoptr2;
bsqoptr2 = bsqoptr * c;
cout << "c(" << c << ") x " << bsqoptr << " is " << bsqoptr2 << ".\n";
  
//Holds the answer discriminant//
int ans;
ans = newbx - bsqoptr2;
  
//Getting the discriminant//
cout << "The code subtracted both sides of the equation.\n" << "So the discriminant is " << newbx << " - " << bsqoptr2 << " = " << ans << ".\n";
cout << "The discriminant is " << ans << ".\n";
 
//Identifying the nature of roots//
int sqrtval;
sqrtval = sqrt (ans);
  
if (ans == 0) {
cout << "So therefore, " << ans << " = 0 Is Both Equal & Rational.\n";
} else if (sqrtval * sqrtval == ans) {
cout << "So therefore, " << ans << " < 0 Has Real Roots & Rational.\n";
}
else if (ans <= 0) {
cout << ans << " Has No Real Roots, And Is An Imaginary Number.\n";
} else if (sqrtval * sqrtval != ans) {
cout << "So therefore, " << ans << " < 0 Has Real Roots, But Irrational.\n";
}

}


 
 
 
 
 
 
 
 
 
 
 
 
 
 
