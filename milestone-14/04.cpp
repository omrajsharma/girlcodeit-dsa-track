// Remove Duplicates

#include <iostream>
using namespace std;

void removeDuplicates(char *S){
    if(S[0] == '\0'){
        return;
    }
    if(S[0] == S[1]){

        int i = 0;
        while(S[i] != '\0'){
            S[i] = S[i+1];
            i++;
        }
        removeDuplicates(S);
    }
    removeDuplicates(S+1);
}

int main() {
    char S[] = "aaabbcaaaaa";
    removeDuplicates(S);
    cout << S << endl;

    return 0;
}