#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  // Create an array of integers
  int R1[12] = {162 ,165, 174 ,175 ,170 ,180, 155,155,175,178,170,163};
  int x = sizeof(R1) / sizeof(R1[0]);
  
  int W1[12] = {61,105,64,65,55,60,56,40,53,45,49,53};
  int y = sizeof(W1) / sizeof(W1[0]);
  
  string N1[12] ={"ปอนด์","แฟรงค์","เท็น","ฟิว","ปาล์ม","บอส","มิ้ง","มาย","อชิ","เบียร์","จิ","เนิร์ต"};
  int z = sizeof(N1) / sizeof(N1[0]);
  
sort(R1,R1+x);  
  for (int num : R1) {
    cout << num << "\n";
  }
cout << "===========================" << endl;
sort(R1,R1+x,greater <int>());  
  for (int num : R1) {
    cout << num << "\n";
  }
cout << "===========================" << endl;
sort(W1,W1+y);
  for(int Num : W1){
  	cout << Num << endl;
  }
cout << "===========================" << endl;
sort(W1,W1+x,greater <int>());  
  for(int Num : W1){
  	cout << Num << endl;
  }
cout << "===========================" << endl;
  for(const string&name : N1){
 	cout << name <<endl;
  }    
  cout << "===========================" << endl;
  sort(N1, N1 + z);
  for(const string&name : N1){
 	cout << name <<endl;
  }    
  return 0;
}
