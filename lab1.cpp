#include <iostream>
#include <string>
#include <ctime>

// в 31 - 39 задачах нельзя доп переменные в функции, создание массива через рандом(rand). 

// ЗАДАНИЕ 1
double fraction(double x){
    return x- int(x);
}

int charToNum(char x){
    return int(x) - 48;
}

bool is2Digits(int x){
    if (x >= 10 && x <= 99){
        return true;
    }
    else if (x <= -10 && x >= -99){
        return true;
    }
    else {
        return false;
    }
}

bool isInRange (int a, int b, int num){
    if (a <= b){
        if (num >= a && num <= b){
            return true;
        }
        else {
            return false;
        }
    }
    else if (a >= b){
        if (num >= b && num <= a) {
            return true;
        }
        else {
            return false;
        }
    }
    else {
        return false;
    }
}

bool isEqual(int a, int b, int c){
    if (a == b && b == c){
        return true;
    }
    else {
        return false;
    }
}

// ЗАДАНИЕ 2

int abs(int x){
    if (x <= 0){
        return -x;
    }
    else {
        return x;
    }
}

bool is35(int x){
    if (x % 3 == 0 || x % 5 == 0){
        if (x % 3 == 0 && x % 5 == 0) {
            return false;
        }
        else {
            return true;
        }
    }
    else {
        return false;
    }
}

int max3(int x, int y, int z){
    int max = x;
    if (max < y){
        max = y;
    }
    if (max < z){
        max = z;
    }
    return max;
}

int sum2(int x, int y){
    int sum = x + y;
    if (sum >= 10 && sum <=19){
        return 20;
    }
    else {
        return sum;
    }
}

std::string day(int x){
    switch (x){
        case 1: return "Понедельник"; break;
        case 2: return "Вторник"; break;
        case 3: return "Среда"; break;
        case 4: return "Четверг"; break;
        case 5: return "Пятница"; break;
        case 6: return "Суббота"; break;
        case 7: return "Воскресенье"; break;
        default: return "Это не день недели"; break;
    }
}

// ЗАДАНИЕ 3

std::string listNums(int x){
    std::string result; 
    for (int i = 0; i <= x; i++){
        result += std::to_string(i);
        result += " ";
    }
    return result;
}

std::string chet(int x){
    std::string result; 
    for (int i = 0; i <= x; i += 2){
        result += std::to_string(i);
        result += " ";
    }
    return result;
}

int numLen(long x){
    int result = 0;
    if (x == 0){
        return 1;
    }
    else {
        while (x != 0){
          result++;
          x /= 10;
        }
        return result; 
    }
}

void square(int x){
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            std::string res = "*";
            std::cout << res;
        }
    std::cout << std::endl;
    }
}

void rightTriangle(int x){
    for (int i = 0; i < x; i++){
        int star = i + 1;
        int space = x - star;
        std::string res = "*";
        while (space > 0){
            std::cout << " ";
            space -= 1;
        }
        while (star > 0){
            std::cout << res;
            star -= 1;
        }
    std::cout << std::endl;
    }
}

// ЗАДАНИЕ 4

int findFirst(int arr[], int x){
    int loop = -1;
    for (int i = 0; i < sizeof(arr); i++){
        if (arr[i] == x){
            int result = i;
            return result;
        }
    }
    return loop;
}

int maxAbs(int arr[], int size){
    int max = arr[0];
    for (int i = 0; i < size; i++){
        if (arr[i] < 0){
            int num = -(arr[i]);
            if (max < num){
                max = num;
            }
        }
        else {
            int num = arr[i];
            if (max < num){
                max = num;
            }
        }
    }
    return max;
}


int main(){
    setlocale(LC_ALL, "Russian");
    std::srand(std::time(nullptr));
/*
// num 1
    double x1 = 0;
    std::cout << "NUM 1 - Введите вещественное число: " << std::endl;
    std::cin >> x1;
    std::cout << fraction(x1) << std::endl;
    std::cout << std::endl;

// num 3    
    char x3;
    std::cout << "NUM 3 - Введите цифру от 0 до 9: " << std::endl;
    std::cin >> x3;
    if (0 <= (int(x3)-48) && (int(x3)-48) <= 9){
        std::cout << charToNum(x3) << std::endl;
    }
    else{
        std::cout << "Неверный ввод" << std::endl;
    }
    std::cout << std::endl;

// num 5
    int x5 = 0;
    std::cout << "NUM 5 - Введите число: " << std::endl;
    std::cin >> x5;
    std::cout << is2Digits(x5) << std::endl;
    std::cout << std::endl;

// num 7
    int a7 = 0;
    int b7 = 0;
    int num7 = 0;
    std::cout << "NUM 7 - Введите первое число для диапазона: " << std::endl;
    std::cin >> a7;
    std::cout << "NUM 7 - Введите второе число для диапазона: " << std::endl;
    std::cin >> b7;
    std::cout << "NUM 7 - Введите число для поиска в диапазоне: " << std::endl;
    std::cin >> num7;
    std::cout << isInRange(a7,b7,num7) << std::endl;
    std::cout << std::endl;

// num 9
    int a9 = 0;
    int b9 = 0;
    int c9 = 0;
    std::cout << "NUM 9 - Введите первое целое число: " << std::endl;
    std::cin >> a9;
    std::cout << "NUM 9 - Введите второе целое число: " << std::endl;
    std::cin >> b9;
    std::cout << "NUM 9 - Введите третье целое число: " << std::endl;
    std::cin >> c9;
    std::cout << isEqual(a9, b9, c9) << std::endl;
    std::cout << std::endl;

// num 11 
    int x11 = 0;
    std::cout << "NUM 11 - Введите целое число: " << std::endl;
    std::cin >> x11;
    std::cout << abs(x11) << std::endl;
    std::cout << std::endl;

// num 13
    int x13 = 0;
    std::cout << "NUM 13 - Введите целое число: " << std::endl;
    std::cin >> x13;
    std::cout << is35(x13) << std::endl;
    std::cout << std::endl;

// num 15
    int x15 = 0;
    int y15 = 0;
    int z15 = 0;
    std::cout << "NUM 15 - Введите целое число x: " << std::endl;
    std::cin >> x15;
    std::cout << "NUM 15 - Введите целое число y: " << std::endl;
    std::cin >> y15;
    std::cout << "NUM 15 - Введите целое число z: " << std::endl;
    std::cin >> z15;
    std::cout << "Максимальное число: " << max3(x15, y15, z15) << std::endl;   
    std::cout << std::endl;

// num 17
    int x17 = 0;
    int y17 = 0;
    std::cout << "NUM 17 - Введите целое число x: " << std::endl;
    std::cin >> x17;
    std::cout << "NUM 17 - Введите целое число y: " << std::endl;
    std::cin >> y17;
    std::cout << sum2(x17, y17) << std::endl;  
    std::cout << std::endl;

// num 19
    int x19 = 0;
    std::cout << "NUM 19 - Введите число - день недели: " << std::endl;
    std::cin >> x19;
    std::cout << day(x19) << std::endl;  
    std::cout << std::endl;

// num 21
    int x21 = 0;
    std::cout << "NUM 21 - Введите целое число: " << std::endl;
    std::cin >> x21;
    std::cout << listNums(x21) << std::endl;  
    std::cout << std::endl;

// num 23
    int x23 = 0;
    std::cout << "NUM 23 - Введите целое число: " << std::endl;
    std::cin >> x23;
    std::cout << chet(x23) << std::endl;  
    std::cout << std::endl;

// num 25
    int x25 = 0;
    std::cout << "NUM 25 - Введите целое число: " << std::endl;
    std::cin >> x25;
    std::cout << numLen(x25) << std::endl;  
    std::cout << std::endl;

// num 27
    int x27 = 0;
    std::cout << "NUM 27 - Введите целое число: " << std::endl;
    std::cin >> x27;
    square(x27); 
    std::cout << std::endl;

// num 29
    int x29 = 0;
    std::cout << "NUM 29 - Введите целое число: " << std::endl;
    std::cin >> x29;
    rightTriangle(x29); 
    std::cout << std::endl;

// num 31
    int x31 = 0;
    int arr31[7];
    std::cout << "Массив: ";
    for (int i = 0; i < 7; i++){
        arr31[i] = std::rand() % 10;
        std::cout << arr31[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "NUM 31 - Введите целое число: " << std::endl;
    std::cin >> x31;
    std::cout << findFirst(arr31, x31) << std::endl; 
    std::cout << std::endl;
*/
// num 33
    int size33 = std::rand() % 10;
    int arr33[size33];
    std::cout << "Массив: ";
    for (int i = 0; i < size33; i++){
        arr33[i] = std::rand() % 10;
        std::cout << arr33[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "NUM 33 - Максимальное значение массива " << std::endl;
    std::cout << maxAbs(arr33, size33) << std::endl; 
    std::cout << std::endl;

    return 0;
}