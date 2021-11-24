#ifndef ELECTION_H_
#define ELECTION_H_
struct currentValidID{
    int year;
    char branch[6];
    int totalVoters;
};
typedef struct candidate{
    int cid;
    char cname[20];
    int votes;
}CANDIDATE;

//GLOBALS --------------------------------------------------------
struct currentValidID currentValidID; //stores current Valid user ID parameters
CANDIDATE candidateArray[20]; //to store information all candidates
int numberOfCandidates; //Total number of candidates standing for election
char studentVotes[200]; //to store information of votes given by each student
//--------------
#endif