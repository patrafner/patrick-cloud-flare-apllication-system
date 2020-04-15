#include <iostream>


int main() {
	std::string ip;
	int choice;
	int count;
	std::cout << "Please enter the IP adress or\n";
	std::cout << "website you would like to ping\n";
	std::cin >> ip;
	std::cout << "Ready to Ping " << ip << "\n";
	std::cout << "How many times would you want to ping? ";
	std::cin >> count;
	std::cout << "How would you like to see the results?\n ";
	std::cout << "Please type 1 or 2 \n";
	std::cout << "1 - In a file \n";
	std::cout << "2 - On the screen \n";
	std::cin >> choice;

	if (choice == 1){
		for (int i = 1; i <= count; i++){
		system( ("ping -c1 " + ip + " > ping.txt").c_str() );
	}
		std::cout << "Thank you the results are in ping.txt\n";

	}
	else if (choice == 2 ){
		for (int i = 1; i <= count; i++){
			system( ("ping -c1 " + ip).c_str() );
		}
		

		std::cout << "Thank you\n";
	}

	else {
		std::cout << "Please make another choice\n";
		
		std::cout << "Please type 1 or 2 \n";
		std::cout << "1 - In a file \n";
		std::cout << "2 - On the screen \n";
		std::cin >> choice;
	}


	
	
	
	
	return 0;
}



