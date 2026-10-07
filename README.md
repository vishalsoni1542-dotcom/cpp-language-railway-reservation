# Railway Reservation System in C++

## 📌 Project Overview

The **Railway Reservation System** is a simple console-based C++ project developed using **Object-Oriented Programming (OOP)** concepts.

This project allows the user to:

* Add train details
* Display all available trains
* Search for a train using its train number
* Exit the program

The project demonstrates the use of **classes, objects, constructors, destructors, static data members, encapsulation, arrays, getters, setters, and member functions** in C++.

---

## 🎯 Objectives

The main objectives of this project are:

1. To understand the basic concepts of C++ classes and objects.
2. To implement encapsulation using private data members.
3. To use constructors and destructors.
4. To use a static data member for counting train objects.
5. To store multiple train records using an array.
6. To implement searching functionality.
7. To create a menu-driven console application.

---

## 🛠️ Technologies Used

* **Programming Language:** C++
* **Header Files:** `<iostream>`, `<string>`
* **Application Type:** Console-Based Application
* **Concept:** Object-Oriented Programming

---

## ✨ Features

### 1. Add Train

The user can enter the following details:

* Train Number
* Train Name
* Source
* Destination
* Train Time

The entered train details are stored in the railway system.

### 2. Display All Trains

This option displays the details of all trains that have been added to the system.

### 3. Search Train by Number

The user can enter a train number, and the system searches for the matching train and displays its details.

### 4. Exit

The user can exit the program by selecting option `4`.

---

## 🧱 Classes Used

The project contains two main classes:

### 1. `Train`

The `Train` class stores and manages individual train information.

### 2. `RailwaySystem`

The `RailwaySystem` class manages multiple train objects and provides functions for adding, displaying, and searching trains.

---

## 📦 Train Class

The `Train` class contains the following private data members:

```cpp
int trainNumber;
string trainName;
string source;
string destination;
string trainTime;
static int TrainCount;
```

### Data Member Description

| Data Member   | Description                          |
| ------------- | ------------------------------------ |
| `trainNumber` | Stores the train number              |
| `trainName`   | Stores the name of the train         |
| `source`      | Stores the starting station          |
| `destination` | Stores the destination station       |
| `trainTime`   | Stores the train time                |
| `TrainCount`  | Counts the number of `Train` objects |

---

## 🔐 Encapsulation

The train details are declared as `private`, so they cannot be directly accessed outside the class.

Public setter and getter functions are used to modify and access the data.

Example:

```cpp
void set_trainNumber(int num){
    trainNumber = num;
}

int get_trainNumber(){
    return trainNumber;
}
```

This is an example of **encapsulation** in C++.

---

## 🏗️ Constructors

The project uses two constructors.

### Default Constructor

```cpp
Train(){
    trainNumber = 0;
    trainName = "";
    source = "";
    destination = "";
    trainTime = "";
    TrainCount++;
}
```

The default constructor initializes the train details with default values.

### Parameterized Constructor

```cpp
Train(int num, string name, string src, string dest, string time){
    trainNumber = num;
    trainName = name;
    source = src;
    destination = dest;
    trainTime = time;
    TrainCount++;
}
```

The parameterized constructor initializes a train object using the values provided by the user/program.

---

## 🗑️ Destructor

The class contains a destructor:

```cpp
~Train(){
    TrainCount--;
}
```

The destructor is automatically called when a `Train` object is destroyed.

It decreases the value of `TrainCount`.

---

## 📊 Static Data Member

The project uses a static data member:

```cpp
static int TrainCount;
```

It is defined outside the class:

```cpp
int Train::TrainCount = 0;
```

The static member is shared by all objects of the `Train` class.

The following function returns the current train object count:

```cpp
static int getTrainCount(){
    return TrainCount;
}
```

---

## 🚆 RailwaySystem Class

The `RailwaySystem` class contains:

```cpp
Train train[100];
int totalTrains = 0;
```

The array can store up to **100 train objects**.

### `addTrain()`

```cpp
void addTrain(){
    train[totalTrains].inputTrainDetails();
    totalTrains++;
}
```

This function takes train details from the user and stores them in the array.

---

### `displayAllTrains()`

```cpp
void displayAllTrains(){
    for(int i = 0; i < totalTrains; i++){
        train[i].displayTrainsDetails();
    }
}
```

This function uses a loop to display all stored train details.

---

### `searchTrainByNumber()`

```cpp
void searchTrainByNumber(int number){
    for(int i = 0; i < totalTrains; i++){
        if(number == train[i].get_trainNumber()){
            train[i].displayTrainsDetails();
        }
    }
}
```

This function searches for a train by comparing the entered train number with the train numbers stored in the array.

---

## 🖥️ Program Menu

The program provides the following menu:

```text
--- Railway Reservation System Menu ---
1. Add Train
2. Display All Trains
3. Search Train by Number
4. Exit
```

The user selects an option by entering a number.

---

---

## 💻 Sample Output

```text
--- Railway Reservation System Menu ---
1. Add Train
2. Display All Trains
3. Search Train by Number
4. Exit

Enter your choice: 1

ENTER THE TRAIN NUMBER:
12345

ENTER THE TRAIN NAME:
Rajdhani

ENTER THE SOURCE:
Delhi

ENTER THE DESTINATION:
Mumbai

ENTER THE TRAIN TIME:
10:30
```

### Display Train

```text
TRAIN NUMBER : 12345
TRAIN NAME : Rajdhani
SOURCE : Delhi
DESTINATION : Mumbai
TRAIN TIME : 10:30
```

### Search Train

```text
Enter the train number to search: 12345

TRAIN NUMBER : 12345
TRAIN NAME : Rajdhani
SOURCE : Delhi
DESTINATION : Mumbai
TRAIN TIME : 10:30
```

---

## 🧠 C++ Concepts Used

This project demonstrates several important C++ concepts:

* Classes and Objects
* Encapsulation
* Private and Public Access Specifiers
* Default Constructor
* Parameterized Constructor
* Destructor
* Static Data Member
* Static Member Function
* Arrays of Objects
* Member Functions
* Getter Functions
* Setter Functions
* Loops
* Conditional Statements
* Menu-Driven Programming
* String Handling
* Object-Oriented Programming

---

## 📁 Project Structure

```text
cpp-language-railway-reservation/
├── main.cpp
├── output.png
└── README.md
```

---

## ⚙️ How to Run

### Step 1: Install a C++ Compiler

You can use:

* GCC
* MinGW
* Visual Studio
* Code::Blocks
* Dev-C++
* VS Code with C++ extension

### Step 2: Create the Source File

Create a file named:

```text
main.cpp
```

Paste the C++ program into the file.

### Step 3: Compile the Program

Using GCC:

```bash
g++ main.cpp -o railway
```

### Step 4: Run the Program

Windows:

```bash
railway
```

Linux/macOS:

```bash
./railway
```

---

## 🔮 Future Improvements

The project can be improved by adding:

* Ticket booking
* Ticket cancellation
* Passenger details
* Seat availability
* Train update and delete options
* File handling
* Database connectivity
* Login system
* Train sorting
* Better search functionality
* Input validation
* Support for names and locations containing spaces

---

## 📚 Learning Outcome

After completing this project, a beginner can understand how to create a simple real-world application using C++.

The project provides practical knowledge of **classes, objects, constructors, destructors, encapsulation, static members, arrays of objects, and menu-driven programming**.

---

## 👨‍💻 Author

**Vishal Soni**
