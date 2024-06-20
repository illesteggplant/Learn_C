#include <stdio.h>

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
    return 0;
}