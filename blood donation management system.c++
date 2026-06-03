#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of donors: ";
    cin >> n;

    string name[100], bloodGroup[100], phone[100];
    int age[100];

    // Entering the donor details
    for(int i = 0; i < n; i++)
    {
        cout << "\nDonor " << i + 1 << " Details\n";

        cout << "Name: ";
        cin >> name[i];

        cout << "Age: ";
        cin >> age[i];

        cout << "Blood Group: ";
        cin >> bloodGroup[i];

        cout << "Phone Number: ";
        cin >> phone[i];
    }

    // Searching required blood group
    string requiredBG;
    cout << "\nEnter required blood group: ";
    cin >> requiredBG;

    bool found = false;

    cout << "\nAvailable Donors:\n";

    // using linear search to find the required blood group 
    for(int i = 0; i < n; i++)
    {
        if(bloodGroup[i] == requiredBG)
        {
            cout << "\nName         : " << name[i];
            cout << "\nAge          : " << age[i];
            cout << "\nBlood Group  : " << bloodGroup[i];
            cout << "\nPhone Number : " << phone[i] << endl;

            found = true;
        }
    }

    if(!found)
    {
        cout << "\nNo donor found with blood group " << requiredBG;
    }

    return 0;
}