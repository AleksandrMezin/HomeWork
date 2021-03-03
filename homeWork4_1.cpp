#include <iostream>
using namespace std;

int main(int , char** )

{

    int x;
    int y;
    int x1 = 10;
    int y1 = 20;
//название какое оно есть)
    std::cout << "Программа сложения чисел : true or false\n" ;
/* а std:: в случае с использованием - using namespace std;
 обязательно вводить? */
    std::cout << "введите число 1:";
    cin >> x;

    std::cout << "введите число 2:";
    cin >> y;

    std::cout <<  x + y << std::endl;

if (x + y < x1) {
    std::cout << "false" <<std::endl;
}
else if (x + y > y1) {
    std::cout << "false" <<std::endl;
}
    else  {
        std::cout << "true" <<std::endl;
    }
    return 0;
}