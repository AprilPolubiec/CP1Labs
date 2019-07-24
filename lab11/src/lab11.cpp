//============================================================================
// Program     : lab11.cpp
// Programmer  : April Polubiec
// Date        : December 5, 2018
// Purpose     : Test concepts of file streams and command line arguments.
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {

	ifstream ins;
	ofstream outs;

	if (argc!=3){
		cerr << "Usage " << argv[0] << "srcfile logfile" << endl;
		return EXIT_FAILURE;
	}

	string dataFilename = argv[1];
	string logFilename = argv[2];

	ins.open(dataFilename.c_str());
	if(ins.fail()){
		cerr << "Unable to open " << logFilename << " for read." << endl;
		return EXIT_FAILURE;
	}

	outs.open(logFilename.c_str());
	if(outs.fail()){
		cerr << "Unable to open " << logFilename << " for read." << endl;
		return EXIT_FAILURE;
	}

	int numberOfRecords = 0, totalAge = 0, age;
	const int SIZE=5;
	string languages[SIZE] = {"JavaScript", "Java", "C++", "Python", "Haskell"};
	int languageCounts[SIZE] = {0, 0, 0, 0, 0};
	string firstName, lastName, language, gender;


	ins.ignore(1000, '\n');

	while(ins>>firstName>>lastName>>gender>>age>>language){
		totalAge += age;
		numberOfRecords += 1;

		if (language == "JavaScript")
			languageCounts[0] += 1;
		if (language == "Java")
			languageCounts[1] += 1;
		if (language == "C++")
			languageCounts[2] += 1;
		if (language == "Python")
			languageCounts[3] += 1;
		if (language == "Haskell")
			languageCounts[4] += 1;

	}


	int max = 0, mostPopularLoc;
	for (int i=0; i<SIZE; ++i){
		if (languageCounts[i] > max)
		{
			max = languageCounts[i];
			mostPopularLoc = i;
		}
	}



outs << "Processed: " << dataFilename << endl;
outs << "Records: " << numberOfRecords << endl;
outs << "Average Age: " << totalAge/(float)numberOfRecords << endl;
outs << "Favorite Language: " << languages[mostPopularLoc];

outs.close();
ins.close();

	return 0;

}

