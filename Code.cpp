#include<iostream>
#include<string>
using namespace std;
class Vote{
	private:
		string name;
		int registered_voters=0;
		int president;
		int vote=0;
    	int railas_votes=0;
		int gideons_votes=0;
		int rutos_votes=0;
		int didas_votes=0;
		int id_number1;
	public:
		void login(){
			cout<<"\t\t\tENTER YOUR NATINAL IDENTITY NUMBER:"<<endl;
			cin>>id_number1;
			if(id_number1==24557137||id_number1==24557138||id_number1==24557139){
				Display();
			}	
			else{
				cout<<"\t\t\tWRONG ID KINDLY TRY AGAIN"<<endl;
				login();
			}
			}
		
	
		void Display(){
			cout<<"\t\t\tFEEL FREE AND VOTE WISE"<<endl;
			cout<<"\n\t\t\tNO BRIBARY"<<endl;
			cout<<"\n\t\t\tWELCOME TO IEBC GENERAL VOTTING SYSTEM"<<endl;
			cout<<"\t\t\t****************************************"<<endl;
			cout<<"\n\t\t\t\t ELECT YOUR PRESIDENT"<<endl;
			cout<<"\t\t\t\t***********************"<<endl;
			cout<<"\n\t\t\tENTER 1 TO VOTE RAILA OMOLLO ODINGA  (-ODM-)"<<endl;
			cout<<"\t\t\tENTER 2 TO VOTE WILLIAM RUTO  (-ANC-)"<<endl;
			cout<<"\t\t\tENTER 3 TO VOTE ABDUBA DIDA (-DP-)"<<endl;
			cout<<"\t\t\tENTER 4 TO VOTE GIDION MOI (-KANU-)"<<endl;
			cout<<"\n\t\t====================================================="<<endl;
			cout<<""<<endl;
			cout<<"\t\t\tFEEL FREE TO MAKE CHANGES IF YOU DID NOT MAKE THE RIGHT CHOICE"<<endl;
			cout<<"\t\t\t**********************************************************************"<<endl;
			cout<<"\n\t\t\tENTER 6 TO DE_VOTE RAILA OMOLLO ODINGA  (-ODM-)"<<endl;
			cout<<"\t\t\tENTER 7 TO DE_VOTE WILLIAM RUTO  (-ANC-)"<<endl;
			cout<<"\t\t\tENTER 8 TO DE_VOTE ABDUBA DIDA (-DP-)"<<endl;
			cout<<"\t\t\tENTER 9 TO DE_VOTE GIDION MOI (-KANU-)"<<endl;
			Output();
		}
	public:
		void Output(){
			cout<<"\n\t\t\t\tCAST YOUR VOTE"<<endl;
			cin>>president;
			switch(president){
				case 1:
					cout<<"\n\t\t\tThank You For Voting RAILA"<<endl;
					cout<<"\t\t\tODM PRESIDENTIAL CANDIDATE"<<endl;
					cout<<"\n\t\t================================================"<<endl;
					cout<<"\n\t\t\tEnter name to confirm your vote"<<endl;
					cin>>name;
					cout<<"\n\t\t================================================="<<endl;
					cout<<"\n\t\t\tTHANK YOU\t"<<name<<"\tFOR CHOOSING RAILA"<<endl;
					cout<<"\t\t\t\tGOD BLESS YOU"<<endl;
					cout<<vote++<<endl;
					cout<<"\t\t\tTotal Votes casted is"<<"\t"<<vote<<endl;
					cout<<railas_votes++<<endl;
					cout<<"\t\t\ttotal votes for Raila\t"<<railas_votes<<endl;
					break;
				case 2:
					cout<<"\n\t\t\tThank You For Voting RUTO"<<endl;
					cout<<"\t\t\tANC PRESIDENTIAL CANDIDATE"<<endl;
					cout<<"\n\t\t=================================================="<<endl;
					cout<<"\n\t\t\tEnter name to confirm your vote"<<endl;
					cin>>name;
					cout<<"\n\t\t==================================================="<<endl;
					cout<<"\n\t\t\tTHANK YOU\t"<<name<<"\tFOR CHOOSING RUTO"<<endl;
					cout<<"\t\t\t\tGOD BLESS YOU"<<endl;
					cout<<vote++<<endl;
					cout<<"\t\t\tTotal votes casted is"<<"\t"<<vote<<endl;
					cout<<rutos_votes++<<endl;
					cout<<"\t\t\tTotal for Ruto is:"<<rutos_votes<<endl;
					break;
				case 3:
					cout<<"\n\t\t\tThank For Voting DIDA"<<endl;
					cout<<"\t\t\tDP PRESIDENTIAL CANDIDATE"<<endl;
					cout<<"\n\t\t===================================================="<<endl;
					cout<<"\n\t\t\tenter name to confirm your vote"<<endl;
					cin>>name;
					cout<<"\n\t\t===================================================="<<endl;
					cout<<"\n\t\t\tTHANK YOU\t"<<name<<"\tCHOOSING DIDA"<<endl;
					cout<<"\t\t\t\tGOD BLESS YOU"<<endl;
					cout<<vote++<<endl;
					cout<<"\t\t\tTotal votes casted is\t"<<vote<<endl;
					cout<<didas_votes++<<endl;
					cout<<"\t\t\t Total votes for Dida is\t"<<didas_votes<<endl;
					break;
				case 4:
					cout<<"\n\t\tThank You For Voting Gideon"<<endl;
					cout<<"\t\tKANU PRESIDENTIAL CANDIDATE"<<endl;
					cout<<"\n\t\t=================================================="<<endl;
					cout<<"\n\t\t\tenter name to confirm your vote"<<endl;
					cin>>name;
					cout<<"\n\t\t===================================================="<<endl;
					cout<<"\n\t\t\THANK YOU "<<name<<" FOR CHOOSING MOI"<<endl;
					cout<<"\t\t\t\tGOD BLESS YOU"<<endl;
					cout<<vote++<<endl;
					cout<<"\t\t\tTotal votes casted is\t"<<vote<<endl;
					cout<<gideons_votes++<<endl;
					cout<<"\t\t\t Total votes for Gideon is\t"<<gideons_votes<<endl;
					break;
				case 6:
					cout<<"\n\t\tThank You De_voting Raila"<<endl;
					cout<<"\t\tODM PRESIDENIAL CANDIDATE<"<<endl;
					cout<<"\n\t\t=================================================="<<endl;
					cout<<"\n\t\t\tenter name to confirm your vote"<<endl;
					cin>>name;
					cout<<"\n\t\t===================================================="<<endl;
					cout<<"\n\t\tThank You "<<name<< "For De_voting Raila"<<endl;
					cout<<"\t\t\t\tBe blessed as you make a new choice"<<endl;
					cout<<vote--<<endl;
					cout<<"\t\t\tTotal votes casted is\t"<<vote<<endl;
					cout<<railas_votes--<<endl;
					cout<<"\t\t\ttotal votes for Raila\t"<<railas_votes<<endl;
				case 7:
					cout<<"\n\t\t\tThank You For De_Voting RUTO"<<endl;
					cout<<"\t\t\tANC PRESIDENTIAL CANDIDATE"<<endl;
					cout<<"\n\t\t=================================================="<<endl;
					cout<<"\n\t\t\tEnter name to confirm your vote"<<endl;
					cin>>name;
					cout<<"\n\t\t==================================================="<<endl;
					cout<<"\n\t\t\tTHANK YOU "<<name<< "for Devortig Ruto"<<endl;
					cout<<"\t\t\t\tBe blessed as you make a new choice"<<endl;
					cout<<vote--<<endl;
					cout<<"\t\t\tTotal votes casted is"<<"\t"<<vote<<endl;
					cout<<rutos_votes--<<endl;
					cout<<"\t\t\tTotal for Ruto is:"<<rutos_votes<<endl;
					break;
				case 8:
					cout<<"\n\t\t\tThank For De_Voting DIDA"<<endl;
					cout<<"\t\t\tDP PRESIDENTIAL CANDIDATE"<<endl;
					cout<<"\n\t\t===================================================="<<endl;
					cout<<"\n\t\t\tenter name to confirm your vote"<<endl;
					cin>>name;
					cout<<"\n\t\t===================================================="<<endl;
					cout<<"\n\t\t\tThank you "<<name<< "For de_vorting Dida"<<endl;
					cout<<"\t\t\t\tBe blessed as you make anew choice"<<endl;
					cout<<vote--<<endl;
					cout<<"\t\t\tTotal votes casted is\t"<<vote<<endl;
					cout<<didas_votes--<<endl;
					cout<<"\t\t\t Total votes for Dida is\t"<<didas_votes<<endl;
					break;
				case 9:
					cout<<"\n\t\tThank You For Voting De_Gideon"<<endl;
					cout<<"\t\tKANU PRESIDENTIAL CANDIDATE"<<endl;
					cout<<"\n\t\t=================================================="<<endl;
					cout<<"\n\t\t\tenter name to confirm your vote"<<endl;
					cin>>name;
					cout<<"\n\t\t===================================================="<<endl;
					cout<<"\n\t\t\Thank you "<<name<< " For de_vorting Moi"<<endl;
					cout<<"\t\t\t\Be blessed as you make anew choice"<<endl;
					cout<<vote--;
					cout<<"\t\t\tTotal votes casted is\t"<<vote<<endl;
					cout<<gideons_votes--<<endl;
					cout<<"\t\t\t Total votes for Gideon is\t"<<gideons_votes<<endl;
					break;
				default:
					cout<<"\n\t\t\t CHOOSE BETWEEN 1 TO 9:"<<endl;
			 			
			}
			cout<<"\n\t\t\tTOTAL VOTES CASTED ARE:"<<vote<<endl;
			cout<<"\t\t\t========================================"<<endl;
			cout<<"\t\t\tTOTAL VOTES FOR RAILA:\t"<<railas_votes<<endl;
			cout<<"\t\t\tTOTAL VOTES FOR RUTO:\t"<<rutos_votes<<endl;
			cout<<"\t\t\tTOTAL VOTES FOR DIDA:\t"<<didas_votes<<endl;
			cout<<"\t\t\tTOTAL VOTES FOR GIDEON:\t"<<gideons_votes<<endl;
			cout<<"\t\t\t==============================================\n"<<endl;
			if(railas_votes > rutos_votes && railas_votes > didas_votes && railas_votes > gideons_votes){
				cout<<"\t\t\tON THE LEAD IS RAILA ODINGA WITH :"<<railas_votes<<" VOTES OUT OF "<<vote<<" TOTAL VOTES CASTED"<<endl;
			}
			else if(rutos_votes > railas_votes && rutos_votes > didas_votes && rutos_votes > gideons_votes){
				cout<<"\t\t\tON THE LEAD IS WILLIAM RUTO WITH :"<<rutos_votes<<" VOTES OUT OF "<<vote<<" TOTAL VOTES CASTED"<<endl;
			}
			else if(didas_votes > railas_votes && didas_votes > rutos_votes && didas_votes > gideons_votes){
				cout<<"\t\t\tON THE LEAD IS ABDUBA DIDA WITH :"<<didas_votes<<" VOTES OUT OF "<<vote<<" TOTAL VOTES CASTED"<<endl;
			}
			else if(gideons_votes > railas_votes && gideons_votes > rutos_votes && gideons_votes > didas_votes){
				cout<<"\t\t\tON THE LEAD IS GIDEON MOI WITH :"<<gideons_votes<<" VOTES OUT OF "<<vote<<" TOTAL VOTES CASTED"<<endl;
			}
			else {
				cout<<"\t\t\tNO WINNER BECAUSE THERE IS A TIE IN TOP POSITION"<<endl;
			}
			login();
			}	
		};
		int main(){
		
			Vote V;
			V.login();
			V.Display();
			V.Output();
			return 0;