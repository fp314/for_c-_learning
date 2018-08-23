#include<iostream>

double square(double x){
	auto d = 1.3;
	return x*x;
}

void print_square(double x){
	std::cout << "the square of " << x << "is : " << square(x) << "\n";
}

bool accept(){
	int tries = 1;
	while(tries <= 3){
		std::cout<<"Do you want to proceed(y or n)?\n";
		char answer;
		std::cin>>answer;
		
		switch(answer){
		case 'y':
			return true;
		case 'n':
			return false;
		default:
			std::cout<<"sorry, I don`t understand that!\n";
			tries++;
		}		
	}
	std::cout<<"I`ll take thst for a no. \n";
	return false;	
}
void increment(){
	int array[] = {1,2,3,4,5};
	
	for(auto& x : array){
		++x;
	}
	std::cout<<"{";
	for(auto x : array){
		std::cout<< " " << x << " ";
	}
	std::cout<<"};\n";
}
int main(){
	int* intptr = nullptr;
	increment();
	//accept();
	std::cout << "Hello, World! \n";
	print_square(9.9);
}