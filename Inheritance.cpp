#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};


class Student :  public Person{
	private:
		vector<int> testScores; 

	public:
  		// Write your constructor
        Student(string firstName, string lastName, int identification, vector < int > & scores);
  		// Write char calculate()
        char calculate();
};

Student::Student(string firstName, string lastName, int identification, vector < int > & scores) : Person(firstName, lastName, identification){
    for(int i = 0; i < scores.size(); i++){
		testScores.push_back(scores[i]);
	}
}

char Student::calculate(){
    double totalscore = 0;
            for (int i = 0; i < testScores.size(); i++){
                totalscore += testScores[i];
            }
            totalscore /= testScores.size();
            if (totalscore >= 90 && totalscore <= 100){
                return 'O';
            }
            else if (totalscore >= 80 && totalscore < 90){
                return 'E';
            }
            else if (totalscore >= 70 && totalscore < 80){
                return 'A';
            }
            else if (totalscore >= 55 && totalscore < 70){
                return 'P';
            }
            else if (totalscore >= 40 && totalscore < 55){
                return 'D';
            }
            else if (totalscore < 40){
                return 'T';
            }
            return 'T';
}

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}