#include "header.h"

int main(){
	int n,m,a;
	cout<<"Введите количество элементов в каждом из двух массивов"<<endl;
	cin>>n>>m;
	cout<<"Введите отсортированные массивы(сначала вводите первый, затем второй)"<<endl;
	vector<int> nums1,nums2;
	for(int i =0;i<n;i++){
		cin>>a;
		nums1.insert(nums1.end(),a);
	}
	for(int i =0;i<m;i++){
		cin>>a;
                nums2.insert(nums2.end(),a);
	}
}
