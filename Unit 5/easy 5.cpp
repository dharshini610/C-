#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Author {
private:
    int id;
    string name;
    bool worked;
public:
    Author(int id, string name, bool worked) {
        this->id = id;
        this->name = name;
        this->worked = worked;
    }

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    bool getWorked() {
        return worked;
    }
};

int main() {
    vector<Author> authors;
    int numAuthors;
    cout << "Enter the number of authors:"<<endl;