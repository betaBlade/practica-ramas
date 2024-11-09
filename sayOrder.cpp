#include <iostream>
#include <string>

bool isAscending(int a, int b, int c){
   bool result = false;
   if(a < b && b < c){
      result = true;
   }
   return result; 
}

bool isDescending(int a, int b, int c){
   bool result = false;
   if(a > b && b > c){
      result = true;
   }
   return result;
}

int main(){
   int first;
   int second;
   int third;
   std::string result;
   
   std::cout << "Enter the first number: ";
   std::cin >> first;
   std::cout << "Enter the second number: ";
   std::cin >> second;
   std::cout << "Enter the third number: ";
   std::cin >> third;

   if(isAscending(first, second, third)){
      result = "Increasing";
   }else if(isDescending(first, second, third)){
      result = "Decreasing";
   }else{
      result = "Neither";
   }
      
   std::cout << "The values were entered in " 
	     << result << " order" << std::endl;

   return 0;
}
