#include<iostream>
using namespace std;
int main() {
    int num[10];
    int index, search;
    bool flag = false;
    for(int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> num[i];
        }
        cout << "Enter value to search: ";
        cin >> search;
        for(int i = 0; i < 10; i++) {
            if (search == num[i]) {
                index = i;
                flag = true;
                break; }

}
if (flag)
cout << "Value " << search << " is at index " << index << endl;
else
cout << "Value not found!" << endl;
}