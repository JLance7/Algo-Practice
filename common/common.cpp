#include <iostream>
#include <string>
#include <vector>

//return fibonacci sequence of given number
int fibonacci(int n){
  if (n <= 1){
    return n;
  }
  else {
    return fibonacci(n-1) + fibonacci(n-2);
  }
}

//reverse a string
std::string reverse_string(std::string s){
  std::string reversed;
  for (int i=s.length()-1; i>=0; --i){
    reversed += s.at(i); 
  }
  return reversed;
}

//check if string is a plaindrome or not
bool check_palindrome(std::string s){
  for (int i=0, j=s.length()-1; i<s.length(); i++, j--){
    if (s[i] == s[j]) continue;
    else
      return false;
  }
  return true;
}

//returns string array up to given num, if divisible by 3 and 5 fizzbuzz, if 3 fizz, if 5 buzz, else number
std::vector<std::string> fizz_buzz(int num){
  std::vector<std::string> list;
  for (int i=1; i<=num; i++){
    if (i % 3 == 0 && i % 5 == 0){
      list.push_back("FizzBuzz");
    }
    else if (i % 3 == 0){
      list.push_back("Fizz");
    }
    else if (i % 5 == 0){
      list.push_back("Buzz");
    }
    else{
      list.push_back(std::to_string(i));
    }
  }
  return list;
}