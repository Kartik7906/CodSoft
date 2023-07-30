// task4:

// import files to read and write from txt file:

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file: " << filename << endl;
        return -1;
    }

    string accesstext;
    // make count for result:
    int wordCount = 0;
    while(getline(file, accesstext)) {
        istringstream inputword(accesstext);
        string word;
        while (inputword >> word) {
            wordCount++;
        }
    }

    return wordCount;
}

int main() {
    string givenfile;
    cout << "Enter the file name: ";
    getline(cin, givenfile);

    cout<<endl;
    int totalWords = countWords(givenfile);
    if (totalWords != -1) {
        cout << "Total words in the file: " << totalWords << endl;
        cout<<endl;
    }

    return 0;
}
