/* 
 * File:   FA_State.h
 * Author: Omnia Dawy
 *
 * Created on March 21, 2013, 5:06 PM
 */
#include <string>
#include <stack>
#include <map>
#include <deque>
#include <vector>
#include <set>
#include <algorithm>
#include <list>
using namespace std;
#ifndef FA_STATE_H
#define	FA_STATE_H

/*
 * The state of the finite Automata
 *
 * */
class FA_State {
public:
	/*----------------------------------------Attributes---------------------------------------*/

	/**id of this state*/
	int id;
	/**Transitions from this state to others*/
	multimap<string, FA_State*> transitions_to;
	/**if this state is accepting state or not*/
	bool acceptingState;
	/**Transitions from others to this state*/
	set<FA_State*> transitions_from;
	/*--------------------------------------Constructors-----------------------------------------*/
	FA_State();
	FA_State(int s_id);
	FA_State(set<FA_State*> state, int s_id);
	virtual ~FA_State();
	/*----------------------------------------METHODS--------------------------------------------*/
	void AddTransition(string input, FA_State* state);
	void removeTransition(FA_State* state);
	void getTransition(string input, vector<FA_State*> &states);
	FA_State& operator=(const FA_State& other);
	bool operator==(const FA_State& other);

};

#endif	/* FA_STATE_H */


// NFA Table
typedef deque<FA_State*> FSA_TABLE;

