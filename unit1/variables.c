#include <stdio.h> //its just comment.

//DataType: 
//Create a variable: dataType anyName; | dataType anyName = 12; //Solo se declara una vez

int myInt = 24; //-> text format: %i, %d
float myFloat = 22.7; //-> text format: %f
char myChar = 'l'; // -> %c
int myArray[7] = { 5, 27, 43, 12, 8, 7, 0 };
                // 0  1   2   3   4  5  6 ...n
float myFloatArray[255] = {1.33, 2.55, 666.1};                
char word[10] = {'A', 'l', 'i'};
char country[10] = "Mexico"; // %s
char* aName = "Isaac";  // %s



int main(){

    //Modified ints
    printf("hola clase, myInt = %d\n", myInt);
    myInt = 25;
    printf("hola clase, myInt = %d\n", myInt);
    int yearsOld = 24;
    printf("%f\n", myFloatArray[1]);
    printf("%c\n", myChar);
    myChar = 'i';
    printf("%c\n", myChar);
    country[0] = 'M';
    country[1]= 'e';
    country[2]= 'x';
    country[3]= 'i';
    country[4]= 'c';
    country[4]= 'o';
    aName = "Isaac";
    printf("%c\n", word)
    word [0] = 'A';
    word [0] = 'L';
    word [0] = 'I';



    return 0;
}