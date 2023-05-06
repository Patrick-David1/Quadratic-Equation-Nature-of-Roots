#include <iostream>
#include <cmath>
#include <unistd.h>
#include <math.h>

 using namespace std;

int 
main () 
{
  int ax, bx, c;
    
  int x;
cout << "Enter standard form values." << "\n";

cout << "Enter the value of (a)\n";
cin >> ax;
cout << "Enter the value of (b)\n";
cin >> bx;
cout << "Enter the value of (c)\n";
cin >> c;
  
cout << "Squaring the value (b)..." << "\n";
  
int newbx;
newbx = bx * bx;
cout << "(b) is now " << newbx << "." << "\n";

cout << "Our equation is now " << newbx << " - 4 (" << ax << "," << c << ")" << "\n";

cout << "The code squared the given value of (b)\n" << "So b(" << bx << ") is (" << bx << " x " << bx << " = " << newbx << ")\n";

cout << "Proceeding to solve the right side of the equation...\n";
  
int optr;
optr = 4;
int bsqoptr;
bsqoptr = optr * ax;
cout << optr << " x a(" << ax << ") is " << bsqoptr << ".\n";
int bsqoptr2;
bsqoptr2 = bsqoptr * c;
cout << "c(" << c << ") x " << bsqoptr << " is " << bsqoptr2 << ".\n";
  

int ans;
ans = newbx - bsqoptr2;
  

cout << "The code subtracted both sides of the equation.\n" << "So the discriminant is " << newbx << " - " << bsqoptr2 << " = " << ans << ".\n";
cout << "The discriminant is " << ans << ".\n";
 
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


 
 
 
 
 
 
 
 
 
 
 
 
 
 
