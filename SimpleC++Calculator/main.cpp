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
        /*switch (operand) {
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
        }*/

        if (operand == '+') {
            result = number[0] + number[1];
        }
        else if (operand == '-') {
            result = number[0] - number[1];
        }
        else if (operand == '*') {
            result = number[0] * number[1];
        }
        else if (operand == '/'){
            result = number[0] / number[1];
        }
        else if (operand == '%') {
            result = int(number[0]) % int(number[1]);
        }

        std::cout << result << std::endl;

        char p;
        std::cin >> p;
        if (p == 'Q' || p == 'q') {
            break;
        }
    }
    
    return 0;
}