#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        double temp = x;
        double last, reverse = 0;

        while(x>0)
        {
            last=x%10;
            reverse = reverse * 10 + last;
            x=x/10;

        }

        if(temp==reverse)
        return true;
        else
        return false;
    }
};

int main()
{
    int x;
    cin>>x;

    Solution obj;

    if(obj.isPalindrome(x))
    cout<<"true";
    else
    cout<<"false";

}