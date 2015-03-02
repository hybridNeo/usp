#include <iostream>
using namespace std;
int main(void){
	int T;
	cin >> T;
	while(T>0){
		int r,c;
		cin >> r >> c;
		char arr[r][c];
		for(int i =0;i< r;i++){
			cin >> arr[i];
			cout << arr[i];
			
		}
		T--;
	}
}
