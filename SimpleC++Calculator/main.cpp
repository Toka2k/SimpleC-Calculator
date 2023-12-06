#include <iostream>
#include <string>
#include <sstream>

int main()
{
    float number[2];
    char operand;
    float result;
    bool useLastNumber = false;

    while (true) {
        if (useLastNumber == false) {
            std::cout << "Zadaj vyraz:" << std::endl;
            std::cin >> number[0] >> operand >> number[1];
        }
        else {
            char ans;
            //std::cout << "Vo vyraze pouzi 'v' alebo 'V' ako vysledok z minuleho vyrazu.";
            try {
                std::cin >> ans >> operand >> number[1];
                number[0] = result;
            }
            catch (const std::exception& ex) {
                std::cerr << ex.what() << std::endl;
            }
            catch (...) {
                std::cin >> number[0] >> operand >> ans;
                number[1] = result;
            }
            useLastNumber = false;
        }

        switch (operand) {
        case '+':
            result = number[0] + number[1];
            break;
        case '-':
            result = number[0] - number[1];
            break;
        case '*':
            result = number[0] * number[1];
            break;
        case '/':
            result = number[0] / number[1];
            break;
        case '%':
            result = (int)number[0] % (int)number[1];
            break;
        }

        std::cout << result << std::endl;
        char p;
        std::cin >> p;
        if (p == 'Q' || p == 'q') {
            break;
        }
        else if (p == 'T' || p == 't') {
            useLastNumber = true;
        }
    }
    
    return 0;
}