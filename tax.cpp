#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numOfOveralls;
    float taxxedNumber;
    int b;
    cout << "Enter how many overalls you want: " << endl;
    cin >> b;
    int overallPrice;
    for (int i = 0; i < b; i++) {
        cout << "Enter overall: " << i + 80 << "'s price: ";
        cin >> overallPrice;
        numOfOveralls.push_back(overallPrice);

    }
    cout<< "--------------------------------------"<<endl;
    for (int i = 0; i < numOfOveralls.size(); i++)
    {
        cout << "Overall: " << 80 + i << " : " << numOfOveralls[i] << endl;
        taxxedNumber = numOfOveralls[i] * .90;// will be the tax on the item
        cout << "Overall: " << (80 + i) << "'s price after tax: " << taxxedNumber << endl;
        cout<< "----------------------------------"<<endl;
    }
    cout << "All done!";
    return 0;
}
