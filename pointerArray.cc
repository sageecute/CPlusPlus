#include<iostream>
using namespace std;
int main(){
	int b[] = {1,2,3};
	int a[][3] = {{1,2,3},{4,5,6}};
	cout<< *(a+1)[0];
}