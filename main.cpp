#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// RLE Compression
string encodeRLE(const string& input) {
    string encoded;
    int repeat = 1;

    for (size_t i = 0; i < input.length(); ++i) {
        if (i + 1 < input.length() && input[i] == input[i + 1]) {
            ++repeat;
        } else {
            encoded += to_string(repeat);
            encoded += input[i];
            repeat = 1;
        }
    }
    return encoded;
}

// RLE Decompression
string decodeRLE(const string& encoded) {
    string output;
    string tempCount;

    for (char ch : encoded) {
        if (isdigit(ch)) {
            tempCount += ch;
        } else {
            int times = tempCount.empty() ? 1 : stoi(tempCount);
            output.append(times, ch);
            tempCount.clear();
        }
    }
    return output;
}

int main() {
    char operation;
    cout << "Select mode - Compress (c) or Decompress (d): ";
    cin >> operation;

    if (operation == 'c') {
        ifstream inFile("input.txt");
        if (!inFile.is_open()) {
            cout << "❌ Failed to read input.txt\n";
            return 1;
        }

        string data((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
        inFile.close();

        string result = encodeRLE(data);

        ofstream outFile("compressed.txt");
        if (!outFile) {
            cout << "❌ Failed to write compressed.txt\n";
            return 1;
        }

        outFile << result;
        outFile.close();

        cout << "✅ Compression successful. Output in compressed.txt\n";

    } else if (operation == 'd') {
        ifstream inFile("compressed.txt");
        if (!inFile.is_open()) {
            cout << "❌ Failed to read compressed.txt\n";
            return 1;
        }

        string encodedData((istreambuf_iterator<char>(inFile)), istreambuf_iterator<char>());
        inFile.close();

        string decoded = decodeRLE(encodedData);

        ofstream outFile("decompressed.txt");
        if (!outFile) {
            cout << "❌ Failed to write decompressed.txt\n";
            return 1;
        }

        outFile << decoded;
        outFile.close();

        cout << "✅ Decompression successful. Output in decompressed.txt\n";

    } else {
        cout << "❌ Invalid selection. Choose 'c' or 'd'.\n";
    }

    return 0;
}
