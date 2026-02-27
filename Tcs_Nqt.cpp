//^1.  Check if a number is palindrome or not
class Solution {
public:
    bool isPalindrome(int n) {
      int original = n;
      int rev = 0;

      //handling edge case
      if(n<0 || (n%10==0 && n!=0)){
       return false;
      }
      while(n>0){
      int digit = n%10;
      rev = rev*10+digit;
      n = n/10;
      }
      if(rev==original){
        return true;
      }else{
        return  false;
      }
    }
};





//^3. Check if a number is prime or not
