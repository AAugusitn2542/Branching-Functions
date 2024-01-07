// Student ID: andre_a2542
// Replace the number above with your Student ID
// 
// Branching-Functions.cpp
// BLUE-Quest-03

// Forward declarations of functions that will be used in this file
// before their definitions are encountered by the compiler
double mean_of_3(int n1, int n2, int n3);
int max_of_5(int n1, int n2, int n3, int n4, int n5);
int min_of_5(int n1, int n2, int n3, int n4, int n5);
bool sides_make_triangle(int a, int b, int c);
bool angles_make_triangle(int A, int B, int C);
bool is_a_leap_year(int year);





#include <iostream>
// This function returns the mean the three numbers passed 
// in as parameters. Note that the mean may not be a round 
// number. So you must use the double datatype for it.
double mean_of_3(int n1, int n2, int n3) {
 // TODO - YOUR CODE HERE
  return (n1 + n2 + n3) / 3.0;

}
// This function returns the maximum of the 5 given numbers
int max_of_5(int n1, int n2, int n3, int n4, int n5) {
 // TODO - YOUR CODE HERE
 int max =  n5;
 if (n2 > max){
    max = n2;
 } else if(n3 > max){
    max = n3;
 } else if(n4 > max){
    max = n4;   
 }  else if(n5 > max) {
    max = n5;
 }


 return max;
}
// This function returns the minimum of the 5 given numbers
int min_of_5(int n1, int n2, int n3, int n4, int n5) {
 // TODO - YOUR CODE HERE
 int min =  n4;
 if (n2 > min){
    min = n2;
 } else if(n3 > min){
    min = n3;
 } else if(n4 > min){
    min = n4;   
 }  else if(n5 > min) {
    min = n5;
 }


 return min;
}

// Given three lengths, this function should return whether they can be the
// sides of some triangle. The heuristic you code should check if the
// sum of the two smallest sides is greater than or equal to the third side.
// Treat extreme cases as valid triangles. E.g. a+b == c means valid triangle.
// The challenge is to do it without using arrays
bool sides_make_triangle(int a, int b, int c) {
 // TODO - YOUR CODE HERE
 return (a + b > c) && (b + c > a) && (c + b > b); // Intergrating the Triangle Inequlity Therom  
}
// Given three angles as integer degrees, this function should return whether
// they can be internal angles of some triangle. Treat extreme cases as
// valid triangles. E.g. (0, 0, 180) is a valid triangle
bool angles_make_triangle(int A, int B, int C) {
 // TODO - YOUR CODE HERE
 return (A > 0) && (B > 0) && (C > 0) && (A + B + C == 180);
}
// Return true if the year yyyy is a leap year and false if not.
bool is_a_leap_year(int yyyy) {
 // TODO - YOUR CODE HERE
 return (yyyy % 4 == 0) && ((yyyy % 100 != 0) || (yyyy % 400 == 0));
}


int main(int argc, char **argv){
    std::cout << "Mean of 3: " << mean_of_3(5, 10, 15) << std::endl;
    std::cout << "Max: " << max_of_5(5, 10, 15, 4, 20) << std::endl;
    std::cout << "Min: " << min_of_5(5, 10, 15, 4, 20) << std::endl;
    std::cout << "Sides Make A Triangle: " << sides_make_triangle(3, 4, 5) << std::endl;
    std::cout << "Angles Make A Triangle: " << angles_make_triangle(60,60,60) << std::endl;
    std::cout << "Is A Leap Year: " << is_a_leap_year(2024) << std::endl;


    
     return 0;
}
