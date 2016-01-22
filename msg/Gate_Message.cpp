#include "Gate_Message.h"


MSG_112000::MSG_112000(void){
	reset();
}

void MSG_112000::serialize(Block_Buffer & w) const {
	w.write_string(account);
	w.write_string(session);
}

int MSG_112000::deserialize(Block_Buffer & r) {
	if (r.read_string(account) || r.read_string(session)){
		return -1;
	}
	return 0;
}

void MSG_112000::reset(){
	account.clear();
	session.clear();
}

MSG_112001::MSG_112001(void){
	reset();
}

void MSG_112001::serialize(Block_Buffer & w) const {
	w.write_string(account);
}

int MSG_112001::deserialize(Block_Buffer & r) {
	if (r.read_string(account)){
		return -1;
	}
	return 0;
}

void MSG_112001::reset(){
	account.clear();
}
