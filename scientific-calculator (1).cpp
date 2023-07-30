// This code is written by Yusuf Jamal.


#include <stdio.h>
#include <math.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double num);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);
double logarithm(double num);
unsigned long long factorial(int num);
double modulus(double a, double b);
void clearScreen();

int main() {
    int choice;
    double num1, num2;

    do {
        printf("Scientific Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exponentiation\n");
        printf("6. Square Root\n");
        printf("7. Sine\n");
        printf("8. Cosine\n");
        printf("9. Tangent\n");
        printf("10. Logarithm\n");
        printf("11. Factorial\n");
        printf("12. Modulus\n");
        printf("13. Clear Screen\n");
        printf("0. Exit\n");
        printf("Enter your choice (0-13): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", add(num1, num2));
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", subtract(num1, num2));
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", multiply(num1, num2));
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", divide(num1, num2));
                break;

            case 5:
                printf("Enter the base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", power(num1, num2));
                break;

            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Result: %.2lf\n", squareRoot(num1));
                break;

            case 7:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result: %.2lf\n", sine(num1));
                break;

            case 8:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result: %.2lf\n", cosine(num1));
                break;

            case 9:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                printf("Result: %.2lf\n", tangent(num1));
                break;

            case 10:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                printf("Result: %.2lf\n", logarithm(num1));
                break;

            case 11:
                printf("Enter a non-negative integer: ");
                int n;
                scanf("%d", &n);
                printf("Result: %llu\n", factorial(n));
                break;

            case 12:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                printf("Result: %.2lf\n", modulus(num1, num2));
                break;

            case 13:
                clearScreen();
                break;

            case 0:
                printf("Exiting the calculator. Goodbye!\n");
                break;

            default:
                printf("Invalid choice\n");
                break;
        }

    } while (choice != 0);

    return 0;
}

// Function definitions

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double num) {
    return sqrt(num);
}

double sine(double angle) {
    return sin(angle * M_PI / 180.0);
}

double cosine(double angle) {
    return cos(angle * M_PI / 180.0);
}

double tangent(double angle) {
    return tan(angle * M_PI / 180.0);
}

double logarithm(double num) {
    return log10(num);
}

unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

double modulus(double a, double b) {
    if (b != 0) {
        return fmod(a, b);
    } else {
        printf("Error: Modulus by zero\n");
        return 0;
    }
}

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}