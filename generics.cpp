#include <iostream>
#include <vector>

using namespace std;
// including notes from ECE 297
// a template can be used for many different types
//
template < typename Element >
void printArray(vector < Element > list) {
    for (int i = 0; i < list.size(); i++)
        cout << list[i] << endl;
}
//


template < class variable_type >
// when taking in a variable type like int or double,
it has to be consistent, either all int, or all double.
variable_type/*return_type*/ function_name(variable_type variable_name){
	//function_body;
	return variable_name;
}

int main() {
  
    vector < int > vInt{1, 2, 3};
    vector < string > vString{"Hello", "World"};
    
    printArray < int > (vInt);
    printArray < string > (vString);
    
    return 0;
}

template < class first_type, class second_type >
class myPair{
public:
	// ...
private:
	// ...
}