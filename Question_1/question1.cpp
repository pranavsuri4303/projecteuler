#include <iostream>
/*
If we list all the natural numbers below 10 that are multiples 
of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 
23. Find the sum of all the multiples of 3 or 5 below 1000.
*/

int main();


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}
  

int main(){
    unsigned int upper_limit{0};
    unsigned int a{0};
    unsigned int b{0};


    std::cout<< "Enter the upper limit: ";
    std::cin>> upper_limit;
    std::cout<<"Enter the first multiple: ";
    std::cin>> a;
    std::cout<<"Enter the second multiple: ";
    std::cin>> b;

    

    
    
    
    //Finding an LCM of 2 numbers can be defined at GCD * product of the two numbers. 
    unsigned int lcm{0};
    lcm = (a * b) / gcd(a, b);


    // Calculating the number of multiples of the 2 numbers and their LCM
    unsigned int no_multiples_a = (upper_limit-1)/a;
    unsigned int no_multiples_b = (upper_limit-1)/b;
    unsigned int no_multiples_lcm = (upper_limit-1)/lcm;
    
    /*
    We can make use of S_n formula to calculate sum of multiples 
    S_n = multiple * n(number of multiples) * n+1 * 0.5. To remove 
    common mutiples we can make use of LCM.
    */
    unsigned int sum{0};

    sum =   (((a)*(no_multiples_a)*(no_multiples_a+1))/2) + 
            (((b)*(no_multiples_b)*(no_multiples_b+1))/2) - 
            (((15)*(no_multiples_lcm)*(no_multiples_lcm+1))/2);

    std::cout<< "The sum of the multiples is: " << sum << std::endl;







}