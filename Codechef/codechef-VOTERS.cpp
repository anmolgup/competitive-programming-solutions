#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	long long int n1,n2,n3,m,i,current,count = 0;

	cin >> n1 >> n2 >> n3;

	long long int arr[n1+n2+n3];

	m = n1 + n2 + n3;

	long long int final[m];

	for(i = 0; i < m; i++) {
		cin >> arr[i];
	}

	sort(arr,arr+m);

	i = 1;
	int j = 0;
	int count_final = 0;
	current = arr[0];

	while(i < m) {

		if(arr[i] != current) {
			if(count != 0) {
				final[j] = current;
				j++;
				count_final++;
				count = 0;
			}
			
			current = arr[i];
		}

		else if(arr[i] == current) {
			count += 1;
		}

		i++;

	}

	cout << count_final << endl;

	for(i = 0;i < count_final;i++) {
		cout << final[i] << endl;
	}




	return 0;
}
