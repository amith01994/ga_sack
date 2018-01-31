#include <iostream>
using namespace std;
int no_of_items = 0;
int knapsack_cap = 88;
int current_capacity = 0;

int main(){
  cout << "Number of items:";
  cin >> no_of_items;
  //cout << "No of items--->" << no_of_items << endl;
  int weights_arr[no_of_items];
  int value_arr[no_of_items];


  cout << "Input space seperated weight and value pairs:" << endl;
  for(int i = 0; i < no_of_items;i++){
    cin >> weights_arr[i];
    cin >> value_arr[i];

  }
  cout << "Weight:"<<weights_arr[0] << endl;
  cout << "Value:"<<value_arr[0] << endl;






}
