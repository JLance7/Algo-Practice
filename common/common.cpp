#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

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
  for (unsigned int i=0, j=s.length()-1; i<s.length(); i++, j--){
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

//get matching characters indexes in a string
std::unordered_map<char, std::vector<int>> matches(std::string list){
  std::unordered_map<char, std::vector<int>> umap;
  for (unsigned int i=0; i<list.length(); i++){
    char c = list.at(i);

    //found key
    std::vector<int> my_list;
    if (umap.find(c) != umap.end()){
      my_list = umap[c];
      my_list.push_back(i);
    }
    else {
      my_list.push_back(i);
    }
    umap[c] = my_list;
  }

  //remove keys with only one value
  std::unordered_map<char, std::vector<int>>::iterator itr;
  std::vector<char> keys;
  for (itr = umap.begin(); itr != umap.end(); itr++){
    if (itr->second.size() == 1){
      keys.push_back(itr->first);
    }
  }

  for (auto key: keys){
    umap.erase(key);
  }

  return umap;
}

//check if number is prime or not
bool is_prime(unsigned int num){
  if (num == 0 || num == 1) return false;
  for (unsigned int i=2; i<num/2; i++){
    if (num % i == 0) return false;
  }
  return true;
}

//show prime numbers up to n
void print_primes(int n){
  std::vector<int> primes;
  if (n == 1) return;
  if (n == 2) {
    std::cout << 2 << std::endl;
    return;
  }
  for (int i=2; i<n+1; i++){
    bool prime = true;
    for (int j=2; j<=i/2; j++){
      if (i % j == 0){
        prime = false;
        break;
      }
    }
    if (prime){
      primes.push_back(i);
    }
  }
  
  for (int prime: primes){
    std::cout << prime << " ";
  }
  std::cout << "\n";
}

//prime numbers using sieves of erasthatos (more optimal)
//not prime if number is divisible by i and number is >= i^2
void print_primes_sieves(int n){
  int size = n + 1;
  bool primes[size];
  //mark all numbers as true at start
  for (int i=0; i<size; i++){
    primes[i] = true;
  }

  //for each number, if it is true
  for (int i=2; i*i <= n; i++){
    if (primes[i] == true){
      //starting from that number squared, any number divisiible by it is not prime
      for (int j=i * i; j<= n; j+= i){
        primes[j] = false;
      }
    }
  }

  for (int i=2; i<size; i++){
    if (primes[i]){
      std::cout << i << " ";
    }
  }
  std::cout << "\n";
}