//5.Write a program to display the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and display the average..

#include<iostream>
using namespace std;

class Average {
    public:
        void calculateAverage(float num1, float num2, float num3) {
            float average = (num1 + num2 + num3) / 3;  
            cout << "The average of the three numbers is: " << average << endl;
        }
};

int main() {
    Average avg;

    float number1, number2, number3;

    cout << "Enter the 1st number: ";
    cin >> number1;
    cout << "Enter the 2nd number: ";
    cin >> number2;
    cout << "Enter the 3rd number: ";
    cin >> number3;

    avg.calculateAverage(number1, number2, number3);

    return 0;
}