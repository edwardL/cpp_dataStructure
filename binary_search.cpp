#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void input_data(vector<int> & data)
{
 cout<<"input data";
 int tmp;
 while(cin >> tmp && tmp != -10000){
   data.push_back(tmp);
 }
}

void output_data(vector<int> & data)
{
  cout << "输入的数据:";
  for(vector<int>::iterator it = data.begin(); it != data.end(); it++)
  {
	cout << *it << '\t';
  }
  cout << endl;
}

int bin_search(vector<int> & data, int val)
{
 int low = 0, high = data.size() - 1;
 int mid;
 while(low <= high){
  mid = (low + high) / 2;
  if(data[mid] < val)
	low = mid + 1;
  else if(data[mid] > val)
	high = mid - 1;
  else
	return mid;
 }
 return data.size();
}

int binary_search(vector<int> &v, int first, int last, int value)
{
 	int half = (first + last)/2;
	if(v[half] == value)
		return half;
	else if(v[half] < value)
		return binary_search(v,half,last,value);
	else
		return binary_search(v,first,half,value);
}

int main()
{
	vector<int> data;
 	srand(unsigned(time(0)));
	for(int i = 0; i < 10; ++i)
		data.push_back(rand() % 10);
	sort(data.begin(), data.end());

	cout << "data:" << endl;
  	for(int i =0; i < 10; ++i)
		cout << data[i] << " ";
	cout << endl;
 	int val = data[rand()%10]; 
    
      int index = binary_search(data,0,data.size()-1,val);	   
     if(index == data.size()){
 	cout << "index = " << index << ", data doesnot  have" << val << endl;
	return 0;
    }
    cout << "index = " << index << "data[index]=" << data[index] << endl;

   return 0;
}
