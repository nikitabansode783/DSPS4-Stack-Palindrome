#include <iostream>
#include<cstring>
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
    

    void acceptAdditionalString();
};


void String::accept() {
    cout << "Enter the 1st string: ";
    cin >> s1;
    cout << "Enter the 2nd string: ";
    cin >> s2;
}

void String::acceptAdditionalString() {
    cout << "Enter the string to check for palindrome: ";
    cin >> s3;
}

void String::length() {
    int len1 = 0, len2 = 0;
    int i;

    for (i = 0; s1[i] != '\0'; i++) {
        len1++;
    }
    cout << "Length of 1st String: " << len1;

    for (i = 0; s2[i] != '\0'; i++) {
        len2++;
    }
    cout << "Length of 2nd String: " << len2;
}

void String::copy() {
    int i;
   
    for (i = 0; s2[i] != '\0'; i++) {
        s1[i] = s2[i];
    }
    s1[i] = '\0'; 

    cout << "1st String after copying from 2nd String: " << s1;

    for (i = 0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0'; 

    cout << "2nd String after copying from 1st String: " << s2 ;
}

void String::compare() {
    int i, flag = 0;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && s1[i] == '\0' && s2[i] == '\0') {
        cout << "Strings are equal." ;
    } else {
        cout << "Strings are not equal.";
    }
}


void String::reverse() {
int len1=0, len2=0;
while(s1[len1]!='\0')
{
len1++;
}
for(int i=0;i<len1/2; i++){
char temp = s1[i];
s1[i]= s1[len1-i-1];
s1[len1-i-1]= temp;
}
cout<<"Reserved 1st String: "<<s1;
while(s2[len2]!='\0')
{
len2++;
}
for(int i=0;i<len2/2; i++){
char temp = s2[i];
s2[i]= s2[len2-i-1];
s2[len2-i-1]= temp;
}
cout<<"Reserved 2nd String: "<<s2;
}


void String::concatenate() {
    int i = 0, j = 0;

    while (s1[i] != '\0') {
        i++;
    }

    while (s2[j] != '\0') {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';

    cout << "Concatenated String (1st + 2nd): " << s1;
}

void String::palindrome() {
    char str3[100],rstr[100];
    int f=1;
cout<<"enter a string:";
cin>>str3;
int len3=0,i;
for(i=0;s3[i]='\0';i++)
{
len3++;
}
int j=len3-1;
for(i=0;s3[1]='\0';i++)
{
rstr[j]=str3[i];
j--;
}
for(i=0,str3[i]='\0' && rstr[i]='\0';i++)
{
if(str3[i]!=rstr[i])
{
f=0;
break;
}
}
if(f==1)
{
cout<<"string is palindrome";

}


void String::count() 
{
    int len1 = 0, len2 = 0;
    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }
    cout << "Character counts in 1st String:";
    for (int i = 0; i < len1; i++) {
        int c = 1; 
        int flag = 0; 

        for (int j = 0; j < i; j++) {
            if (s1[i] == s1[j]) {
         
         
                flag = 1; 
                break;
            }
        }

        if (flag == 0) { 
            for (int j = i + 1; j < len1; j++) {
                if (s1[i] == s1[j]) {
                    c++;
                }
            }
            cout << s1[i] << ": " << c ;
        }
    }
    cout << "Character counts in 2nd String:";
    for (int i = 0; i < len2; i++) {
        int c = 1; 
        int flag = 0; 

        for (int j = 0; j < i; j++) {
            if (s2[i] == s2[j]) {
                flag = 1; 
                break;
            }
        }

        if (flag == 0) { 
            for (int j = i + 1; j < len2; j++) {
                if (s2[i] == s2[j]) {
                    c++;
                }
            }
            cout << s2[i] << ": " << c;
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
                cout << "Exiting the program.";
                break;
            default:
                cout << "Invalid choice! Please try again.";
        }
    } while (choice != 9);

    return 0;
}
