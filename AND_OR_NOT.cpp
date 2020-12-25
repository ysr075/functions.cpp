# include <iostream>
using namespace std;

int main() {
    cout << "\nWelcome to my robopro functions project on C++\n\nprogrammed by @ysr075 on GitHub";
    while(true) {
        string lamp_aan = "\nlamp aan.";
        string lamp_uit = "\nlamp uit.";
        int choose;
        cout << "\n\n1.AND / 2.OR / 3.NOT / 4.EXIT: ";
        cin >> choose;
        if (choose == 1) {
            int IF1;
            cout << "\nIF1: ";
            cin >> IF1;
            int IF2;
            cout << "\nIF2: ";
            cin >> IF2;
            if (IF1 == 1 && IF2 == 1) {
                cout << lamp_aan;
            } else {
                cout << lamp_uit;
            }
        } else if (choose == 2) {
            int IF1;
            cout << "\nIF1: ";
            cin >> IF1;
            int IF2;
            cout << "\nIF2: ";
            cin >> IF2;
            if (IF1 == 1 && IF2 == 1) {
                cout << lamp_aan;
            } else if (IF1 == 1 && IF2 == 0) {
                cout << lamp_aan;
            } else if (IF1 == 0 && IF2 == 1) {
                cout << lamp_aan;
            } else {
                cout << lamp_uit;
            }
        } else if (choose == 3) {
            int IF1;
            cout << "\nIF1: ";
            cin >> IF1;
            if (IF1 == 1) {
                cout << lamp_uit;
            } else if (IF1 == 0) {
                cout << lamp_aan;
            }
        } else if (choose == 4) {
            exit(0);
        } else {
            exit(0);
        }
    }
    return 0;
}
