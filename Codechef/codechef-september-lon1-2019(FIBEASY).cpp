#include <bits/stdc++.h>

using namespace std;

long long int fib(long long int f[], long long int n) 
{ 
    f[0] = 0; 
    f[1] = 1; 
  
    for (long long i = 2; i <= n; i++) 
        f[i] = (f[i - 1] + f[i - 2]) % 10; 
  
    return f[n]; 
} 
  
int findLastDigit(int n) 
{ 
    long long int f[60] = {0}; 
    fib(f, 60); 
  
    return f[n % 60]; 
} 

int main(int argc, char const *argv[])
{
	long long int t,x,result;

	cin >> t;

	while(t--) {

		long long int n,i;
		cin >> n;
		if(n == 1){
			cout << 0 << endl;
		}

		else if(n == 2){
			cout << 1 << endl;
		}

		else if(n == 3){
			cout << 1 << endl;
		}

		else {


			long long int step_count = 0;

			while(n != 1){
				n = n/2;
				step_count++;
			}

			//cout << step_count << endl;

			step_count = pow(2,step_count);

			//cout << step_count << endl;

			int res = findLastDigit(step_count-1);

			cout << (res)%10 << endl;
			
		}

	}


	return 0;
}