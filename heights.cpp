#include <iostream>
#include <list>

std::list<int> Heights(std::list<int> H){
	if(H.size()==0) return -1;
	std::list<int> output={(int)H.size()-1};
	int Max;
	Max=H[(int)H.size()-1];
	
	if(H.size()==1) return 0;
	for(int i=H.size()-2; i>-1; i--){
		if( H[i]>Max ){
			output.push_front(i);
			Max=H[i];
		}
	}
	return output;
}
