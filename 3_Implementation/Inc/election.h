#ifndef ELECTION_H_
#define ELECTION_H_

int extractYear(char userID[15]);


int extractRollNo(char userID[15]);
int checkBranchCode(char userID[15]);
int authenticateAdmin();
void banID();
void createCandidateFiles();
void deleteIllegalVote(char userID[15]);
int getWinner();
void initiateNewElection();
void saveElectionInfoInFile();
void loadElectionInfoFromFile();
void adminPanel();
int isValid(char userID[15]);
int isBanned(char userID[15]);
void studentPanel();
#endif