#include <iostream>
#include <time.h>
#include <cmath>
#include <string>

using namespace std;

void winningDigits(int randNumArray[]){
    srand(time(0));
    

    for(int i = 0; i <= 4; i++){
        randNumArray[i] =  (1 + rand() % 19);
        // cout<<randNumArray[i]<<endl;
    }

}
    /*
    One function, named 'userTicket', should ask the user to enter 5 integers between 1 and 19, inclusive. Each number should be saved in an array.

    */
void userTicket(int userNumbers[]){

    // int user_numbers[] = {};
    for(int n = 0; n <= 4; n++){
        cout<<"Enter a number "<<(n + 1)<<": ";
        cin>>userNumbers[n];
    }
    
}

    /*
    one function to check that the numbers in 'winningDigits' and 'userTicket' do not have repeating digits. If a repeating digit is found, the function will ask for another number in 'userTicket', or let       'winningDigits' generate another number.

    */

void checkDuplicate(int randonNumbers[], int userNumbers[]){

    bool hasDuplicate = false;

    for(int i = 0; i < SIZE; i++){
        for(int j = i +1; j < SIZE; j++){
            if(randonNumbers[i] == randonNumbers[j] || userNumbers[i] == userNumbers[j]){
                cout<<"Duplicate random numbers were selected. Try again!"<<endl;
                        for(int n = 0; n <= 4; n++){
                            cout<<"Enter a number "<<(n + 1)<<": ";
                            cin>>userNumbers[n];
                            for(int m = 0; m <= SIZE; m++){
                                randonNumbers[m]= (1 + rand() % 19);

                            }

                        }

                   }else{
                        continue;
            }
        }
    }

     
}

    /*
    One function, named 'checkWinner' to compare the corresponding values, numbers, in the two arrays in function 'winningDigits' and 'userTicket' and count how many digits match.
    */
int checkWinner(int randomNumbers[], int userNumbers[]){

    int count = 0;

    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++){
            if(randomNumbers[i] == userNumbers[j]){
                count++;
            }
        }

    }
    return count;

}




    /*  
    One function, named printResult, to print the program result as:

    */

void printResult(int randomNumbers[], int userNumbers[], int count){
        cout<<"Winning numbers ";
    for(int i = 0; i < SIZE; i++){
        cout<<randomNumbers[i]<<"\t";
    }
    cout<<endl;

        cout<<"Selected numbers ";
    for(int i = 0; i < SIZE; i++){
        cout<<userNumbers[i]<<"\t";
    }
    cout<<endl;


    cout<<"Matching numbers: "<<count<<endl;

}