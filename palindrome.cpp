#include <iostream>
using namespace std;

class String {
    char s1[100], s2[100], s3[100];
public:
    void accept();
    void length();
    void copy();
    void compare();
    void reverse();
    void concatenate();
    void palindrome();
    void count();
};

void String::accept() {
    cout << "Enter the 1st string: ";
    cin >> s1;
    cout << "Enter the 2nd string: ";
    cin >> s2;
}

void String::length() {
    int len1 = 0, len2 = 0;

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    cout << "Length of 1st String: " << len1 << "\n";
    cout << "Length of 2nd String: " << len2 << "\n";
}

void String::copy() {
    int i = 0;

    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0'; // Null-terminate the copied string
    cout << "1st String after copying from 2nd String: " << s1 << "\n";
}

void String::compare() {
    int i = 0, isEqual = 1;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }

    if (isEqual && s1[i] == '\0' && s2[i] == '\0') {
        cout << "Strings are equal.\n";
    } else {
        cout << "Strings are not equal.\n";
    }
}

void String::reverse() {
    int len1 = 0, len2 = 0;

    while (s1[len1] != '\0') len1++;
    while (s2[len2] != '\0') len2++;

    for (int i = 0; i < len1 / 2; i++) {
        char temp = s1[i];
        s1[i] = s1[len1 - i - 1];
        s1[len1 - i - 1] = temp;
    }

    for (int i = 0; i < len2 / 2; i++) {
        char temp = s2[i];
        s2[i] = s2[len2 - i - 1];
        s2[len2 - i - 1] = temp;
    }

    cout << "Reversed 1st String: " << s1 << "\n";
    cout << "Reversed 2nd String: " << s2 << "\n";
}

void String::concatenate() {
    int i = 0, j = 0;

    while (s1[i] != '\0') i++; // Find the end of s1

    while (s2[j] != '\0') {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0'; // Null-terminate the concatenated string

    cout << "Concatenated String (1st + 2nd): " << s1 << "\n";
}

void String::palindrome() {
    cout << "Enter a string to check for palindrome: ";
    cin >> s3;

    int len = 0, isPalindrome = 1;

    while (s3[len] != '\0') len++;

    for (int i = 0; i < len / 2; i++) {
        if (s3[i] != s3[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The string is a palindrome.\n";
    } else {
        cout << "The string is not a palindrome.\n";
    }
}

void String::count() {
    cout << "Character counts in 1st String:\n";

    int freq[256] = {0};
    int i = 0;

    while (s1[i] != '\0') {
        freq[s1[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << ": " << freq[i] << "\n";
        }
    }

    cout << "Character counts in 2nd String:\n";

    for (i = 0; i < 256; i++) freq[i] = 0; // Reset frequency array

    i = 0;
    while (s2[i] != '\0') {
        freq[s2[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << char(i) << ": " << freq[i] << "\n";
        }
    }
}

int main() {
    String str;
    int choice;

    do {
        cout << "\nString Operations Menu:";
        cout << "\n1. Accept Strings";
        cout << "\n2. Calculate Length";
        cout << "\n3. Copy String";
        cout << "\n4. Compare Strings";
        cout << "\n5. Reverse Strings";
        cout << "\n6. Concatenate Strings";
        cout << "\n7. Check Palindromes";
        cout << "\n8. Count Character Occurrences";
        cout << "\n9. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                str.accept();
                break;
            case 2:
                str.length();
                break;
            case 3:
                str.copy();
                break;
            case 4:
                str.compare();
                break;
            case 5:
                str.reverse();
                break;
            case 6:
                str.concatenate();
                break;
            case 7:
                str.palindrome();
                break;
            case 8:
                str.count();
                break;
            case 9:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}
