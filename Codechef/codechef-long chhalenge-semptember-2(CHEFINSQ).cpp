#include <bits/stdc++.h>

using namespace std;

unsigned long long int nChoosek( unsigned long long int n, unsigned long long int k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    unsigned long long int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}
   


int main(int argc, char const *argv[])
{
	long long int t;
	cin >> t;

	while(t--){
		long long int n,k,i,x,len = 0,result = 1;

		cin >> n >> k;

		long long int arr[n] = {0};

		long long int min_req[101] = {0};

		long long int actual[101] = {0};

		long long int count = 0;

		for(i = 0;i < n;i++){
			cin >> arr[i];
			actual[arr[i]]++;
		}

		sort(arr,arr+n);

		for(i = 0;i < k;i++){
			min_req[arr[i]]++;
		}

		for(i = 0;i < 101;i++){
			//cout << result << " ";
			if(min_req[i] != 0){
				unsigned long long int x = nChoosek(actual[i],min_req[i]);
				result = result*x;
			}
		}

		cout << result << endl;

	}
	return 0;
}