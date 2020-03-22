# C++ Course
> ![C++](https://jarvis.studio/projects/cpp1901/res/git_cpp_logo_min.png)

##### Lessons and projects
----
### Lessons:
----
| Lesson №      | Name                                                   | Path          | TIMESTAMP  |
|---------------|:-------------------------------------------------------|:--------------|:----------:|
| Lesson 1      | Introduction to C++, Hello, world                      | [cpp1901/lesson1/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson1)  | 22.09.2019 |
| Lesson 2      | Arrays, tasks                                          | [cpp1901/lesson2/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson2)  | 29.09.2019 |
| Lesson 3      | Types of data                                          | [cpp1901/lesson3/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson3)  | 06.10.2019 |
| Lesson 4      | Math in C++                                            | [cpp1901/lesson4/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson4)  | 13.10.2019 |
| Lesson 5      | Math functions                                         | [cpp1901/lesson5/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson5)  | 20.10.2019 |
| Lesson 6      | C++ Functions                                          | [cpp1901/lesson6/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson6)  | 27.10.2019 |
| Lesson 7      | Tasks, Money converter                                 | [cpp1901/lesson7/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson7)  | 03.11.2019 |
| Lesson 8      | Description not provided                               | -             | 10.11.2019 |
| Lesson 9      | Strictures in C++, compiling program as multiple files | [cpp1901/lesson9/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson9)  | 17.11.2019 |
| Lesson 10     | Boolalpha                                              | [cpp1901/lesson10/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson10) | 24.11.2019 |
| Lesson 11     | Translate integers, binary, decimal, hexdecimal        | [cpp1901/lesson11/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson12) | 01.12.2019 |
| Lesson 12     | Repeat arrays                                          | [cpp1901/lesson12/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson12) | 08.12.2019 |
| Lesson 13     | 2D arrays                                              | [cpp1901/lesson13/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson13) | 15.12.2019 |
| Lesson 14     | Description not provided                               | -             | 22.12.2019 |
| Lesson 15     | Exams                                                  | [cpp1901/lesson15/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson15) | 29.12.2019 |
| Lesson 16     | Github and Markdown                                    | [cpp1901/lesson16/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson16) | 19.01.2020 |
| Lesson 17     | Github and Markdown                                    | [cpp1901/lesson17/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson17) | 26.01.2020 |
| Lesson 18     | Tests                                                  | [cpp1901/lesson18/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson18) | 02.02.2020 |
| Lesson 19     | Tests                                                  | [cpp1901/lesson19/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson19) | 09.02.2020 |
| Lesson 20     | Speed computer                                         | [cpp1901/lesson20/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson20) | 16.02.2020 |
| Lesson 21     | Complie file in multiple files, g++                    | [cpp1901/lesson21/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson21) | 23.02.2020 |
| Lesson 22     | Complie file in multiple files, g++                    | [cpp1901/lesson22/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson22) | 01.03.2020 |
| Lesson 23     | Structures                                             | [cpp1901/lesson23/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson23) | 08.03.2020 |
| Lesson 24     | Description not provided                               | -             | 15.03.2020 |
| Lesson 25     | Links and pointers                                     | [cpp1901/lesson25/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/lesson25) | 22.03.2020 |

----
### Example: Binary Decoder (RU)
###### Path: cpp/lesson11/bin.cpp
----
```cpp
/*=====================================================
 * Перевод двоичного кода в десятичный методом сложения
 * Создал: xXDima212DimaXx
 *
 * Лицензия: Свободный доступ и модификация
 *
 * Как это работает?
 *
 * Создается массив данных (пользовательские данные),
 * в который пользователь заносит двоичное значение.
 * Затем создается переменная кратная 2 (ее значение
 * зависит от длины введенных данных. Например для
 * 1 байта это 128). Затем если первая цифра данных
 * равна 1, к конечному значению прибавляется
 * значение этой переменноя, и наоборот если первая
 * цифра равна 0, то прибавления не происходит.
 * Затем та переменная (кратная 2) делится на 2 и
 * действие повторяется, только уже проверяется вторая
 * цифра в двоичном значении. Цикл выполняется пока
 * переменная, которая кратна 2 не достигает значения 1
 * и пока в двоичных данных не закончились цифры для
 * проверки (их количество равно размеру массива с
 * пользовательскими данными). После этого полученное
 * значение выводиться на экран.
 *===================================================*/

#include <iostream>
#include <cstdlib>
#include <limits>
#include <cstring>

int convert(char val[]);

int main (void) {
    // Значение, которое вводит пользователь (1 байт)
    char value[8] = {};

    // Для проверки длины (Debug)
    // char vb[] = "";

    // Запрос пользовательского ввода
    std::cout << "Enter 1 byte: ";
    std::cin >> value;

    // Debug
    // if (vb.length() == 8) {
    //     value = vb;
    // } else {
    //     std::cout << "Incorect length of data. You can use only 8 digits!" << std::endl;
    //     return 1;
    // }

    // Исправление бага при вводе неверного типа данных
    if ((std::cin.fail() == 0)) {
        // Если пользователь ввел правильный тип данных, продолжаем выполнение
    } else {
        // Если тип данных некорректный, то завершаем программу, выдав ошибку
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Incorect type of data. Value \"" << value << "\" not allowed. You can use only 0 or 1!" << std::endl;
        return 1;
    }

    for (int g = 0; g < sizeof(value); g++) {
        if ((value[g] == '0') || (value[g] == '1')) {

        } else {
            std::cout << "Incorect type of data. Value \"" << value << "\" not allowed. You can use only 0 or 1!" << std::endl;
            return 1;
        }
    }

    // Debug
    // std::cout << value << std::endl;

    // Вызов условной функции, которая проверяет значение введенные данные и выводит результат на экран
    std::cout << "Decoded value: " << convert(value) << std::endl;

    return 0;
}

// Условная функция, которая проверяет значение переменной val
int convert(char val[]) {
    // Debug
    // std::cout << val << std::endl;

    // R - конечное значение, которое выведет программа
    int r = 0;

    // J для откладки. По желанию можно удалить и использовать val[int] в проверочном условии
    int j = 0;

    // plus - переменная, помогающая вычислить значение r (см. код ниже)
    int plus = 256;

    // Цикл проверки. Выполняется n-ое кол-во раз, где n - число Бит (1 Байт = 8 Бит)
    for (int i = 0; i < sizeof(val); i++) {
        /*=====================================================
         * Раскоментировать если программа работает неправильно
         * (Режим откладки)
         * std::cout << "[" << i << "]" << "\t";
         * std::cout << val[i] << "\t";
         *===================================================*/

        // J для откладки. По желанию можно заменить на val[int] в проверочном условии
        j = val[i];

        /*=====================================================
         * Раскоментировать если программа работает неправильно
         * (Режим откладки)
         * std::cout << "Debug j: " << j << "\t";
         * std::cout << "Debug j - 48: " << (j - 48) << "\t";
         *===================================================*/

        // Необходимо для расшифровки двоичного кода методом сложения
        plus = plus/2;

        // Проверка
        if ((j - 48) == 1) {
            r = r + plus;

            // Debug
            // std::cout << "\t 1\t" << r << " Debug plus: " << plus << std::endl;
        } else {
            // Debug
            // std::cout << "\t 0\t" << r << " Debug plus: " << plus << std::endl;
        }

    }

    // Возврат результата выполнения программы
    return r;
}
```
----
### Example: Celsius to Fahrenheit (Exam task)
###### Path: cpp/lesson15/cf.cpp
----
```cpp
#include <iostream>
#include <cstdlib>
#include <limits>

using namespace std;

int main (void)
{
    cout << "Celsius to Fahrenheit" << endl;
    int N = 0;
    int M = 0;
    cout << "From: ";
    cin >> N;
    cout << "To: ";
    cin >> M;

    for (;N < M; N++) {
        cout << N << "°C\t" << (N*1.8)+32 << "°F" << endl;
    }
    return 0;
}
```
----
### Projects:
----
| Name                                 | Version | Path                        | TIMESTAMP  |
|--------------------------------------|:-------:|:----------------------------|:----------:|
| Tic Tac Toe (The final project)      | 1.1     | [cpp1901/projects/tictactoe/1.1](https://github.com/xXDima212DimaXx/cpp1901/tree/master/projects/tictactoe/1.1)  | 11.06.2019 |
| Tic Tac Toe (The final project)      | 1.2     | [cpp1901/projects/tictactoe/1.2](https://github.com/xXDima212DimaXx/cpp1901/tree/master/projects/tictactoe/1.2)  | 11.06.2019 |
| Description not provided             | 0.0     | [cpp1901/projects/newproject](https://github.com/xXDima212DimaXx/cpp1901/tree/master/projects/newproject)     | 00.00.0000 |

----
### Old lessons (cs50):
----
| Lesson №      | Path          |
|---------------|:--------------|
| Lesson 0      | [cpp1901/cppold/lesson0/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson0)  |
| Lesson 1      | [cpp1901/cppold/lesson1/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson1)  |
| Lesson 7      | [cpp1901/cppold/lesson7/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson7)  |
| Lesson 9      | [cpp1901/cppold/lesson9/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson9)  |
| Lesson 14     | [cpp1901/cppold/lesson14/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson14) |
| Lesson 15     | [cpp1901/cppold/lesson15/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson15) |
| Lesson 17     | [cpp1901/cppold/lesson17/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson17) |
| Lesson 18     | [cpp1901/cppold/lesson18/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson18) |
| Lesson 19     | [cpp1901/cppold/lesson19/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson19) |
| Lesson 24     | [cpp1901/cppold/lesson24/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson24) |
| Lesson 25     | [cpp1901/cppold/lesson25/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/lesson25) |
| Unknown       | [cpp1901/cppold/tlesson/](https://github.com/xXDima212DimaXx/cpp1901/tree/master/cppold/tlesson)  |
----
### Useful Github commands:
----

- ### Configure Github:
  - #### Configure git:
    ```
    git config --global user.name "<USERNAME>"
    git config --global user.email "<EMAIL>"
    ```

  - #### Initialize git repository:
    ```
    git init
    ```
  - #### Add repository remote:
    ```
    git remote add <REMOTE_NAME> https://github.com/<USERNAME>/<REPOSITORY_NAME>.git
    ```

  ----

- ### Upload files to Github:
  - #### Add files to repository:
    ```
    git add <FILENAME>
    ```
    - #### Add all files:
      ```
      git add .
      ```
  - #### Commit changes:
    ```
    git commit
    ```
    - #### Commit changes with short message:
      ```
      git commit -m "message"
      ```
  - #### Upload to github (Push):
    ```
    git push -u <REMOTE_NAME> <BRANCH_NAME>
    ```

  - #### Sync repository:
    ```
    git pull <REMOTE_NAME> <BRANCH_NAME>
    ```

  ----

- ### Download files from github
  - #### Download:
    ```
    git clone https://github.com/<USERNAME>/<REPOSITORY_NAME>.git
    ```

----
### Useful Terminal commands:
----

- ### Commands to process files and folders:
  - #### Create a file:
    ```
    touch <FILENAME>
    ```
  - #### Create a folder:
    ```
    mkdir <FOLDERNAME>
    ```
  - #### Delete a file:
    ```
    rm <FILENAME>
    ```
  - #### Delete a folder:
    ```
    rmdir <FOLDERNAME>
    ```
    - #### If folder has subfolders use this command:
      ```
      rm -rf <FILENAME>/<FOLDERNAME>
      ```

  - #### Write to file:
    ```
    echo "Some text here" >> <FILENAME>
    ```
  - #### Show file content:
    ```
    cat <FILENAME>
    ```
  - #### Go to the folder:
    ```
    cd <PATH_TO_FOLDER>
    ```
    - #### Go to the home folder:
      ```
      cd ~
      ```
    - #### Go to the upper folder:
      ```
      cd ..
      ```
  - #### Show content of folder:
    ```
    ls
    ```
    - #### Show detailed list of content of folder:
      ```
      ls -la
      ```
  - #### Copy a file:
    ```
    cp <FROM_FILE_PATH> <TO_FILE_PATH>
    ```

----
### Complie files:
----
  - #### Typical compiling:
    ```
    make <FILE.cpp>
    ```
  - #### Compiling struct to multiple files:
    ```
    g++ -c <MAIN_FILE> <FILE_1.cpp> ... <FILE_N.cpp>
    ```
  - #### Assemble compilied struct:
    ```
    g++ -o <OUTPUT_FILE> <MAIN_COMPILIED> <FILE_1_COMPILIED> ... <FILE_N_COMPILIED>
    ```
----
### My github repository:
----
- #### Link to my github:
  ```
  https://github.com/xXDima212DimaXx/cpp1901.git
  ```

----
### Base C++:
----

```cpp
// Base i/o library
#include <iostream>

// Other useful libraries
#include <cstdlib> // C Standard General Utilities Library
#include <limits> // Numeric limits
#include <cmath> // Math library
#include <cstring> // String type library
#include <ctime> // C++ time library
#include <fstream> // Filesystem library

//Connect your libraries and .h, .hpp files
#include 'file1.h'
#include 'file2.hpp'

// Execute this code once (e.g if you connect files, which contain same functions)
#pragma once

// You can implement const here
const int INTVALUE = 4545;

// Namespace STD
using namespace std;

// Function prototypes

void myFunc1 ();

int myFunc2 (int input_value);

char myFunc3 ();



// Main function
int main () {

    // Variables
    int a = 0; // Integer

    float b = 0.25; // Float

    string c = "Hello, world!"; // String (require cstring library)

    char d = 'a'; // Char

    int arr[5] = {1, 2, 3, 4, 5}; // Integer array with 5 elements

    char e = "Hello, world!"; // Char array

    const int AGE = 18; // You can not modify this integer, because it is const

    short int f = 136732; //Integer without decimal

    long int g = 13287387278; // Long integer

    unsigned h = 4294967295; // This integer always more than 0

    bool j = true; // Boolean


    /*******************************************************
     *               Base operators and output:
     *
     *
     * Base operators:
     * +, -, *, /, %
     *
     *
     * i++ ............. i + 1
     * i-- ............. i - 1
     * i += 2 ...... i = i + 2
     * i -= 5 ...... i = i - 5
     *
     * Conditionals operators:
     * >, <, >=, <=, ||, &&
     *
     *
     * Cmath operators
     * pow(number, power);
     * mod(number);
     * cos(number);
     * sin(number);
     * tg(number);
     * ctg(number);
     * etc...
     *
     * \n = endl; = new linw
     * \t = tab
     *
     *
     * Boolalpha and noboolalpha
     * bool val = true;
     * cout << boolalpha << val << endl; // Output true instead 1
     * cout << noboolalpha << val << endl; // Output 1 instead true
     *
     * STD::
     * If you don't implement 'using namespace std', you must add std:: before std commands,
     * because you can use other namespaces (e,g std::cout << "Hello!" << std::endl;)
     *
     ******************************************************/




    // Random (Require <ctime> library)
    srand(time(NULL));

    rand() % 8 + 7; // Rand from 7 to 15




    // Input
    int x = 0;
    cin >> x;

    // Fix linux bug with incorrect input (Require <limits> library)
    if ((cin.fail() == 0)) {
        // Correct data type
    } else {
        // Incorrect data type
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Show error
        cout << "Incorect type of data. Value \"" << value << "\" not allowed. You can use only 0 or 1!" << endl;
        return 1; // Finish program with error
    }

    // Output
    cout << "X = " << x << endl;

    // *VARIABLE - show address in RAM (link)
    cout << *x << endl;

    // &VARIABLE - show normal value (unlink if linked, use with *VARIABLE)
    cout << &x << endl;




    // Conditions
    if (a == 1) {
        // True
    } else if (a == 2) {
        // First condition false, but second true
    } else {
        // False
    }




    // Loop for
    for (int i = 0; i < 10; i++) {
        // Repeat for 10 times
    }

    // Loop while
    while (/* Condition */) {
        // Repeats only if condition in the while () = true
    }

    // Loop do while
    do {
        // Repeats only if condition in the while () = true
    } while (/* Condition */);




    // Catch errors
    try {
        // Code, which may contain errors
    } catch (e) {
        // Alternative code here (e.g show error message)
    }




    // Write to file (Require <fstream> library)
    ofstream file;
    file.open("file");
    if (file.is_open())
    {
        file << "Some text here..." << endl;
        file.close();
    } else cout << "unable to open file";




    // Read file (Require <fstream> library)
    string data;
    ifstream file;
    file.open("file");
    if (file.is_open())
    {
        file >> data;
        cout << data << endl;
        file.close();
    } else cout << "unable to open file";




    // Execute system command
    system("command");

    // Clear terminal Linux
    system("clear");

    // Clear terminal Windows
    system("CLS");

    // Return
    return 0;

    /*
     * return 1; - Program finished with error or force closed
     * return 0; - Program finished successfully
     * return -1; - Program finished with unknown error
     * return 2; - Program finished and needs restart
     *
     * You can override or add your own finish codes
     */


    cout << "Hello" << endl; // This string will be ignored because program finish after return
}




// Void function
void myFunc1 () {
    // Your code here
    // Void function don't requirs return
}

// Int function
int myFunc2 (int input_value) {
    // Your code here
    return int;
}

// Char function
char myFunc3 () {
    // Your code here
    return char;
}
```

----
### Other useful codes:
----

#### Bubble sort:

```cpp
#include <iostream>

using namespace std;
const int SIZE = 20;

void buble(int mas[], int SIZE);

int main()
{
    int mas[] = {5, 4, 3, 2, 1, 6, 3, 9, 10, 22, 55, 64, 17, 26, 81, 678, 73, 97, 110, 22};
    for(int i = 0; i < SIZE; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
    buble(mas, SIZE);
    for(int i = 0; i < SIZE; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;
}

void buble(int mas[], int SIZE)
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int a = i+1; a < SIZE; a++)
        {
            if(mas[i] > mas[a])
            {
                int x = mas[i];
                mas[i] = mas[a];
                mas[a] = x;
            }
        }
    }
}
```

#### Select sort:

```cpp
#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort (int arr[], int n)
{
    int min;
    for (int k = 0; k < n-1; k++)
    {
        min = k;
        for (int j = k + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) min = j;
        }
        swap(&arr[min], &arr[k]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 42, 6, 1, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
```

#### Fibonachi:

```cpp
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int Fib(int i)
{
    unsigned long f1 = 0;
    unsigned long f2 = 1;
    unsigned long fn;
    ofstream file ("fib.txt");
    if (file.is_open())
    {
        if (i < 1)
        {
            return 0;
        }
        if (i == 1)
        {
            file << "0" << endl;
            file << "1" << endl;
            cout << "0" << endl;
            cout << "1" << endl;
        }
        if (i > 1)
        {
            file << "0" << endl;
            file << "1" << endl;
            cout << "0" << endl;
            cout << "1" << endl;
            for (int j = 1; j < i; j++)
            {
                fn = f1 + f2;
                file << fn << endl;
                cout << fn << endl;
                f1 = f2;
                f2 = fn;
            }

        }
        file.close();
    }
    else cout << "Something went wrong";

    return 0;
}

int main()
{
    int input;
    cout << "Enter number: ";
    cin >> input;

    Fib(input);
    return 0;
}
```

----
### Useful links:
----
> 1. [Basic Syntax | Markdown Guide](markdownguide.org/basic-syntax/)
> 2. [Как "гуглить" правильно и эффективно !](https://masterok.livejournal.com/550154.html)
> 3. [Поиск в Google, или как правильно гуглить (искать) в интернете: 11 советов](https://yablyk.com/956265-kak-pravilno-guglit-v-internete-10-sovetov/)
> 4. [NakonechnyiMykhail/cpp1901](https://github.com/NakonechnyiMykhail/cpp1901/tree/master)
> 5. [Как работать с Github репозиториями | Никита Петров](http://nikita-petrov.com/drupal/kak-rabotat-s-github-repozitoriyami)
> 6. [cplusplus.com - C++ Documentation](http://www.cplusplus.com/reference/cstdlib/)

> ![Teslasoft](https://jarvis.studio/projects/cpp1901/res/git_teslasoft_logo_min.png)
