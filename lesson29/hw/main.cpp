#include <iostream>

// A bug was detected...
// Can not invoke function in another function without prototype (exception - main();)
int nat(int n);
int comp(int a, int b);
int factorial(int n);
int summa(int n);
int recur(int n);
int recnum(int n, int i);
int bin(int n);

// ===== BEGIN TASK 1 =====
// For task 1
void task1() {
    // Task 1 Function nat()
    std::cout << "Task 1" << std::endl;
    std::cout << "Enter N: ";
    int n1;
    std::cin >> n1;
    nat(n1);
    std::cout << std::endl;
}

int nat(int n) {
    if (n > 1)
        nat(n-1);

    std::cout << n << "\t";
}
// ===== END TASK 1 =====



// ===== BEGIN TASK 2 =====
// For task 2
void task2() {
    // Task 2 Function comp()
    std::cout << "Task 1" << std::endl;
    std::cout << "Enter A: ";
    int a2;
    std::cin >> a2;
    std::cout << "Enter B: ";
    int b2;
    std::cin >> b2;
    comp(a2, b2);
    std::cout << std::endl;
}

int comp(int a, int b) {
    if (b > a) {
        std::cout << a << "\t";
        comp(a+1, b);
    }

    else if (b == a) {
        std::cout << b << "\t";
    }

    else if (b < a) {
        std::cout << a << "\t";
        comp(a-1, b);
    }

    else {
        std::cout << b << "\t";
    }
}
// ===== END TASK 2 =====



// ===== BEGIN TASK 3 =====
// For task 3
int factorial(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return factorial(n - 1) * n;
}

void task3() {
    // Task 3 Function factorial()
    std::cout << "Task 3 (factorial)" << std::endl;
    std::cout << "Enter N: ";
    int n3;
    std::cin >> n3;
    std::cout << "Factorial (N!) of N is " << factorial(n3);
    std::cout << std::endl;
}
// ===== END TASK 3 =====



// ===== BEGIN TASK 4 =====
// For task 4
int summa(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n < 10) {
        return n;
    } else {
        return summa(n/10) + (n%10);
    }
}

void task4() {
    // Task 4 Function summa()
    std::cout << "Task 4 (summa)" << std::endl;
    std::cout << "Enter N: ";
    int n4;
    std::cin >> n4;
    std::cout << "The summ of digits in N is " << summa(n4);
    std::cout << std::endl;
}
// ===== END TASK 4 =====



// ===== BEGIN TASK 5 =====
// For task 5
int recur(int n) {
    if (n <= 0) {
        std::cout << "0" << "\t";
    } else if (n == 1) {
        std::cout << "1" << "\t";
    } else if (n < 10) {
        std::cout << n << "\t";
    } else {
        std::cout << n%10 << "\t";
        recur(n/10);
    }
}

void task5() {
    // Task 5 Function recur()
    std::cout << "Task 5" << std::endl;
    std::cout << "Enter N: ";
    int n5;
    std::cin >> n5;
    recur(n5);
    std::cout << std::endl;
}
// ===== END TASK 5 =====



// ===== BEGIN TASK 6 =====
// For task 6
int recnum(int n, int i) {
    return (n == 0) ? i : recnum(n/10, i*10 + n%10);
}

void task6() {
    // Task 6 Function recnum()
    std::cout << "Task 6" << std::endl;
    std::cout << "Enter N: ";
    int n6;
    std::cin >> n6;
    std::cout << recnum(n6, 0);
    std::cout << std::endl;
}
// ===== END TASK 6 =====



// ===== BEGIN TASK 7 =====
// For task 7
int bin(int n) {
    if (n < 0) {
        std::cout << "Negative integer detected";
    } else if (n == 0) {
        std::cout << "0";
    } else if (n == 1) {
        std::cout << "1";
    } else {
        bin(n/2);
        std::cout << n%2;
    }
}

void task7() {
    // Task 7 Function bin()
    std::cout << "Task 7 (binary)" << std::endl;
    std::cout << "Enter N: ";
    int n7;
    std::cin >> n7;
    bin(n7);
    std::cout << std::endl;
}
// ===== END TASK 7 =====



// ===== BEGIN MAIN =====
int main() {
    // Tasks
    // Comment unusable
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    return 0;
}
// ===== END MAIN =====