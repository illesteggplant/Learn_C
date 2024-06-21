#include <stdio.h>
#include <stdbool.h>

// Function Declarations
void print_hello_world();
void print_names(char name[], int age);

// Structures
typedef struct 
{
    int my_current_age;
    char my_letter;
} my_struct;

// Enums
typedef enum 
{
    STOPPED,
    STARTING,
    RUNNING
}current_engine_state;

// Comments
// You can write a comment using //
/* You can also write a comment using this syntax */
int main()
{
    printf("Hello, world\n");  // the /n indicates a new line

    // variables
    int my_int = 15;           // integer which is a whole number
    float my_float = 98.43;    // floating point number
    char my_letter = 'A';      // character
    printf("%d\n", my_int);    // %d indicates decimal
    printf("%f\n", my_float);  // %f indicates float 
    printf("%c\n", my_letter); // %c indicates a char

    // assigning multiple variables
    int x = 6, y = 10, z = 25;
    printf("%d\n", x + y + z);

    // Data Type - Characters
    char letter = 'H';
    printf("%c\n", letter);

    // Data Type - Numbers
    int integer = 345;
    printf("%d\n", integer);

    float floating_point = 6.34;
    printf("%f\n", floating_point);

    double double_type = 34.76;
    printf("%lf\n", double_type);

    // Decimal Precision
    float floating_point_number = 1.23;
    printf("%f\n", floating_point_number);
    printf("%0.1f\n", floating_point_number);
    printf("%0.2f\n", floating_point_number);
    printf("%0.4f\n", floating_point_number);

    // Memory Size
    // int    = 2 or 4 bytes
    // float  = 4 bytes
    // double = 8 bytes
    // char   = 1 byte

    int integer_value;
    float floating_point_value;
    double my_double;
    char my_char;

    printf("%lu\n", sizeof(integer_value));
    printf("%lu\n", sizeof(floating_point_value));
    printf("%lu\n", sizeof(my_double));
    printf("%lu\n", sizeof(my_char));

    // Type casting (conversions)
    // Implicit Conversion

    // Converts Int -> Float
    float float_1 = 4;
    printf("%f\n", float_1);

    // Converts Float -> Int
    int int_1 = 4.87;
    printf("%d\n", int_1);

    // Explicit Conversion
    float total = (float) 10 / 3;
    printf("%f\n", total);

    // use 'const' if you don't want others to change variable values!
    const float pi = 3.1415;
    const int age = 45;

    // Arithmetic Operators
    // this includes (+, -, *, /, %, ++, --)
    int num1 = 8;
    int num2 = 4;

    printf("%d\n", num1 + num2);
    printf("%d\n", num1 - num2);
    printf("%d\n", num1 * num2);
    printf("%d\n", num1 / num2);
    printf("%d\n", num1 % num2);
    printf("%d\n", ++num1);
    printf("%d\n", --num2);

    // Assignment Operators
    printf("%d\n", num1 += 3);
    printf("%d\n", num1 -= 3);
    printf("%d\n", num1 *= 3);
    printf("%d\n", num1 /= 3);
    printf("%d\n", num1 %= 3);
    printf("%d\n", num1 &= 3);
    printf("%d\n", num1 |= 3);
    printf("%d\n", num1 ^= 3);
    printf("%d\n", num1 >>= 3);
    printf("%d\n", num1 <<= 3);

    // Comparison Operators
    // These include "==, !=, >, <, >=, <="

    // Logical Operators
    // && = AND
    // || = OR
    // !  = NOT

    // Booleans 
    bool am_i_human = true;
    bool am_i_alien = false;
    printf("%d\n", am_i_human);
    printf("%d\n", am_i_alien);

    // If statements in C
    if (100 > 20)
    {
        printf("100 is greater than 20\n");
    }

    // If else statements in C
    int test_integer = 10;

    if (test_integer > 100)
    {
        printf("That's a pretty big number\n");
    }
    else
    {
        printf("That's a pretty small number\n");
    }

    // Else if statements in C
    int time = 15;
    if (time < 10) 
    {
        printf("It's Morning!.\n");
    } 
    else if (time < 20) 
    {
        printf("It's the day time!\n");
    } 
    else 
    {
        printf("It's the afternoon!\n");
    }

    // Short Hand If Else (Ternary Operator)
    int time_of_day = 20;
    (time_of_day < 18) ? printf("Good day!\n") : printf("Good evening!\n");

    // Switch Statements
    int month = 4;

    switch (month) 
    {
    case 1:
        printf("Jan\n");
        break;
    case 2:
        printf("Feb\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    }

    // While Loops in C
    int score = 0;

    while (score < 6)
    {
        printf("%d\n", score);
        score++;
    }

    // Do/While Loop 
    int i = 0;

    do 
    {
        printf("%d\n", i);
        i++;
    }
    while (i < 10);

    // For Loops in C
    int counter;

    for (counter = 0; counter < 5; counter++) 
    {
        printf("%d\n", counter);
    }

    // Nested For Loops
    int x_axis, y_axis;

    for (x_axis = 0; x_axis <= 2; ++x_axis)
    {
        printf("Outer: %d\n", x_axis);  // Executes 2 times
        for (y_axis = 0; y_axis <= 3; ++y_axis)
        {
            printf(" Inner: %d\n", y_axis);  // Executes 6 times (2 * 3)
        }

    }

    // Arrays
    int my_array[] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n", my_array[1]);

    // change element in array
    my_array[1] = 44;
    printf("%d\n", my_array[1]);

    // loop through an array
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", my_array[i]);
    }

    // to get the length of the array
    int length = sizeof(my_array) / sizeof(my_array[0]);
    printf("%d\n", length);

    // Multidimensional arrays
    int matrix[2][3] = { {1,2,3}, {4,5,6} };
    printf("%d\n", matrix[0][2]);
    printf("%d\n", matrix[1][2]);

    // change/update element in an array
    matrix[0][2] = 10;
    printf("%d\n", matrix[0][2]);

    // Strings - used to store text or characters
    char hello[] = "Hello World";
    printf("%s\n", hello);
    printf("%c\n", hello[0]);  // access certain element in string
    printf("%c\n", hello[3]);

    // Special Characters
    char text[] = "Hello my name is John Doe \"aka bro\" and I like to code";
    printf("%s\n", text);

    // User input in C
    int user_input;
    printf("Type a number: ");
    scanf("%d", &user_input);
    printf("Your number is: %d\n", user_input);

    // Memory Address
    int my_age = 21;
    printf("%p\n", &my_age);

    // Pointers - stores memory address of another variable and its value
    int my_height = 200;
    int* my_ptr = &my_height;
    printf("%d\n", my_height);
    printf("%p\n", &my_height);
    printf("%p\n", my_ptr);      // reference
    printf("%d\n", *my_ptr);     // dereference

    int my_numbers[4] = {1, 2, 3, 4};

    // Change the value of the first element to 13
    *my_numbers = 55;

    // Change the value of the second element to 17
    *(my_numbers + 1) = 63;

    // Get the value of the first element
    printf( "%d\n", *my_numbers );

    // Get the value of the second element
    printf( "%d\n", *(my_numbers + 1) );

    // Call a function
    print_hello_world();  // a function can be called multiple times
    print_hello_world();
    print_hello_world();
    print_names("John",12);
    print_names("Doe", 24);
    print_names("Carmack", 55);

    // Structures
    my_struct test_structure;
    test_structure.my_current_age = 10;
    test_structure.my_letter = 'G';
    printf("My number: %d\n", test_structure.my_current_age);
    printf("My letter: %c\n", test_structure.my_letter);

    // Enumeration
    current_engine_state motor_status = STARTING;
    printf("%d\n", motor_status);

    return 0;
}

void print_hello_world()
{
    printf("Hello, World!\n");
}

void print_names(char name[], int age)
{
    printf("Hello %s. You are %d years old\n", name, age);
}