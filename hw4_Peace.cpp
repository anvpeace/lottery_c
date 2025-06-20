#include <iostream>
#include <string>

const int SIZE = 5;



#include "hw4_Peace_functions.cpp"


using namespace std;


int main(){

    int randomNumbersArray[SIZE];

    winningDigits(randomNumbersArray);

    int userNums[SIZE];

    userTicket(userNums);

    checkDuplicate(randomNumbersArray, userNums);

    int matches = checkWinner(randomNumbersArray, userNums);

    printResult(randomNumbersArray,userNums,matches);






    return 0;
}
