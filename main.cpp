#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > threeSum(vector<int>& nums) {
	

    vector<vector<int> > ans;
    if(nums.size() == 0){
        return ans;
    }

    sort(nums.begin(), nums.end());

    // ±éÀú
    for(int i = 0 ; i < nums.size(); i++){

        if(nums[i] > 0){
            return ans;
        }

        if(i > 0 and nums[i] == nums[i-1]){
            continue;
        }

        int left = i + 1;
        int right = nums.size() - 1;

        while(left < right){

            if(nums[i] + nums[left] + nums[right] == 0){
                vector<int> tmp;
                tmp.push_back(i);
                tmp.push_back(left);
                tmp.push_back(right);
                ans.push_back(tmp);
                
				printf("%d %d %d\n", nums[i], nums[left], nums[right]);
                while(left < right and nums[left] == nums[left + 1]){
                    left++;
                    //cout << 9999 << endl;
                }
                while(left < right and nums[right] == nums[right - 1]){
                    right--;
                    // cout << 9999 << endl;
                }
                left++;
                right--;
                
                

            }else if(nums[i] + nums[left] + nums[right] > 0){
                right--;
                //cout << 9999 << endl;

            }else{
                left++;

            }

			
        }


    }


    return ans;
}

int main(){
	// freopen("input.txt", "r", stdin);
	int arr[6] = {-1,0,1,2,-1,-4};
	vector<int> s(arr,arr+6); 
	threeSum(s);
	
	return 0;
}


