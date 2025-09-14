#include <bits/stdc++.h>
using namespace std;

struct Book {
    string name;
    string author;
    int isbn;
    int year;
};

void toTake() {
    int n;
    cout << "How Many Books You Have: ";
    cin >> n;
    cin.ignore(); 

    vector<Book> list(n);
    for(int i = 0; i < n; i++) {
        cout << "[ID:" << i + 1 << "] Book Name: ";
        getline(cin, list[i].name);

        cout << "[ID:" << i + 1 << "] Book Author: ";
        getline(cin, list[i].author);

        cout << "[ID:" << i + 1 << "] Book ISBN: ";
        cin >> list[i].isbn;

        cout << "[ID:" << i + 1 << "] Book P. Year: ";
        cin >> list[i].year;
        cin.ignore(); 
    }

    ofstream outFile("dbCpp.bin", ios::app);
    for(int i = 0; i < n; i++) {
        outFile << list[i].name << '\n'
                << list[i].author << '\n'
                << list[i].isbn << '\n'
                << list[i].year << '\n';
    }
    outFile.close();

    cout << n << " book(s) saved to dbCpp.bin\n";
}

void toPrint() {
    ifstream inFile("dbCpp.bin");
    if(!inFile) {
        cout << "File not found.\n";
        return;
    }

    string line;
    int count = 0;
    cout << "\nBooks in dbCpp.bin:\n";
    while(getline(inFile, line)) {
        cout << line << endl;
        count++;
        if(count % 4 == 0) cout << "--------------------\n"; 
    }
    inFile.close();
}

void toDelete() {
    ofstream outFile("dbCpp.bin", ios::trunc); 
    outFile.close();
    cout << "All data deleted from dbCpp.bin\n";
}

int main() {
    cout << "\n\n\nFH_CLI - Book Manager\n";
    cout << "--------------------\n";

    while(true) {
        cout << "OPTIONS:\n";
        cout << "1. Write To File\n";
        cout << "2. Read From File\n";
        cout << "3. Delete Info\n";
        cout << "4. Exit from CLI\n";
        cout << "Choose option: ";

        int option; 
        cin >> option;
        cin.ignore(); 

        if(option == 1) {
            toTake();
        } else if(option == 2) {
            toPrint();
        } else if(option == 3) {
            toDelete();
        } else if(option == 4) {
            cout << "Exiting CLI...\n";
            break;
        } else {
            cout << "Invalid option. Try again.\n";
        }
    }

    return 0;
}
