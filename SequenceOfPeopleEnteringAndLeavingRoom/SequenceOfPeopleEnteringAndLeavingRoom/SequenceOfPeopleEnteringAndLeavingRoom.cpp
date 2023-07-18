// SequenceOfPeopleEnteringAndLeavingRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

static bool light = false; //turn on/off
static int counter = 0; //how much time turn on light


void times(const vector<pair<int, int>>& persons) {

	vector <pair<int, int>> room;

	for (int time = 1; time < 24; time++) {				//n
		for (int i = 0; i < persons.size(); i++) {		//n
			if (time == persons[i].first) {				//n^2
				room.push_back(persons[i]);
				cout << endl << "ENTER: " << persons[i].first << ", " << persons[i].second;

				if (room.empty()) {						//n^2
					light = true;
					counter++;
				}
			}
			if (time == persons[i].second) {			//n^2
				for (int j = 0; j < room.size(); j++) {		//n
					if (persons[i].second == room[j].second)	//n^2
						room.erase(room.begin() + j);

					cout << endl << "LEAVE: " << persons[i].first << ", " << persons[i].second;

					if (room.empty()) {						//n^2
						light = false;
						counter++;
					}
				}
			}
		}
	}

}

int main() {

	int x = 1;
	int y = 2;

	int x1 = 1;
	int y1 = 4;

	int x2 = 3;
	int y2 = 6;

	vector<pair<int, int>> timesPair;

	timesPair.push_back(make_pair(x, y));
	timesPair.push_back(make_pair(x1, y1));
	timesPair.push_back(make_pair(x2, y2));

	times(timesPair);

	cout << endl << "Counter = " << counter << endl;


	return 0;
}
