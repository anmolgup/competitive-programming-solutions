#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int n,i,depth = 0,max_depth = 0,max_pos = 0,length = 0,max_len = 0,max_len_pos = 0;

	cin >> n;

	long long int arr[n];

	for(i = 0;i < n;i++) {
		cin >> arr[i];

		if(arr[i] == 1){
			depth += 1;
		}

		if(arr[i] == 2){
			depth -= 1;
		}

		if(max_depth < depth){
			max_depth = depth;
			max_pos = i+1;
		}

		if(depth > 0){
			length += 1;
		}

		if(depth == 0){

			if(length > max_len) {
				max_len = length;
				max_len_pos = i-length+1;
			}

			
		}
	}

	cout << max_depth << " " << max_pos << " " << max_len+1 << " " << max_len_pos << endl;

	return 0;
}
