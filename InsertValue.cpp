#include <iostream>
using namespace std;

int main(){
    int myArray[15];
    int numberOfValues, valueToInsert, position;
    //Here on the line above, I declared an array that will accomodate 15 different values.
    cout<<"How many values do you want to insert?: ";
    cin>> numberOfValues;
    cout<<"Enter all those "<<numberOfValues<<": ";

    for(int i = 0; i < numberOfValues; i++){
        cin>>myArray[i];
    }

    cout<<"Your array now looks like this :";
    for(int i = 0; i<sizeof(myArray)/sizeof(myArray[0]); i++){
        cout<<myArray[i]<<" ";
    }
    cout<<"\nEnter the value you want to insert :";
    cin>>valueToInsert;
    cout<<"In which position do you want to insert the value? :";
    cin>>position;

    for(int i= numberOfValues-1; i>=position; i--){
        myArray[i+1] = myArray[i];
    }
    myArray[position] = valueToInsert;

    cout<<"The updated array is: ";
    for(int i = 0; i<sizeof(myArray)/sizeof(myArray[0]); i++){
        cout<<myArray[i]<<" ";
    }
    return 0;
}