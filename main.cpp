#include "bits/stdc++.h"
#include "windows.h"
using namespace std;
typedef long long ll;
ll getRand(ll minn, ll maxx) {
	return (rand() % (maxx - minn + 1)) + minn;
}
int main() {
	srand(time(nullptr));
	ll minn, maxx;
	printf("-----------====+====----------\n   The Boom Of The Numbers!   \n       Made by TTHILLTT       \nPlease enter the min & max what the boom is \n ");
	scanf("%lld %lld", &minn, &maxx);
	printf("How many players who play this:");
	ll playersVal;
	scanf("%lld",&playersVal);
	vector<string> players(playersVal);
	ll playerEnterTemp=0;
	for (auto& i:players) {
		cout<<++playerEnterTemp<<'.';
		cin>>i;
	}
	ll playerCnt=0;
	ll theBoom = getRand(minn, maxx);
	string theUsersAnswer;
	while (theUsersAnswer != to_string(theBoom)) {
		cout<<"-----------====+====----------\nIt's "<<players[playerCnt]<<"'s round!\n Answer your answer";
		cin >> theUsersAnswer;
		if (theUsersAnswer == "1e45141919810") {
			printf("The boom is:%lld", theBoom);
			return 0;
		}
		if (theUsersAnswer == to_string(theBoom)) {
			system("cls");
			system("color c");
			ll t = 100;
			while (t--) {
				cout << "BOOM!!!\n";
				Sleep(10);
			}
			cout<<endl;
			system("color a");
			cout<<"Winner:";
			for (auto& i:players) {
				if (i!=players[playerCnt]) {
					cout<<i<<' ';
				}
			}
			cout<<endl<<endl;
			system("color c");
			cout<<"Loser:"<<players[playerCnt];
			break;
		}
		if (stoll(theUsersAnswer) < maxx && stoll(theUsersAnswer) > theBoom) {
			maxx = stoll(theUsersAnswer);
		} else if (stoll(theUsersAnswer) > minn && stoll(theUsersAnswer) < theBoom) {
			minn = stoll(theUsersAnswer);
		}
		printf("-----------====+====----------\nThe boom is among %lld ~ %lld\n", minn, maxx);
		playerCnt++;
		if (playerCnt == playersVal) {
			playerCnt=0;
		}
	}
	return 0;
}