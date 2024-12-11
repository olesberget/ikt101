#include "iostream"
#include <stdexcept>
//EasterEggs included: Last Task Hurray! Merry Christmas!

using namespace std;

class Node {
public: int value; Node* next;
Node(int val) : value(val), next(nullptr) {}
};

class TheLinkedListThatIGotHerForYouAuby {
private:Node* head; size_t Size;


public:
    TheLinkedListThatIGotHerForYouAuby() : head(nullptr), Size(0) {}

    ~TheLinkedListThatIGotHerForYouAuby() {
        while (head != nullptr) {
            Node* NodeC = head;
            head = head->next;
            delete NodeC;
        }
    }

    size_t size() const {return Size;}

    void push_back(const int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {head = newNode;}
        else {
            Node* BackItUp = head;
            while (BackItUp->next != nullptr) {BackItUp = BackItUp->next;}
            BackItUp->next = newNode;
        }
        Size++;
    }

    int& at(size_t index) {
        Node* CountDracula = head;
        for (size_t i = 0; i < index; ++i) { CountDracula = CountDracula->next;}
        return CountDracula->value;
    }

    void remove(size_t index) {
        Node* toDelete = head;
        if (index == 0) {head = head->next;}
        else {
            Node* GonnaBeLongGone= head;
            for (size_t i = 0; i < index - 1; ++i) {GonnaBeLongGone = GonnaBeLongGone->next;}
            toDelete = GonnaBeLongGone->next;
            GonnaBeLongGone->next = GonnaBeLongGone->next->next;
        }
        delete toDelete;
        Size--;
    }
};


int main() {
    TheLinkedListThatIGotHerForYouAuby list;
    size_t choice, value, index;

    while (true) {
        cout << "1. Add integer\n";
        cout << "2. Show integer at index\n";
        cout << "3. Remove integer at index\n";
        cout << "4. Print information\n";
        cout << "5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter an integer: "; cin >> value;
                list.push_back(value);
                break;

            case 2:
                cout << "Enter index: "; cin >> index;
                try {cout << "Integer at index " << index << ": " << list.at(index) << endl;}
                catch (const out_of_range& e) {cout << e.what() << endl;}
                break;

            case 3:
                cout << "Enter index to remove: "; cin >> index;
                try {list.remove(index);}
                catch (const out_of_range& e) {cout << e.what() << endl;}
                break;

            case 4:
                if (list.size() == 0) {cout << "List contains no integers" << endl;}
                else {cout << "List contains " << list.size() << " integers:";
                    for (size_t i = 0; i < list.size(); ++i) {cout << " " << list.at(i);}
                    cout << endl;}
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }
}
