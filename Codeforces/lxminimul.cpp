#include <iostream>
#include <string>

int main(){
	int t,n;
	std::string s;

	std::cin >> t;
	while(t--){
		std::cin >> n >> s;
		int min = n-1;
		for(int i=n-1;i>=0;i--){
			if(s[i]<s[min]) min=i;
		}
		s.insert(0,1,s[min]);
		s.erase(min+1,1);
		std::cout << s << std::endl;
	}


	return 0;
}
