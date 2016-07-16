//
//  Copyright © 2016 Triston Whetten. All rights reserved.
//
#include <iostream>
#include <vector>

// Largest prime factor of n is going to be: sqrt(n)
//   --> store primes for n=1000
std::vector<int> primes{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

int reverseDigits(int input)
{
    int result = 0;
    while (input > 0)
    {
        result = (result * 10) + (input % 10);
        input = input / 10;
    }
    return result;
}

bool isPrime(int& number)
{
    for (int& n : primes)
    {
        if (number % n == 0)
        {
            return false;
        }
    }
    return true;
}

std::vector<int> getPalindromes(int& max)
{
    std::vector<int> palindromes;

    for(int i=0; i<max; ++i)
    {
        if (i == reverseDigits(i))
        {
            palindromes.push_back(i);
        }
    }
    return palindromes;
}

int main(int argc, const char * argv[])
{
    int maxValue = 1000;
    std::vector<int> palindromes = getPalindromes(maxValue);
    for (auto it = palindromes.rbegin(); it != palindromes.rend(); ++it)
    {
        if (isPrime(*it))
        {
            std::cout << *it << std::endl;
            return 0;
        }
    }
    return 1;
}

