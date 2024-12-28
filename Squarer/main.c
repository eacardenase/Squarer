//
//  main.c
//  Squarer
//
//  Created by Edwin Cardenas on 12/28/24.
//

#include <stdio.h>

int squareNumber(int number)
{
    return number * number;
}

int main(int argc, const char * argv[]) {
    int number = 5;
    int numberSquared = squareNumber(number);
    
    printf("\"%d\" squared is \"%d\".\n", number, numberSquared);
    
    return 0;
}
