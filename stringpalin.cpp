#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string s){
    //pointers on both end
    int left=0,right=s.length()-1;
    while (left<right)//run until pointer cross each other
    {
         //Skip non-alphanumeric chars from the left
        if(!isalnum(s[left])){
            left++;
        }
         //Skip non-alphanumeric chars from the right
        else if(!isalnum(s[right])){
            right++;
        }
        //  Compare lowercase of both characters
        else if(tolower(s[left]) != tolower(s[right])){
            return false;
        }
         //  If same, move both pointers inward
        else{
            left++;
            right--;
        }
    }
    //  If all characters matched
    return true;
}

//2nd approach using reccursion
bool palindrome(int i,string s){
    if(i>s.length()/2){
        return true;
    }
    if(s[i]!=s[s.length()-i-1]){
        return false;
    }
    return palindrome(i+1,s);
}
int main(){
string str="ABCDCBA";
bool ans = checkpalindrome(str);

    if (ans == true) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }

    cout<<endl;
    string s="Madam";
    if (palindrome(0, str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

return 0;
}