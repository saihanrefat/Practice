#include <iostream>
#include <string>
using namespace std;

#define MAX_CARS 100  // সর্বোচ্চ 100টি গাড়ির তথ্য সংরক্ষণ করা যাবে

class Car {
private:
    string make, model, carNumber, status;

public:
    void readData() {
        cout << "Enter Car Make: ";
        cin >> make;
        cout << "Enter Car Model: ";
        cin >> model;
        cout << "Enter Car Number: ";
        cin >> carNumber;
        cout << "Enter Service Status (Completed/In process/Waiting/Delivered): ";
        cin >> status;
    }

    void assignStatus(string s) {
        status = s;
    }

    string getStatus() {
        return status;
    }

    void displayData() {
        cout << "Make: " << make << ", Model: " << model
             << ", Car Number: " << carNumber << ", Status: " << status << endl;
    }
};

// গাড়িগুলোকে স্ট্যাটাস অনুযায়ী দেখানোর জন্য ফাংশন
void displayStatus(Car cars[], int n, string status) {
    cout << "\nCars with status [" << status << "]:\n";
    for (int i = 0; i < n; i++) {
        if (cars[i].getStatus() == status) {
            cars[i].displayData();
        }
    }
}

int main() {
    int n;
    cout << "Enter number of cars: ";
    cin >> n;

    Car cars[MAX_CARS];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for car " << i + 1 << ":\n";
        cars[i].readData();
    }

    // বিভিন্ন স্ট্যাটাস অনুযায়ী গাড়ির তালিকা দেখানো
    displayStatus(cars, n, "Completed");
    displayStatus(cars, n, "In process");
    displayStatus(cars, n, "Waiting");
    displayStatus(cars, n, "Delivered");

    return 0;
}

