#include <iostream>
#include <cstdlib>

int main()
{
	std::string ans;
	int answer;
	srand(time(NULL));
	answer = std::rand() % 10;
	switch (answer)
	{
	case 1:
		ans = "It is certain.\n";
		break;
	case 2:
		ans = "It is decidedly so.\n";
		break;
	case 3:
		ans = "Most likely.\n";
		break;
	case 4:
		ans = "Outlook good.\n";
		break;
	case 5:
		ans = "Signs point to yes.\n";
		break;
	case 6:
		ans = "My reply is no.\n";
		break;
	case 7:
		ans = "Don't count on it.\n";
		break;
	case 8:
		ans = "My sources say no.\n";
		break;
	case 9:
		ans = "Outlook not so good.\n";
		break;
	case 0:
		ans = "Very doubtful.\n";
		break;
	default:
		ans = "Reply hazy, try again.\n";
		break;
	}
	std::cout << "The Magic 8-Ball says\n"
			  << ans << "\n";
	return 0;
}