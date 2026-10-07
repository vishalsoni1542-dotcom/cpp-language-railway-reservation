#include <iostream>
#include <string>
using namespace std;

class Train
{
    private :

    int trainNumber;
    string trainName;
    string source;
    string destination;
    string trainTime;
    static int TrainCount;

    public:

    Train(){
        trainNumber = 0;
        trainName = "";
        source = "";
        destination = "";
        trainTime = "";
        TrainCount++;
    }

    Train(int num,  string name, string src, string dest, string time){
        trainNumber = num;
        trainName = name;
        source = src;
        destination = dest;
        trainTime = time;
        TrainCount++;
    }

    ~Train(){
        TrainCount--;
    }

    void set_trainNumber(int num){
        trainNumber = num;
    }

    void set_trainName(string name){
        trainName = name;
    }

    void set_source(string src){
        source = src;
    }

    void set_destination(string dest){
        destination = dest;
    }

    void set_trainTime(string time){
        trainTime = time;
    }

    int get_trainNumber(){
        return trainNumber;
    }

    string get_trainName(){
        return trainName;
    }

    string get_source(){
        return source;
    }

    string get_destination(){
        return destination;
    }

    string get_trainTime(){
        return trainTime;
    }

    void inputTrainDetails(){
        cout << "ENTER THE TRAIN NUMBER : " <<endl;
        cin >> trainNumber;

        cout << "ENTER THE TRAIN NAME : " <<endl;
        cin >> trainName;

        cout << "ENTER THE SOURCE : " <<endl;
        cin >> source;

        cout << "ENTER THE DESTINATION : " <<endl;
        cin >> destination;

        cout << "ENTER THE TRAIN TIME : " <<endl;
        cin >> trainTime;
    }

    void displayTrainsDetails(){

        cout << "TRAIN NUMBER : " << trainNumber << endl;

        cout << "TRAIN NAME : " << trainName << endl;

        cout << "SOURCE : " << source << endl;

        cout << "DESTINATION : " << destination << endl;
        
        cout << "TRAIN TIME : " << trainTime << endl;
    }

    static int getTrainCount(){
        return TrainCount;
    }

};

    int Train::TrainCount = 0;

class RailwaySystem{

    private:

        Train train[100];
        int totalTrains=0;

    public:
    
        void addTrain(){
            train[totalTrains].inputTrainDetails();
               totalTrains++;
        }

        void displayAllTrains(){
            for(int i=0; i<totalTrains; i++){
                train[i].displayTrainsDetails();
            }
        }

        void searchTrainByNumber(int number){
            for(int i=0; i<totalTrains; i++){
                if(number == train[i].get_trainNumber()){
                    train[i].displayTrainsDetails();
                }
            }
        }
};

int main(){

    RailwaySystem rl;
    
    int choice;

    do{
        cout << "--- Railway Reservation System Menu ---" <<endl; 
        cout << "1. Add Train :" <<endl;
        cout << "2. Display All Trains" <<endl;
        cout << "3. Search Train by Number" <<endl;
        cout << "4. Exit" <<endl;


        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1){
            rl.addTrain();
        }
        else if(choice == 2){
            rl.displayAllTrains();
        }
        else if(choice == 3){
            int number;
            cout << "Enter the train number to search: ";
            cin >> number;
            rl.searchTrainByNumber(number);
        }
        else if(choice == 4){
            cout << "Exit the program." <<endl;
        }
        else{
            cout << "Invalid choice." <<endl;
        }

    }while(choice != 4);

    return 0;

}