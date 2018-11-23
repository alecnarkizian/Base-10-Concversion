#include <iostream>
 using namespace std;
 int main(){
 cout << "Alec Narkizian - 2/5/18" << endl;
 //declaring variables
    int number, number1, number1_2, number3_1, numCheck, number2 =0, number3 =0;
    string number3String, base2;
    //getting user input
    cout << "Enter 1st number : ";
    //assigning variables there propper values
    cin >> number;
      int number2_1 = number;
    number1 = number;
    number1_2 = number;
    int number31 = number1;
 
  //calculating base 2 from base 10
    cout<< "Starting from right to left your numbr in base 2 "<<"";
    //loop until answer is fully outputted
    while (number1_2>0){
    //using the mod operator
      number1 = number1_2%2;
      //prints the answer one by one
      cout<<number1<<"";
      number1_2 = number1_2/2;
      }
     
    //converting  base 10 to base 8
    cout<<"\n";
    cout<< "Starting from right to left your number in base 8 "<<"";
    //loop until answer is fully outputted
    while (number2_1>0){
    //mod by 8 to get the answer then just divide by 8 repeat until the number reaches 0
    number2 = number2_1 % 8;
    cout<<number2<<"";
    number2_1 = number2_1/8;
                      }
      //converting  base 10 to base 16
    cout<<"\n";
    cout<<"Your number from right to left in base 16 is ";
    //loop until answer is fully outputted
    while (number31>0){
     //mod by 16 to get the answer then just divide by 16 repeat until the number reaches 0
       numCheck = number31%16;
       number31=number31/16;
       //if the remiander is above 9 then it needs a charachter instead of a number
       if (numCheck == 10){
          number3String = "A";
