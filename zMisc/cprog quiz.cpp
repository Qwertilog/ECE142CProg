#include <iostream>
using namespace std;

int main(){
    string name, age, city, college, profession, animal, pName;

    cout << "Input your name: ";
    cin >> name;
    cout << "Input your age: ";
    cin >> age;
    cout << "Input your city: ";
    cin >> city;
    cout << "Input your college: ";
    cin >> college;
    cout << "Input your profession: ";
    cin >> profession;
    cout << "Input your animal: ";
    cin >> animal;
    cout << "Input your pet's name: ";
    cin >> pName;

    cout << "Once upon a time, a person named " << name;
    cout << " who lived in " << city;
    cout << ". At the age of " << age;
    cout << ", " << name;
    cout << " went to college at " << college << ". ";
    cout << name << " graduated and went to work as a(n) ";
    cout << profession << ". Then, " << name;
    cout << " adopted a(n) " << animal;
    cout << " named " << pName;
    cout << ". They both lived happily ever after!";

    return 0;
}
