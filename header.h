#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <random>
#include <functional>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1,vector<int>& nums2){
	vector<double> res;
	merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(res));
	auto last = unique(res.begin(),res.end());
	res.erase(last,res.end());
	int l = res.size();
	if(l%2 == 0){
		return (res[l/2-1]+res[l/2])/2;
	}
	else{
		return res[l/2];
	}
}
//first modification
//second modification
