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

    void addTrain(inputTrainDetails){
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

        cout << "ENTER THE TRAIN NUMBER : " <<endl;
        
        cout << "ENTER THE TRAIN NAME : " <<endl;
        
        cout << "ENTER THE SOURCE : " <<endl;
        
        cout << "ENTER THE DESTINATION : " <<endl;
        
        cout << "ENTER THE TRAIN TIME : " <<endl;
    }

    static int getTrainCount(){
        return TrainCount;
    }

};

class RailwaySystem{

    private: 
    Train train[100];
    int totalTrains=0;

}

int main(){

    int train::trainCount = 0;
    return 0;
}