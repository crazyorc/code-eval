//
//  Copyright © 2016 Triston Whetten. All rights reserved.
//
#include <cstdint>
#include <fstream>
#include <iostream>

int main(int argc, const char * argv[])
{
    std::ifstream input(argv[1]);
    
    uint32_t x;
    uint32_t y;
    uint32_t count;
    while( input >> x >> y >> count )
    {
        for (uint32_t loop = 1; loop <= count; ++loop)
        {
            bool divisible_x = ( loop % x ) == 0;
            bool divisible_y = ( loop % y ) == 0;
            
            if (divisible_x)
            {
                std::cout << "F";
            }
            
            if (divisible_y)
            {
                std::cout << "B";
            }
            
            if (!divisible_x && !divisible_y)
            {
                std::cout << loop;
            }
            
            // Output space for next loop
            if ( loop < count )
            {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    
    return 0;
}

