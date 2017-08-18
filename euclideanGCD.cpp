#include <iostream>

using namespace std;

#efficiently and recursively calculate the greatest common denominator of two integers
#this algorithm never requires a depth of more than 5 times the number of base 10 digits in the smaller input integer
int euclideanGCD(int a, int b)
{
    #numbers must be arranged so that a is greater than b
    if (a < b)
    {
        return euclideanGCD(b, a);
    }
    
    #we want values that satisfy the equation (a = q1 * b + q2)
    int q1 = a / b;
    int q2 = a % b;
    
    #if there is no remainder from the division of a by b then b is the GCD
    if (q2 == 0)
    {
        return b;
    }
    
    #otherwise, repeat the process, with the smaller remainders calculated in this iteration 
    return euclideanGCD(b, q2);
    
}

int main()
{
   cout << "Euclidean algorithm for calculating GCD of two numbers" << endl; 
   
   cout << euclideanGCD(1085, 483) << endl;
   cout << euclideanGCD(1071, 462) << endl;
   
   return 0;
}
