#include <iostream>

unsigned int countBits(unsigned long long n) {
    unsigned long long result = 0;
    // array to store binary number
    int binaryNum[64];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // counting 1 in reverse order
    for (int j = i - 1; j >= 0; j--)
        if (binaryNum[j] == 1)
        {
            result = result + 1;
        }
    return result;
}


int main()
{
    unsigned long long input {};
    std::cout << "Zadej cislo: ";
    std::cin >> input;
    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Nezadal jsi cislo.   Zadej CISLO: ";
        std::cin >> input;
    }
    std::cout << "zadane cislo " << input << " ma " << countBits(input) << " bitu s hodnotou 1 \n";
   
    
}

